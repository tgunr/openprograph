import Foundation
import Cocoa

class ObjectViewController: NSViewController {
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        let height = 2
        let width = 8
        var ar : Array<NSButton> = []
        var x = 0
        var y = 0
        var k = 1
        for _ in 1...height {
            for _ in 1 ... width {
                let but = PGObject(frame: NSRect(x: x, y: y, width: 80, height: 32))
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
                
                but.opimage?.name = "oper_method"
                but.opimage?.loadImage()
                
                ar.append(but)
                self.view.addSubview(but)
                x += 90
                k += 1
            }
            y += 32
            x = 0
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
        //            print("tag: \(v.tag) pan")
        //        }
    }
    
    func buttonTapped(_ button: NSButton) {
        print("tag: \(button.tag) click")
    }
    
    func buttonGestured(_ g:NSGestureRecognizer) {
        if let v = g.view as? NSButton {
            print("tag: \(v.tag) gesture")
        }
    }
    
    @IBAction func testButtonClicked(_ sender: Any) {
    }
    
    
}
