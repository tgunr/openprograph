import Foundation

struct VPL_Heap {
    var instanceIndex: Nat2
    var system: Nat1
    var type: Nat1
    var mark: Nat4
    var use: Nat4
    var previous: VPL_Object
    var next: V_Object
    var listLength: Nat4
    var maxLength: Nat4
}
