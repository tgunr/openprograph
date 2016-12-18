import AppKit

class PGObjectView: NSView {
    let buttonSize = CGSize(width: 80, height: 32)
    let buttonFrameSpace = CGSize(width: 10, height: 10)
    let s = self
    
    override func draw(_ dirtyRect: NSRect) {
        let buttonFrameSize = CGSize(width: buttonSize.width + buttonFrameSpace.width, height: buttonSize.height + buttonFrameSpace.height)
        let rowHeight = Int(self.frame.size.height / buttonFrameSize.height)
        let rowWidth = Int(self.frame.size.width / buttonFrameSize.width)
        Swift.print("rowWidth: \(rowWidth) rowHeight: \(rowHeight)")
        var ar : Array<PGObject> = []
        var x = 0
        var y = 0
        var k = 1
        for _ in 1...1 {
            for _ in 1...4 {
                let but = PGObject(frame: NSRect(x: x, y: y, width: 80, height: 32))
                //                Swift.print("\(but.frame.origin)")
                but.tag = k
                but.title = "\(x) \(y)"
                but.action = #selector(buttonTapped(_:))
                but.target = self
                but.bezelStyle = .roundRect
                if #available(OSX 10.12.2, *) {
                    but.bezelColor = NSColor.blue
                } else {
                    // Fallback on earlier versions
                }
                but.font = NSFont(name: "Monaco", size: 13)
                but.isBordered = true
                
                let panRecognizer = NSPressGestureRecognizer(target:self, action: #selector(self.pressAction))
                but.gestureRecognizers = [panRecognizer]
                
                let g = NSClickGestureRecognizer()
                g.target = self
                g.buttonMask = 0x2 // right button
                g.numberOfClicksRequired = 1
                g.action = #selector(buttonGestured(_:))
                but.addGestureRecognizer(g)
                
                let opimage = PGObjectImage()
                opimage.initWithName("oper_prim")
                
                addSubview(but)
                ar.append(but)
                x += Int(buttonFrameSize.width)
                k += 1
            }
            x = 0
            y += Int(buttonFrameSize.height)
        }
    }
    
    var prevVP = NSPointFromString("")
    @IBAction func pressAction(recognizer: NSPressGestureRecognizer) {
        
        // Get the location in the view from the pan gesture recogniser
        let viewPoint = recognizer.location(in: nil)
        let buttonView = recognizer.view!
        //                // Use the recogniser state, this keeps track of the correct node
        //                // even if the mouse has moved outside of the node bounds during
        //                // the drag operation.
        switch recognizer.state {
        case .began:
            let bvp = buttonView.frame
            dprint("bvp srt: \(bvp.origin) vp: \(viewPoint) pv: \(prevVP)")
            prevVP = viewPoint
        case .changed:
            var bvp = buttonView.frame
            //                    print("bvp old: \(bvp.origin) vp: \(viewPoint) pv: \(prevVP)")
            // compute relative change
            var relVP: NSPoint = NSPointFromString("") // 0,0
            relVP.x = viewPoint.x - prevVP.x
            relVP.y = viewPoint.y - prevVP.y
            bvp.origin.x = bvp.origin.x + relVP.x
            bvp.origin.y = bvp.origin.y + relVP.y
            buttonView.setFrameOrigin(bvp.origin)
            prevVP = viewPoint
            bvp = buttonView.frame
        //                    print("bvp new: \(bvp.origin) vp: \(viewPoint) pv: \(prevVP) rel: \(relVP)")
        case .ended:
            let bvp = buttonView.frame
            dprint("bvp end: \(bvp.origin) vp: \(viewPoint) pv: \(prevVP)")
        default:
            return
            
        }
        //            }
        //        }
    }
    
    func detectPan(recognizer:NSPanGestureRecognizer) {
        //        if let v = button as? NSButton {
        //            drint("tag: \(v.tag) pan")
        //        }
    }
    
    func buttonTapped(_ button: NSButton) {
        dprint("tag: \(button.tag) click")
    }
    
    func buttonGestured(_ g:NSGestureRecognizer) {
        if let v = g.view as? NSButton {
            dprint("tag: \(v.tag) gesture")
        }
    }
    
}
