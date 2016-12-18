import Foundation

typealias Int1 = Int8   // integer 1 byte
typealias Int2 = Int16  // integer 2 byte
typealias Int4 = Int32  // integer 4 byte
typealias IntL = Int64  // integer 8 byte
typealias Nat1 = UInt8  // natural 1 byte
typealias Nat2 = UInt16 // natural 2 byte
typealias Nat4 = UInt32 // natural 4 byte
typealias Real4 = Float32   // real 4 byte
typealias Real10 = Double   // real 10 byte
typealias vBool = Int2       // boolean 2 byte

typealias vpl_Status = Int4
typealias vpl_Arity = Nat4
typealias vpl_RetainCount = Int4
typealias vpl_ObjectType = Nat4
typealias vpl_StringPtr = Int1
typealias vpl_StringLen = Nat4
typealias vpl_Char = Int1
typealias vpl_Integer = Int4
typealias vpl_Real = Real10
typealias vpl_Boolean = Bool
typealias vpl_BlockPtr = Void
typealias vpl_BlockSize = Nat4
typealias vpl_BlockLevel = Nat4
typealias vpl_ListLength = Nat4
typealias vpl_ListItemIndex = Nat4

enum tokenType{
    case kTokenTypeIntegerConstant
    case kTokenTypeRealConstant
    case kTokenTypeOperator
    case kTokenTypeLParen
    case kTokenTypeRParen
    case kTokenTypeExpression
    case kTokenTypeRow
}

enum operatorType {
    case kOperatorTypeNoop
    case kOperatorTypePositive
    case kOperatorTypeNegative
    case kOperatorTypeAddition
    case kOperatorTypeSubtraction
    case kOperatorTypeMultiplication
    case kOperatorTypeDivision
    case kOperatorTypeIntegerDivision
    case kOperatorTypeRemainder
    case kOperatorTypeBitwiseAnd
    case kOperatorTypeBitwiseOr
    case kOperatorTypeBitwiseXor
    case kOperatorTypeBitwiseNot
    case kOperatorTypeBitShiftLeft
    case kOperatorTypeBitShiftRight
    case kOperatorTypeExponent
}

//typealias V_EvalTokenList = VPL_EvalTokenList
//typealias V_EvalToken = VPL_EvalToken
//typealias V_EvalExpression = VPL_EvalExpression

//struct VPL_EvalExpression {
//    var tbefore: VPL_EvalToken
//    var tafter: VPL_EvalToken
//    var toperation: VPL_EvalToken
//}
//
//struct VPL_EvalToken {
//    var ttype: Int
//    var toperationType: Int
//    var texpression: VPL_EvalExpression
//    var tintegerValue: Int
//    var trealValue: Real4
//    var tprevious: VPL_EvalToken
//    var tnext: VPL_EvalToken
//}
//
//struct VPL_EvalTokenList {
//    var tfirst: VPL_EvalToken
//    var tlast: VPL_EvalToken
//}
//
//
