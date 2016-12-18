import AppKit
let kDEBUG = true
func dprint(_ items: Any...) {
    if kDEBUG {
        Swift.print(#function, items)
    }
}

func ZYLog<T>(_ object: T?, filename: String = #file, line: Int = #line, funcname: String = #function) {
    if kDEBUG {
        print("****\(Date()) \(filename)(\(line)) \(funcname):\r\(object)\n")
    }
}

func FLOG<T>(_ object: T, funcname: String = #function) {
    if kDEBUG {
        print("\(funcname): \(object)")
    }
}

extension NSRect {
    func centerInRect( dest: inout NSRect) {
        let destCenterH = dest.width / 2
        let destCenterV = dest.height / 2
        let srcCenterH = (self.width / 2) - destCenterH
        let srcCenterV = (self.height / 2) - destCenterV
        dest.origin.x = srcCenterH
        dest.origin.y = srcCenterV
    }
}

