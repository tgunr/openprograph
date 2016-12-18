import Cocoa

enum methodState {
    case nostate
    case executing
    case editing
    case debugging
}

class ObjectImage {
    var name: String?
    var image: NSImage?
}

class PGObject: NSButton {
    
    var opimage: ObjectImage = ObjectImage()
    
    var colors : NSArray = NSArray() {
        didSet {
            needsDisplay = true
        }
    }
    
    override init(frame: NSRect) {
        super.init(frame: frame)
    }
    
    public required init?(coder: NSCoder) {
        super.init(coder: coder)
    }
    
    func setHighlight(_ value: Bool) {
        isHighlighted = value
        self.needsDisplay = true
    }
    
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
        saveGState { ctx in
            let color = NSColor.init(red: 0x66, green: 0x99, blue: 0xff, alpha: 0x00)
            //            bezelColor = color
            //            ctx.setFillColor(color)
            //            ctx.setStrokeColor(CGColor.black)
            //            ctx.setLineWidth(1)
            //            ctx.addRect(dirtyRect)
            ctx.drawPath(using: .fillStroke)
        }
    }
    
    func mouseDragged(theEvent: NSEvent) {
        
        let button = self
        
        NSCursor.closedHand().set()
        
        button.frame.origin.x += theEvent.deltaX
        button.frame.origin.y -= theEvent.deltaY
    }
    
    func loadImage() {
        if opimage.name != nil {
            let fp = Bundle.main.pathForImageResource(opimage.name!)
            let anImage = NSImage.init(byReferencingFile: fp!)
            opimage.image = anImage
            image = opimage.image
        }
    }
    
}

