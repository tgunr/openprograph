
let MAXSTACKDEPTH = 200

//static pthread_mutex_t gHeapLock;
//static pthread_mutex_t gStackLock;
//static pthread_mutex_t gCallbackLock;
//static pthread_mutex_t gThreadsLock;

enum errorType {
	case kNOERROR
	case kERROR
	case kWRONGINARITY
	case kWRONGOUTARITY
	case kWRONGINPUTTYPE
};

enum multiplexType {
	case kEmptyList
	case kSingleton
	case kPlural
};

enum interpreterModeType {
	case kThread
	case kProcess
};

typealias V_Environment = VPL_Environment
//typealias V_Object = VPL_Object
//typealias V_List = VPL_List
//typealias V_Case = VPL_Case
//typealias V_Operation = VPL_Operation
//typealias V_Stack = VPL_Stack
//typealias V_ErrorNode = VPL_ErrorNode
//typealias V_Frame = VPL_Frame
//typealias V_RootNode = VPL_RootNode
//typealias V_Root = VPL_Root
//typealias V_Method = VPL_Method
//typealias V_ThreadSpace = VPL_ThreadSpace

//enum opTrigger {
//	case kHalt = -1     // kHalt signals perform_action to return FALSE, stopping the run loop */
//	case kNoAction = 0	// kNoAction must be zero for quick tests of methodSuccess */
//	case kFailure = 1	// kFailure must be aligned (+1) with kFALSE for match execution */
//	case kSuccess = 2	// kSuccess must be aligned (+1) with kTRUE  for match execution
//                                                };

//enum faultCode {
//	case kUnknownFault = 0
//	case kNonexistentClass
//	case kNonexistentMethod
//	case kNonexistentPersistent
//	case kNonexistentAttribute
//	case kNonexistentPrimitive
//	case kNonexistentConstant
//	case kNonexistentField
//	case kNonexistentProcedure
//	case kIncorrectInarity
//	case kIncorrectOutarity
//	case kIncorrectType
//	case kIncorrectCases
//	case kIncorrectListInput
//	case kNoControl
//	case kWatchpoint
//	case kSignalInterrupt
//}

typealias V_Fault = VPL_Fault

struct VPL_Fault {
    var theFaultCode: Nat4
    /* Must be cast as Nat4 because will be used as an index into an array */
    var primaryString: Int1
    var secondaryString: Int1
    var operationName: Int1
    var moduleName: Int1
}

//class VPL_Object: LinkedList<V_Object> {
//	var instanceIndex: Nat2?
//	var system: Nat1?
//	var type: Nat1?
//    var mark: Nat4?
//    var	use: Nat4?
////    var previous: V_Object?
////    var next: V_Object
//}

class VPL_PointerLocation: LinkedList<VPL_PointerLocation> {
	var pointerLocation: Int1?
}

//typealias V_Class = VPL_Class
//struct VPL_Class {
//	var name: Int1?
//	var attributes: V_Dictionary?
//	var numberOfSuperClasses: Nat4
//	var superClassNames: Int1
//	var classIndex: Nat4
//	var numberOfChildren: Nat4
//	var childrenNames: Int1
//	var numberOfDescendants: Nat4
//	var descendantNames: Int1
//    }	VPL_Class;
//
//typealias V_ClassEntry = VPL_ClassEntry
//    typedef struct VPL_ClassEntry
//        {
//	var valid: Nat4
//	var constructorIndex: Nat4
//	var destructorIndex: Nat4
//	var numberOfSuperClasses: Nat4
//	var superClasses: Nat4
//	var theClass: V_Class
//	var methods: V_Method
//	var values: V_ValueNode
//        }	VPL_ClassEntry;
//typealias V_ClassIndexTable = VPL_ClassIndexTable
//        typedef struct VPL_ClassIndexTable
//            {
//	var numberOfClasses: Nat4
//	var classes: V_ClassEntry
//            }	VPL_ClassIndexTable;
//
//        typedef struct VPL_RootNode
//            {
//	var previousNode: V_RootNode
//	var nextNode: V_RootNode
//	var root: V_Root
//	var object: V_Object
//            }	VPL_RootNode;
//
//        typedef struct VPL_Frame
//            {
//	var previousFrame: V_Frame
//	var inputList: V_List
//	var outputList: V_List
//	var frameCase: V_Case		/* For use in the interpreter */
//	var methodName: Int1	/* For use in calling "super" data driven methods and interpreter */
//	var dataDriver: Nat4		/* For use in calling "super" data driven methods and interpreter */
//	var vplEditor: Nat4		/* For use in the interpreter */
//	var operation: V_Operation
//	var repeatFlag: Nat1
//	var methodSuccess: Nat1
//	var stopNow: Nat1
//	var stopNext: Nat1
//	var caseCounter: Nat4
//	var repeatCounter: Nat4
//	var roots: V_RootNode
//            }	VPL_Frame;
//
//        typedef struct VPL_Stack
//            {
//	var previousStack: V_Stack
//	var nextStack: V_Stack
//	var stackDepth: Int4
//	var maxStackDepth: Nat4
//	var currentFrame: V_Frame
//	var vplStack: V_Object		/* For use in the interpreter */
//            }	VPL_Stack;
//
//        typedef struct
//            {
//	var instanceIndex: Nat2
//	var system: Nat1
//	var type: Nat1
//	var mark: Nat4
//	var use: Nat4
//	var previous: V_Object
//	var next: V_Object
//	var listLength: Nat4
//	var maxLength: Nat4
//}	VPL_Heap, *V_Heap;
//
//struct VPL_ErrorNode
//{
//V_ErrorNode	previous;
//	var errorString: Int1
//	var errorCode: Int4
//}	VPL_ErrorNode;
typealias V_Parameter = VPL_Parameter

class VPL_Parameter: LinkedList<VPL_Parameter> {
	var type: Nat4?
	var size: Nat4?
	var name: Int1?
	var indirection: Nat4?
	var constantFlag: Nat4?
}

//struct {
//	var name: Int1
//void * functionPtr;
//	var parameters: V_Parameter
//	var returnParameter: V_Parameter
//} VPL_ExtProcedure, *V_ExtProcedure;
//typealias V_ExtField = VPL_ExtField
//
//struct VPL_ExtField {
//    Int1 *name;
//    Nat4 offset;
//    Nat4 size;
//    Nat4 type;
//Int1 *pointerTypeName;
//Nat4 indirection;
//Nat4 pointerTypeSize;
//Int1 *typeName;
//V_ExtField next;
//} VPL_ExtField;
//
//struct {
//Int1 *name;
//V_ExtField fields;
//Nat4 size;
//} VPL_ExtStructure, *V_ExtStructure;
//
//struct VPL_CallbackCodeSegment
//{
//Nat4					loadHighAddress;
//Nat4					orAddress;
//Nat4					loadHighOp;
//Nat4					orOp;
//Nat4					mtctrOp;
//Nat4					branchOp;
//Int1					*vplRoutine;
//V_ExtProcedure			callbackFunction;
//V_Environment			theEnvironment;
//Nat4					listInput;
//V_Object				object;
//V_CallbackCodeSegment	previous;
//V_CallbackCodeSegment	next;
//Nat4					use;
//}	VPL_CallbackCodeSegment;
//
//struct VPL_ThreadSpace
//{
//Nat4					thisThread;
//V_Fault					theFault;
//V_ErrorNode				lastError;
//V_Heap					heap;
//V_Stack					stack;
//V_CallbackCodeSegment	segments;
//Bool					stopNext;
//V_Environment			threadEnvironment;
//V_ThreadSpace			previousThread;
//V_ThreadSpace			nextThread;
//}	VPL_ThreadSpace;

struct VPL_Environment {
	var theFault: V_Fault
//	var lastError: V_ErrorNode
//	var heap: V_Heap
//	var stack: V_Stack
	var classTable: VPL_Dictionary
	var universalsTable: VPL_Dictionary
	var persistentsTable: VPL_Dictionary
	var methodsDictionary: VPL_Dictionary
	var valuesDictionary: VPL_Dictionary
	var externalConstantsTable: VPL_Dictionary
	var externalStructsTable: VPL_Dictionary
	var externalGlobalsTable: VPL_Dictionary
	var externalProceduresTable: VPL_Dictionary
	var externalPrimitivesTable: VPL_Dictionary
	var externalTypesTable: VPL_Dictionary
//	var classIndexTable: V_ClassIndexTable
	var totalMethods: Nat4
	var totalValues: Nat4
//	var callbackHandler: void
//	var stackSpawner: void
	var interpreterCallbackHandler: Int1
//	var segments: V_CallbackCodeSegment
	var stopNext: Bool
	var postLoad: Bool
	var compiled: Bool
	var logging: Bool
	var profiling: Bool
	var interpreterMode: Nat4
	var editorThreadID: Nat4
	var interpreterThreadID: Nat4
	var pipeWriteFileDescriptor: Nat4
	var pipeReadFileDescriptor: Nat4
//    var threads: V_ThreadSpace
}

