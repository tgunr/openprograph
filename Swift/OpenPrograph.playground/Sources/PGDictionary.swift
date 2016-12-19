import Foundation

struct VPL_DictionaryNode {
    var name: Int1?
    var object: Any?
}
typealias V_DictionaryNode = VPL_DictionaryNode

struct VPL_Dictionary {
    var numberOfNodes: Nat4
    var nodes: VPL_DictionaryNode
}
typealias V_Dictionary = VPL_Dictionary

//  Converted with Swiftify v1.0.6193 - https://objectivec2swift.com/
var gMemoryRangeStart = 0
var gMemoryRangeStop = 0
var gMemoryRangeCheck = false

func X_malloc(size: Nat4) -> UnsafeMutableRawPointer! {
    if size > 0 {
        return calloc(1, Int(size))
    }
    else {
        return nil
    }
}

func X_calloc(number: Nat4, size: Nat4) -> UnsafeMutableRawPointer! {
    if number > 0 && size > 0 {
        return calloc(Int(number), Int(size))
    }
    else {
        return nil
    }
}

func X_realloc(theBlock: UnsafeMutableRawPointer!, number: Nat4, size: Nat4) -> UnsafeMutableRawPointer! {
    return realloc(theBlock, Int(number) * Int(size))
}

func X_free(block: UnsafeMutableRawPointer!) {
    if block.hashValue != 0 {
        free(block)
    }
}

//func strlcmp(s1: String, s2: String) -> Bool {
//    //compare 2 strings ignoring differences in length
//    if s1 == s2 {
//        return true
//    }
//    
//    var c1 = CChar()
//    var c2 = CChar()
//    repeat {
//        //need to ensure the last 2 compared chars are in the correct values
//        c1 = s1 += 1
//        c2 = s2 += 1
//    } while c1 && c1 == c2
//    //if both c1 and c2 are non-zero it means that:
//    //the end of the strings was not met before a difference was found
//    //thus return the difference
//    // < 0 indicates that c1 < c2 and s1 < s2
//    // > 0 indicates that c1 > c2 and s1 > s2
//    //however, if one or both of the chars is zero
//    //it indicates that the end of one or both of the strings was met
//    //so return zero indicating that the strings (ignoring length) are equal
//    //note that a > A and thus a > B
//    var r = c1 && c2 ? c1 - c2 : 0
//    return r
//}

func dictionary_compare(elementA: V_DictionaryNode, elementB: V_DictionaryNode) -> ComparisonResult {
    let nodeA = elementA
    let nodeB = elementB
    if nodeA.object == nil {
        return ComparisonResult.orderedAscending
    }
    if nodeB.object == nil {
        return ComparisonResult.orderedDescending
    }
    let result = nodeA.name!<(nodeB.name)!
    if result == true {
        return ComparisonResult.orderedAscending
    } else {
        return ComparisonResult.orderedDescending
    }
}

func get_node(dictionary: V_Dictionary, name: Int1) -> V_DictionaryNode? {
//    let nodeHndl: V_Bool? = nil
//    var nodePtr: V_DictionaryNode? = nil
//    var node = VPL_DictionaryNode()
//    let counter = 0
    if name == 0 {
        return nil
    }
//    node.name = name
//    nodePtr = node
//    nodeHndl = nodePtr
//    nodeHndl = (bsearch(nodeHndl, dictionary.nodes, dictionary.numberOfNodes, sizeof(V_DictionaryNode), dictionary_compare) as! V_DictionaryNode)
//    if nodeHndl != nil {
//        return (nodeHndl).object!
//    }
//    for counter in 0..<dictionary.numberOfNodes {
//        nodePtr = dictionary.nodes[counter]
//        if nodePtr!.object! == nil {
//            
//        }
//        if strcmp(name, nodePtr!.name) == 0 {
//            return nodePtr!.object!
//        }
//    }
    return nil
}

func find_node(dictionary: V_Dictionary, name: Int1) -> V_DictionaryNode? {
//    let nodeHndl: V_DictionaryNode? = nil
//    let nodePtr: V_DictionaryNode? = nil
//    let node = VPL_DictionaryNode()
//    let counter = 0
//    if name == nil {
//        return nil
//    }
//    node.name = name
//    nodePtr = node
//    nodeHndl = nodePtr
//    nodeHndl = (bsearch(nodeHndl, dictionary.nodes, dictionary.numberOfNodes, sizeof(V_DictionaryNode), dictionary_compare) as! V_DictionaryNode)
//    if nodeHndl != nil {
//        return nodeHndl
//    }
//    for counter in 0..<dictionary.numberOfNodes {
//        nodePtr = dictionary.nodes[counter]
//        if strcmp(name, nodePtr!.name) == 0 {
//            return nodePtr
//        }
//    }
    return nil
}

func add_node(dictionary: V_Dictionary, name: Int1, object: Void ) -> Nat4 {
    var node = (X_malloc(sizeof(VPL_DictionaryNode)) as! V_DictionaryNode)
    node.name = name
    node.object! = object
    dictionary.nodes = VPXREALLOC(dictionary.nodes, dictionary.numberOfNodes + 1, V_DictionaryNode)
    dictionary.nodes[dictionary.numberOfNodes += 1] = node
    return 0
}

func remove_node(dictionary: V_Dictionary, name: Int1) -> Nat4 {
    var oldCounter = 0
    var newCounter = 0
    var node: V_DictionaryNode? = nil
    var nodes: V_DictionaryNode? = nil
    if dictionary.numberOfNodes == 0 {
        return nil
    }
    if dictionary.numberOfNodes == 1 {
        node = dictionary.nodes[0]
        X_free(dictionary.nodes)
        dictionary.nodes = nil
        dictionary.numberOfNodes = 0
        if strcmp(name, node!.name) == 0 {
            return node
        }
        else {
            return nil
        }
    }
    nodes = (calloc(dictionary.numberOfNodes - 1, sizeof(V_DictionaryNode)) as! V_DictionaryNode)
    newCounter = 0
    node = nil
    for oldCounter in 0..<dictionary.numberOfNodes {
        if strcmp(name, dictionary.nodes[oldCounter].name) == 0 {
            node = dictionary.nodes[oldCounter]
        }
        else {
            nodes[newCounter += 1] = dictionary.nodes[oldCounter]
        }
    }
    if node == nil {
        return nil
    }
    if dictionary.nodes != nil {
        X_free(dictionary.nodes)
    }
    dictionary.nodes = nodes
    dictionary.numberOfNodes -= 1
    return node
}

func add_nodes(dictionary: V_Dictionary, arraySize: Nat4, nodeArray: [VPL_DictionaryNode] ) -> Nat4 {
    var counter = 0
    var nodes: V_DictionaryNode? = nil
    if arraySize == 0 {
        return 0
    }
    nodes = (calloc(dictionary.numberOfNodes + arraySize, sizeof(V_DictionaryNode)) as! V_DictionaryNode)
    for counter in 0..<dictionary.numberOfNodes {
        nodes[counter] = dictionary.nodes[counter]
    }
    
    while counter < dictionary.numberOfNodes + arraySize {
        nodes[counter] = nodeArray[counter - dictionary.numberOfNodes]
        counter += 1
    }
    if dictionary.nodes != nil {
        X_free(dictionary.nodes)
    }
    dictionary.nodes = nodes
    dictionary.numberOfNodes += arraySize
    return 0
}

func create_dictionary(numberOfNodes: Nat4) -> V_Dictionary {
    var dictionary = V_Dictionary()
    dictionary = (X_malloc(sizeof(VPL_Dictionary)) as! V_Dictionary)
    if dictionary == nil {
        return nil
    }
    dictionary.numberOfNodes = numberOfNodes
    if numberOfNodes > 0 {
        dictionary.nodes = (calloc(numberOfNodes, sizeof(V_DictionaryNode)) as! V_DictionaryNode)
    }
    else {
        dictionary.nodes = nil
    }
    return dictionary
}

func sort_dictionary(dictionary: V_Dictionary) -> Nat4 {
    if dictionary.numberOfNodes == 0 {
        return 0
    }
    qsort(dictionary.nodes, dictionary.numberOfNodes, sizeof(V_DictionaryNode), dictionary_compare)
    return 0
}

