/*
 *  VPL_Dictionary.c
 *  VPL
 *
 *  Created by scott on Sun Mar 03 2002.
 *  Copyright (c) 2001 __MyCompanyName__. All rights reserved.
 *
 */
#include <stdlib.h>
#include <string.h>

#include "VPL_Dictionary.h"

Nat4	gMemoryRangeStart = 0;
Nat4	gMemoryRangeStop = 0;
Bool	gMemoryRangeCheck = kFALSE;

inline void *X_malloc(Nat4 size)
{
/*
#ifdef DEBUG
	void	*theBlockPtr =  malloc(size);
	Nat4	theBlockAddress = (Nat4) theBlockPtr;

	if(gMemoryRangeCheck && gMemoryRangeStart <= theBlockAddress  && theBlockAddress <= gMemoryRangeStop){
		printf("The new block is %u between %u and %u",theBlockAddress,gMemoryRangeStart,gMemoryRangeStop);
	}
	memset(theBlockPtr,'A',size);
	return theBlockPtr;
#else
//	if(size) return malloc(size);
*/
	if(size) return calloc(1,size);
	else return NULL;
//#endif
}

inline void *X_calloc(Nat4 number,Nat4 size)
{
/*
#ifdef DEBUG
	void *theBlockPtr =  malloc(number*size);
	Nat4	theBlockAddress = (Nat4) theBlockPtr;

	if(gMemoryRangeCheck && gMemoryRangeStart <= theBlockAddress  && theBlockAddress <= gMemoryRangeStop){
		printf("The new block is %u between %u and %u",theBlockAddress,gMemoryRangeStart,gMemoryRangeStop);
	}
	memset(theBlockPtr,'A',number*size);
	return theBlockPtr;
#else
*/
	if(number && size) return calloc(number,size);
	else return NULL;
//#endif
}

inline void *X_realloc(void *theBlock, Nat4 number, Nat4 size)
{
/*
#ifdef DEBUG
	void *theBlockPtr =  X_malloc(number*size);
	Nat4	theBlockAddress = (Nat4) theBlockPtr;

	if(gMemoryRangeCheck && gMemoryRangeStart <= theBlockAddress  && theBlockAddress <= gMemoryRangeStop){
		printf("The new block is %u between %u and %u",theBlockAddress,gMemoryRangeStart,gMemoryRangeStop);
	}
	if(theBlock) memcpy(theBlockPtr,theBlock,number*size);
	X_free(theBlock);
	return theBlockPtr;
#else
*/
	return realloc(theBlock,number*size);
//#endif
}

inline void X_free(void *block)
{
/*
#ifdef DEBUG
	Nat4	theBlockAddress = (Nat4) block;
	if(gMemoryRangeCheck && gMemoryRangeStart <= theBlockAddress  && theBlockAddress <= gMemoryRangeStop){
		printf("The freed block is %u between %u and %u",theBlockAddress,gMemoryRangeStart,gMemoryRangeStop);
	}
#endif
*/
	if(block) free(block);
}

int dictionary_compare( const void *elementA , const void *elementB );
int dictionary_compare( const void *elementA , const void *elementB )
{
	V_DictionaryNode nodeA = *((V_DictionaryNode *) elementA);
	V_DictionaryNode nodeB = *((V_DictionaryNode *) elementB);

	return strcmp(nodeA->name,nodeB->name);
}

void *get_node( V_Dictionary dictionary, Int1 *name )
{
	V_DictionaryNode	*nodeHndl = NULL;
	V_DictionaryNode	nodePtr = NULL;
	VPL_DictionaryNode	node;

	Nat4			counter = 0;

	if(name == NULL) return NULL;
	
	node.name = name;
	nodePtr = &node;
	nodeHndl = &nodePtr;

	nodeHndl = (V_DictionaryNode *) bsearch(nodeHndl,dictionary->nodes,
									dictionary->numberOfNodes,sizeof(V_DictionaryNode),dictionary_compare);

	if(nodeHndl != NULL) return (*nodeHndl)->object;
	
	for(counter = 0;counter < dictionary->numberOfNodes;counter++){
		nodePtr = dictionary->nodes[counter];
		if(strcmp(name,nodePtr->name) == 0) {
			return nodePtr->object;
		}
	}

	return NULL;

}

V_DictionaryNode find_node( V_Dictionary dictionary, Int1 *name )
{
	V_DictionaryNode	*nodeHndl = NULL;
	V_DictionaryNode	nodePtr = NULL;
	VPL_DictionaryNode	node;

	Nat4			counter = 0;

	if(name == NULL) return NULL;
	
	node.name = name;
	nodePtr = &node;
	nodeHndl = &nodePtr;

	nodeHndl = (V_DictionaryNode *) bsearch(nodeHndl,dictionary->nodes,
									dictionary->numberOfNodes,sizeof(V_DictionaryNode),dictionary_compare);

	if(nodeHndl != NULL) return *nodeHndl;
	
	for(counter = 0;counter < dictionary->numberOfNodes;counter++){
		nodePtr = dictionary->nodes[counter];
		if(strcmp(name,nodePtr->name) == 0) {
			return nodePtr;
		}
	}

	return NULL;

}

Nat4 add_node( V_Dictionary dictionary, Int1 *name, void *object )
{
	V_DictionaryNode	node = (V_DictionaryNode) X_malloc(sizeof (VPL_DictionaryNode));

	node->name = name;
	node->object = object;
	dictionary->nodes = VPXREALLOC(dictionary->nodes,dictionary->numberOfNodes+1,V_DictionaryNode);
        
	dictionary->nodes[dictionary->numberOfNodes++] = node;

	return 0;

}

V_DictionaryNode remove_node( V_Dictionary dictionary, Int1 *name)
{
	Nat4				oldCounter = 0;
	Nat4				newCounter = 0;
	V_DictionaryNode	node = NULL;
	V_DictionaryNode	*nodes = NULL;
	
	if(dictionary->numberOfNodes == 0) return NULL;
	if(dictionary->numberOfNodes == 1) {
		node = dictionary->nodes[0];
		X_free(dictionary->nodes);
		dictionary->nodes = NULL;
		dictionary->numberOfNodes = 0;
		if(strcmp(name,node->name) == 0) return node;
		else return NULL;
	}

	nodes = (V_DictionaryNode *) calloc(dictionary->numberOfNodes-1,sizeof (V_DictionaryNode));
        
	newCounter = 0;
	node = NULL;
	for(oldCounter = 0;oldCounter < dictionary->numberOfNodes;oldCounter++){
		if(strcmp(name,dictionary->nodes[oldCounter]->name) == 0) node = dictionary->nodes[oldCounter];
		else nodes[newCounter++] = dictionary->nodes[oldCounter];
	}
	
	if(node == NULL) return NULL;
	if(dictionary->nodes != NULL) X_free(dictionary->nodes);
	dictionary->nodes = nodes;
	dictionary->numberOfNodes--;
	return node;
}

Nat4 add_nodes( V_Dictionary dictionary, Nat4 arraySize, VPL_DictionaryNode nodeArray[] )
{
	Nat4			counter = 0;
	V_DictionaryNode	*nodes = NULL;
        

	if(arraySize == 0) return 0;

	nodes = (V_DictionaryNode *) calloc(dictionary->numberOfNodes+arraySize,sizeof (V_DictionaryNode));
        
	for(counter = 0;counter < dictionary->numberOfNodes;counter++){
		nodes[counter] = dictionary->nodes[counter];
	}
	for(;counter < dictionary->numberOfNodes+arraySize;counter++){
		nodes[counter] = &nodeArray[counter-dictionary->numberOfNodes];
	}
	if(dictionary->nodes != NULL) X_free(dictionary->nodes);
	dictionary->nodes = nodes;
	dictionary->numberOfNodes += arraySize;
	
	return 0;

}

V_Dictionary create_dictionary(Nat4 numberOfNodes)
{
	V_Dictionary dictionary;
	dictionary = (V_Dictionary) X_malloc(sizeof (VPL_Dictionary));
	if(dictionary == NULL) return NULL;
	dictionary->numberOfNodes = numberOfNodes;
	if(numberOfNodes > 0){
		dictionary->nodes = (V_DictionaryNode *) calloc(numberOfNodes,sizeof (V_DictionaryNode));
	} else dictionary->nodes = NULL;
	return dictionary;

}

Nat4 sort_dictionary(V_Dictionary dictionary )
{
	if(dictionary->numberOfNodes == 0) return 0;
	qsort(dictionary->nodes,dictionary->numberOfNodes,sizeof(V_DictionaryNode),dictionary_compare);
	return 0;
}


