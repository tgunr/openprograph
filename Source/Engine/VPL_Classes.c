/*
	
	VPL_Classes.c
	Copyright 2000 Scott B. Anderson, All Rights Reserved.
	
*/
#include <stdlib.h>
#include <string.h>

#include "VPL_Classes.h"
#include "VPL_Persistents.h"
#include <CoreServices/CoreServices.h>

extern V_Object string_to_object( Int1 *tempString , V_Environment environment );
extern V_Object unarchive_object(V_Environment environment, V_Archive archive);
extern Int4 attribute_offset( V_Class tempClass , Int1 *tempOString );
extern V_Archive archive_copy(V_Environment environment, V_Archive archive);
extern V_Object decrement_count(V_Environment environment,V_Object ptrO);


Nat4 destroy_classIndexTable(V_ClassIndexTable ptrC,V_Environment environment)
{
	if(ptrC == NULL) return kNOERROR;
	destroy_classIndexList(ptrC,environment);
	X_free(ptrC);
	return kNOERROR;
}

Nat4 destroy_classIndexList(V_ClassIndexTable ptrC,V_Environment environment)
{
	Nat4			counter = 0;

	if(ptrC == NULL) return kNOERROR;
	if(ptrC->numberOfClasses != 0){
		for(counter = 0; counter < ptrC->numberOfClasses; counter++)
		{
			if(ptrC->classes[counter] != NULL) {
				destroy_classEntry(ptrC->classes[counter],environment);
			}
		}
	}
	X_free(ptrC->classes);
	ptrC->classes = NULL;
	ptrC->numberOfClasses = 0;
	return kNOERROR;
}

Nat4 destroy_classEntry(V_ClassEntry theClassEntry,V_Environment environment)
{
	Nat4	numberOfValues = environment->totalValues;

	if(theClassEntry == NULL) return kNOERROR;
	if(theClassEntry->methods) X_free(theClassEntry->methods);
	if(numberOfValues && theClassEntry->values) {
		Nat4	counter = 0;
		for(counter=0;counter<numberOfValues;counter++){
			if(theClassEntry->values[counter]){
				V_WatchpointNode watchpointNode = theClassEntry->values[counter]->watchpointList;
				while(watchpointNode){
					V_WatchpointNode tempWatchpointNode = watchpointNode->previous;
					X_free(watchpointNode);
					watchpointNode = tempWatchpointNode;
				}
			}
			X_free(theClassEntry->values[counter]);
		}
		X_free(theClassEntry->values);
	}
	X_free(theClassEntry);
	return kNOERROR;
}

Nat4 destroy_classTable(V_Dictionary ptrC,V_Environment environment)
{
	Nat4	counter = 0;
	Nat4	theAttributeCounter = 0;

	
	if(ptrC == NULL) return kNOERROR;
	if(ptrC->numberOfNodes != 0){
		for(counter = 0; counter < ptrC->numberOfNodes; counter++)
		{
			if(ptrC->nodes[counter] != NULL) {
				V_Class theClass = (V_Class)((ptrC->nodes[counter])->object);
				V_Dictionary	attributeDictionary = theClass->attributes;
				if(attributeDictionary->numberOfNodes != 0){
					for(theAttributeCounter = 0; theAttributeCounter < attributeDictionary->numberOfNodes; theAttributeCounter++)
					{
						if(attributeDictionary->nodes[theAttributeCounter] != NULL) {
							decrement_count(environment,((V_Value)((attributeDictionary->nodes[theAttributeCounter])->object))->value);
							((V_Value)((attributeDictionary->nodes[theAttributeCounter])->object))->value = NULL;
						}
					}
				}
			}
		}
	}
	destroy_classList(ptrC,environment);
	X_free(ptrC);
	return kNOERROR;
}

Nat4 destroy_classList(V_Dictionary ptrC,V_Environment environment)
{
	Nat4			counter = 0;

	if(ptrC == NULL) return kNOERROR;
	if(ptrC->numberOfNodes != 0){
		for(counter = 0; counter < ptrC->numberOfNodes; counter++)
		{
			if(ptrC->nodes[counter] != NULL) {
				destroy_class((V_Class)((ptrC->nodes[counter])->object),environment);
				X_free(ptrC->nodes[counter]);
			}
		}
	}
	X_free(ptrC->nodes);
	ptrC->nodes = NULL;
	ptrC->numberOfNodes = 0;
	return kNOERROR;
}

Nat4 destroy_class(V_Class theClass,V_Environment environment)
{
	Nat4	counter = 0;

	if(theClass == NULL) return kNOERROR;
	destroy_classAttributes(theClass->attributes,environment);
	theClass->attributes = NULL;
	X_free(theClass->name);
	if(theClass->numberOfSuperClasses){
		for(counter=0;counter<theClass->numberOfSuperClasses;counter++){
			if(theClass->superClassNames[counter] != NULL) X_free(theClass->superClassNames[counter]);
		}
		X_free(theClass->superClassNames);
	}
	X_free(theClass);
	return kNOERROR;
}

Nat4 destroy_classAttributes(V_Dictionary ptrC,V_Environment environment)
{
	Nat4			counter = 0;

	if(ptrC == NULL) return kNOERROR;
	if(ptrC->numberOfNodes != 0){
		for(counter = 0; counter < ptrC->numberOfNodes; counter++)
		{
			if(ptrC->nodes[counter] != NULL) {
				destroy_classAttribute((V_Value)((ptrC->nodes[counter])->object),environment);
				X_free(ptrC->nodes[counter]);
			}
		}
	}
	X_free(ptrC->nodes);
	ptrC->nodes = NULL;
	ptrC->numberOfNodes = 0;
	X_free(ptrC);
	return kNOERROR;
}

Nat4 destroy_classAttribute(V_Value ptrC,V_Environment environment)
{
	V_ClassEntry	theClassEntry = NULL;
	Nat4			columnIndex = 0;
	if(ptrC == NULL) return kNOERROR;
	columnIndex = ptrC->columnIndex;
	
	theClassEntry = environment->classIndexTable->classes[ptrC->classIndex];
	if(theClassEntry->values[columnIndex]){
		V_WatchpointNode watchpointNode = theClassEntry->values[columnIndex]->watchpointList;
		while(watchpointNode){
			V_WatchpointNode tempWatchpointNode = watchpointNode->previous;
			X_free(watchpointNode);
			watchpointNode = tempWatchpointNode;
		}
		theClassEntry->values[columnIndex]->watchpointList = NULL;
	}

	X_free(theClassEntry->values[columnIndex]);
	theClassEntry->values[columnIndex] = NULL;

	if(ptrC->value != NULL) decrement_count(environment,ptrC->value);
	if(ptrC->valueArchive != NULL) X_free(ptrC->valueArchive);
	X_free(ptrC->objectName);
	X_free(ptrC);
	return kNOERROR;
}

V_Class get_class( V_Dictionary ptrT, Int1 *name )
{
        return (V_Class) get_node(ptrT,name);
}

V_Class class_new(Int1 *name,V_Environment environment)
{
	V_Dictionary		dictionary = environment->classTable;
	V_Class				theClass = NULL;
	V_ClassEntry		theClassEntry = NULL;
	V_DictionaryNode	theClassNode = NULL;
		
	theClassNode = find_node(dictionary,name);
	if(theClassNode){
		theClass = (V_Class) theClassNode->object;
		theClassEntry = environment->classIndexTable->classes[theClass->classIndex];
		theClassEntry->valid = kTRUE;
	} else theClass = VPL_class_entry_create(environment,name,kTRUE);

	return theClass;
}

V_Class VPL_class_entry_create(V_Environment environment,Int1* name,Nat4 valid)
{
	V_Dictionary		dictionary = environment->classTable;
	V_ClassIndexTable	theTable = environment->classIndexTable;
	Nat4				numberOfClassEntries = theTable->numberOfClasses;

	V_Class theClass = VPL_class_create(environment,name);

	V_ClassEntry theClassEntry = VPL_classEntry_create(environment,theClass,valid);

	add_node(dictionary,theClass->name,theClass);
	if(environment->postLoad) sort_dictionary(dictionary);
	theClass->classIndex = numberOfClassEntries;

	numberOfClassEntries++;
	theTable->classes = VPXREALLOC(theTable->classes,numberOfClassEntries,V_ClassEntry);
	theTable->classes[theClass->classIndex] = theClassEntry;
	theTable->numberOfClasses = numberOfClassEntries;
	return theClass;
}

V_Class VPL_class_create(V_Environment environment,Int1* name)
{
	V_Class theClass = (V_Class) X_malloc(sizeof (VPL_Class));
	theClass->name = new_string(name,environment);
	theClass->attributes = create_dictionary(0);
	theClass->numberOfSuperClasses = 0;
	theClass->superClassNames = NULL;
	theClass->classIndex = 0;
	theClass->numberOfChildren = 0;
	theClass->childrenNames = NULL;
	theClass->numberOfDescendants = 0;
	theClass->descendantNames = NULL;
	
	return theClass;
}

V_ClassEntry VPL_classEntry_create(V_Environment environment,V_Class theClass,Nat4 valid)
{
	Nat4 numberOfMethods = environment->totalMethods;
	Nat4 numberOfValues = environment->totalValues;
	
	V_ClassEntry theClassEntry = (V_ClassEntry) X_malloc(sizeof (VPL_ClassEntry));
	theClassEntry->valid = valid;
	theClassEntry->constructorIndex = -1;
	theClassEntry->destructorIndex = -1;
	theClassEntry->numberOfSuperClasses = 0;
	theClassEntry->superClasses = NULL;
	theClassEntry->theClass = theClass;

	if(numberOfMethods) {
		theClassEntry->methods = VPXMALLOC(numberOfMethods,V_Method);
		memset(theClassEntry->methods,0,numberOfMethods*sizeof(V_Method));
	}
	else theClassEntry->methods = NULL;

	if(numberOfValues) {
		theClassEntry->values = VPXMALLOC(numberOfValues,V_ValueNode);
		memset(theClassEntry->values,0,numberOfValues*sizeof(V_ValueNode));
	}
	else theClassEntry->values = NULL;
	
	return theClassEntry;
}

Nat4 VPL_get_class_index(V_Environment environment,Int1* className,Bool valid)
{
	V_Dictionary		dictionary = environment->classTable;
	V_Class				tempClass = NULL;
	V_DictionaryNode	theClassNode = NULL;
		
	theClassNode = find_node(dictionary,className);

	if(theClassNode) tempClass = (V_Class) theClassNode->object;
	else tempClass = VPL_class_entry_create(environment,className,valid);
	
	return tempClass->classIndex;
}

V_Value create_attribute( Int1 *name,V_Environment environment)
{
	V_Value ptrA = (V_Value) X_malloc(sizeof (VPL_Value));
	if(ptrA == NULL) return NULL;
	ptrA->objectName = new_string(name,environment);
	ptrA->valueArchive = NULL;
	ptrA->value = NULL;
	ptrA->columnIndex = 0;
	ptrA->classIndex = 0;
	
	return ptrA;
}

V_Value attribute_add(Int1 *attributeName,V_Class inputClass,Nat4 archiveList[],V_Environment environment)
{
	V_Value				theAttribute = create_attribute(attributeName,environment);
	
	V_ClassEntry		theClassEntry = NULL;
	Nat4				columnIndex = 0;
	Nat4				counter = 0;
	Nat4				tempInt = 0;
	Nat4				*tempPointer = NULL;
	Nat4				size = 0;

	add_node(inputClass->attributes,attributeName,theAttribute);
	theAttribute->valueArchive = archive_copy(environment,(V_Archive) archiveList);
	size = archive_size(environment,theAttribute->valueArchive)/4;
	tempPointer = (Nat4 *) theAttribute->valueArchive;
	for(counter=0;counter<size;counter++){
	    tempInt = CFSwapInt32HostToBig(*(tempPointer + counter));
		*(tempPointer + counter) = tempInt;
	}

	theAttribute->classIndex = inputClass->classIndex;

	columnIndex = theAttribute->columnIndex = get_value_index(environment,attributeName);

	theClassEntry = environment->classIndexTable->classes[theAttribute->classIndex];
	theClassEntry->values[columnIndex] = VPXMALLOC(1,VPL_ValueNode);
	theClassEntry->values[columnIndex]->type = kAttributeNode;
	theClassEntry->values[columnIndex]->attributeOffset = attribute_offset(inputClass,attributeName);
	theClassEntry->values[columnIndex]->value = NULL;
	theClassEntry->values[columnIndex]->watchpointList = NULL;

	return theAttribute;
}

V_Class class_superClass_to(V_Class inputClass,V_Environment environment,Int1 *superClass)
{
	V_DictionaryNode	theClassNode = NULL;
	V_Class			tempSuperClass = NULL;
	V_ClassEntry	theClassEntry = environment->classIndexTable->classes[inputClass->classIndex];
	Nat4			counter = 0;
	Nat4			newCounter = 0;
	Int1**			tempChildrenList = NULL;

// First, remove the class from the existing superclass list of children

	if(inputClass->superClassNames){
		if(inputClass->superClassNames[0]){
			theClassNode = find_node(environment->classTable,inputClass->superClassNames[0]);
			if(theClassNode) tempSuperClass = (V_Class) theClassNode->object;
			if(tempSuperClass){
				if(tempSuperClass->numberOfChildren){
					newCounter = 0;
					for(counter = 0; counter<tempSuperClass->numberOfChildren;counter++){
						if(strcmp(tempSuperClass->childrenNames[counter],inputClass->name) != 0){
							newCounter++;
						}
					}
					if(newCounter == tempSuperClass->numberOfChildren - 1) {
						if(newCounter) {
							tempChildrenList = VPXMALLOC(tempSuperClass->numberOfChildren - 1,Int1*);
							newCounter = 0;
							for(counter = 0; counter<tempSuperClass->numberOfChildren;counter++){
								if(strcmp(tempSuperClass->childrenNames[counter],inputClass->name) != 0){
									tempChildrenList[newCounter] = tempSuperClass->childrenNames[counter];
									newCounter++;
								}
							}
							X_free(tempSuperClass->childrenNames);
							tempSuperClass->childrenNames = tempChildrenList;
							tempSuperClass->numberOfChildren--;
						} else {
							X_free(tempSuperClass->childrenNames);
							tempSuperClass->childrenNames = NULL;
							tempSuperClass->numberOfChildren = 0;
						}
					}
				}
			}
			X_free(inputClass->superClassNames[0]);
		}
		X_free(inputClass->superClassNames);
	}

	if(superClass){
		if(!inputClass->superClassNames) inputClass->superClassNames = VPXMALLOC(1,Int1*);
		inputClass->superClassNames[0] = new_string(superClass,environment);
		inputClass->numberOfSuperClasses = 1;
		theClassNode = find_node(environment->classTable,superClass);
		if(theClassNode) tempSuperClass = (V_Class) theClassNode->object;
		else{
			tempSuperClass = VPL_class_entry_create(environment,superClass,kFALSE);
		}
		if(!theClassEntry->superClasses) theClassEntry->superClasses = (Nat4 *) X_malloc(sizeof(Nat4));
		theClassEntry->superClasses[0] = tempSuperClass->classIndex;
		theClassEntry->numberOfSuperClasses = 1;
		
		if(tempSuperClass){
			if(tempSuperClass->numberOfChildren){
				tempSuperClass->numberOfChildren++;
				tempSuperClass->childrenNames = VPXREALLOC(tempSuperClass->childrenNames,tempSuperClass->numberOfChildren,Int1*);
				tempSuperClass->childrenNames[tempSuperClass->numberOfChildren - 1] = inputClass->name;
			}else{
				tempSuperClass->childrenNames = VPXMALLOC(1,Int1*);
				tempSuperClass->numberOfChildren = 1;
				tempSuperClass->childrenNames[0] = inputClass->name;
			}
		}
	} else {
		if(inputClass->superClassNames){
			if(inputClass->superClassNames[0]) X_free(inputClass->superClassNames[0]);
			X_free(inputClass->superClassNames);
		}
		inputClass->superClassNames = NULL;
		inputClass->numberOfSuperClasses = 0;
		if(theClassEntry->superClasses) X_free(theClassEntry->superClasses);
		theClassEntry->superClasses = NULL;
		theClassEntry->numberOfSuperClasses = 0;
	}


	return inputClass;
}

V_Class class_unarchive(V_Class inputClass,V_Environment environment)
{
	Nat4				counter = 0;
	V_DictionaryNode	tempNode = NULL;
	V_Value				tempValue = NULL;
	V_Dictionary		tempDictionary = inputClass->attributes;
	
	for(counter = 0;counter<tempDictionary->numberOfNodes;counter++){
		tempNode = tempDictionary->nodes[counter];
		tempValue = (V_Value) tempNode->object;
		decrement_count(environment,tempValue->value);
		tempValue->value = unarchive_object(environment,tempValue->valueArchive);
	}
	return inputClass;
}

Int4 rename_instances(V_Environment environment,Int1 *oldName,Int1 *newName)
{
	V_Instance	theInstance = NULL;
	Bool		didMark = kFALSE;
	Nat4		oldCounter = 0;
	Nat4		oldLength = 0;
	V_Object	*oldObjectList = NULL;
	V_Object	currentObject = environment->heap->previous;

	if(!environment->postLoad) return kNOERROR;
//LOCKHEAP
	while(currentObject != NULL){
		if(currentObject->type == kInstance && strcmp(((V_Instance) currentObject)->name,oldName) == 0){
			theInstance = (V_Instance) currentObject;
			didMark = kTRUE;
			theInstance->mark = kTRUE;
			X_free(theInstance->name);
			theInstance->name = new_string(newName,environment);
		}
		currentObject = currentObject->previous;
	}
	
	while(didMark){
		didMark = kFALSE;
		currentObject = environment->heap->previous;
		while(currentObject != NULL){
			if(currentObject->type == kList || currentObject->type == kInstance){
				oldObjectList = ((V_List) currentObject)->objectList;
				oldLength = ((V_List) currentObject)->listLength;
				for(oldCounter = 0;oldCounter<oldLength;oldCounter++){
					if(oldObjectList[oldCounter] && oldObjectList[oldCounter]->mark == kTRUE && currentObject->mark == kFALSE){
						currentObject->mark = kTRUE;
						didMark = kTRUE;
					}
				}
			}
			currentObject = currentObject->previous;
		}
	}
//UNLOCKHEAP

	return kNOERROR;
}

Int4 reorder_instances(V_Environment environment,V_Dictionary oldAttributes,V_Class theUpdatedClass)
{
	Nat4		newCounter = 0;
	Nat4		oldCounter = 0;
	Nat4		newLength = theUpdatedClass->attributes->numberOfNodes;
	Nat4		oldLength = oldAttributes->numberOfNodes;
	V_Instance	theInstance = NULL;
	V_Object	*newObjectList = NULL;
	V_Object	*oldObjectList = NULL;
	V_Object	currentObject = environment->heap->previous;
	Int1		*tempAttributeName = NULL;
	Bool		didMark = kFALSE;

	if(!environment->postLoad) return kNOERROR;
//LOCKHEAP
	while(currentObject != NULL){
		if(currentObject->type == kInstance && strcmp(((V_Instance) currentObject)->name,theUpdatedClass->name) == 0){
			theInstance = (V_Instance) currentObject;
			didMark = kTRUE;
			theInstance->mark = kTRUE;
			oldObjectList = theInstance->objectList;
			oldLength = theInstance->listLength;
			if(newLength != 0){
				newObjectList = (V_Object *) calloc(newLength,sizeof(V_Object));
			}else{
				newObjectList = NULL;
			}
			for(newCounter = 0;newCounter<newLength;newCounter++){
				newObjectList[newCounter] = NULL;
				tempAttributeName = theUpdatedClass->attributes->nodes[newCounter]->name;
				for(oldCounter = 0;oldCounter<oldLength;oldCounter++){
					if(strcmp(tempAttributeName,oldAttributes->nodes[oldCounter]->name) == 0){
						newObjectList[newCounter] = oldObjectList[oldCounter];
					}
				}
			}
			theInstance->objectList = newObjectList;
			theInstance->listLength = newLength;
			for(newCounter = 0;newCounter<newLength;newCounter++){
				increment_count(newObjectList[newCounter]);
			}
			for(oldCounter = 0;oldCounter<oldLength;oldCounter++){
				decrement_count(environment,oldObjectList[oldCounter]);
			}
			X_free(oldObjectList);
		}
		currentObject = currentObject->previous;
	}
	
	while(didMark){
		didMark = kFALSE;
		currentObject = environment->heap->previous;
		while(currentObject != NULL){
			if(currentObject->type == kList || currentObject->type == kInstance){
				oldObjectList = ((V_List) currentObject)->objectList;
				oldLength = ((V_List) currentObject)->listLength;
				for(oldCounter = 0;oldCounter<oldLength;oldCounter++){
					if(oldObjectList[oldCounter] && oldObjectList[oldCounter]->mark == kTRUE && currentObject->mark == kFALSE){
						currentObject->mark = kTRUE;
						didMark = kTRUE;
					}
				}
			}
			currentObject = currentObject->previous;
		}
	}
//UNLOCKHEAP
	
	return kNOERROR;
}

Int4 instance_compare( V_Instance instanceA , V_Instance instanceB, Int1 *attribute, V_Environment environment);
Int4 instance_compare( V_Instance instanceA , V_Instance instanceB, Int1 *attribute, V_Environment environment)
{
	V_Object	objectA = NULL;
	V_Object	objectB = NULL;
	V_Class		tempClass = NULL;
	Int4		index = 0;
	
	
	if(attribute != NULL && environment != NULL){
		tempClass = get_class(environment->classTable,instanceA->name);
		index = attribute_offset(tempClass,attribute);
		if(index == -1){
			if(instanceA < instanceB) return -1;
			else if(instanceA == instanceB) return 0;
			else return 1;
		}
		objectA = instanceA->objectList[index];
		tempClass = get_class(environment->classTable,instanceB->name);
		index = attribute_offset(tempClass,attribute);
		if(index == -1){
			if(instanceA < instanceB) return -1;
			else if(instanceA == instanceB) return 0;
			else return 1;
		}
		objectB = instanceB->objectList[index];
		return object_compare(objectA,objectB,NULL,NULL);
	}else{
		if(instanceA < instanceB) return -1;
		else if(instanceA == instanceB) return 0;
		else return 1;
	}
}


