//: Playground - noun: a place where people can play

import AppKit
import PlaygroundSupport

let pgc = PlaygroundPage.current

var t = VPL_Dictionary
var a = 1
a

//  Converted with Swiftify v1.0.6193 - https://objectivec2swift.com/
var MacVPLCallbackHandler = Void()
var VPL_classEntry_create = V_ClassEntry()

func new_string(string: Int1, environment: V_Environment) {

    var tempCString: Int1? = nil
    var length = 0

    if string == nil {
        return nil
    }
    length = strlen(string)
    if length != 0 {
        tempCString = (X_malloc((length + 1) * sizeof(Int1)) as! Int1)
        strcpy(tempCString, string)
    }
    else {
        tempCString = (X_malloc(sizeof(Int1)) as! Int1)
        tempCString[0] = "\0"
    }
    return tempCString
}
