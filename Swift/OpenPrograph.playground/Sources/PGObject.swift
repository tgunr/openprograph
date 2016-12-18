import AppKit

enum methodState {
    case nostate
    case executing
    case editing
    case debugging
}

class PGObjectImage {
    var name: String?
    var image: NSImage?
    
    func initWithName(_ name: String) {
        self.name = name
    }
    
    func loadImage() {
        if self.name != nil {
            let url = Bundle.main.url(forResource: self.name, withExtension: "icns", subdirectory: "Icons")
            let anImage = NSImage.init(contentsOf: url!)
            self.image = anImage
        }
    }
    
}

//class PGObjectLayer: CALayerDelegate {
////    func action(for layer: CALayer, forKey event: String) -> CAAction? {
////
////    }
//
//    func display(_ layer: CALayer) {
//
//    }
//}

class PGObject: NSButton, CALayerDelegate {
    var name: String?
    var opimage: PGObjectImage?
    var borderWidth = 1.5
    var borderColor: NSColor = NSColor.blue {
        didSet {
            needsDisplay = true
        }
    }
    var fillColor: NSColor = NSColor.white {
        didSet {
            needsDisplay = true
        }
    }
    
    override init(frame: NSRect) {
        super.init(frame: frame)
        self.wantsLayer = true
        self.layer?.delegate = self
        self.layerContentsRedrawPolicy = NSViewLayerContentsRedrawPolicy.onSetNeedsDisplay
        self.layer?.borderColor = borderColor.cgColor
        self.layer?.borderWidth = CGFloat(borderWidth)
        self.layer?.backgroundColor = NSColor.white.cgColor
        self.layer?.masksToBounds = true
        self.layer?.cornerRadius = 10.0
        self.layer?.contentsRect = CGRect(x: 0.0, y: 0.0, width: 0.5, height: 0.5)
    }
    
    public required init?(coder: NSCoder) {
        super.init(coder: coder)
    }
    
    //    func setHighlight(_ value: Bool) {
    //        isHighlighted = value
    //        self.needsDisplay = true
    //    }
    
    private var currentContext: CGContext? {
        get {
            if #available(OSX 10.10, *) {
                return NSGraphicsContext.current()?.cgContext
            } else if let contextPointer = NSGraphicsContext.current()?.graphicsPort {
                let context: CGContext = Unmanaged.fromOpaque(UnsafeRawPointer(contextPointer)).takeUnretainedValue()
                return context
            }
            
            return nil
        }
    }
    
    private func saveGState(drawStuff: (_ ctx: CGContext) -> ()) -> () {
        if let context = self.currentContext {
            context.saveGState()
            drawStuff(context)
            context.restoreGState()
        }
    }
    
    override func draw(_ dirtyRect: NSRect) {
        super.draw(dirtyRect)
        
        //        if name != nil { title = self.name! }
        //        if opimage != nil {
        //            opimage?.loadImage()
        //            self.image = opimage?.image
        //            self.imagePosition = .imageLeft
        //            self.imageHugsTitle = false
        //            self.imageScaling = .scaleNone
        //        }
        //        saveGState { ctx in
        //            fillColor.setFill()
        //            if #available(OSX 10.12.1, *) {
        //                bezelColor = NSColor.blue
        //            }
        //                        setFillColor(color)
        //            ctx.setStrokeColor(borderColor)
        //            ctx.setLineWidth(borderWidth)
        //            ctx.addRect(dirtyRect)
        //            ctx.drawPath(using: .fillStroke)
        //        }
    }
    
    func mouseDragged(theEvent: NSEvent) {
        
        let button = self
        
        NSCursor.closedHand().set()
        
        button.frame.origin.x += theEvent.deltaX
        button.frame.origin.y -= theEvent.deltaY
    }
    
}
