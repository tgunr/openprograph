import AppKit

func test1 () {
    let screens = NSScreen.screens()
    let screen = screens![1]
    let sf = screen.frame
    var winRect = NSMakeRect(0, 0, 600, 400)
    let window = NSWindow(contentRect: winRect, styleMask: .titled, backing: .buffered, defer: false, screen: screen)
    let windowView = NSView(frame: winRect)
    
    let buttonSize = CGSize(width: 100, height: 50)
    let buttonOrigin = CGPoint.zero
    var buttonRect = CGRect.init(origin: buttonOrigin, size: buttonSize)
    //winRect.centerInRect(dest: &buttonRect)
    
    let button = PGObject(frame: buttonRect)
    button.name = "Primitive"
    //button.setBoundsSize(NSSize.init(width: 20.0, height: 3.0))
    //button.bezelStyle = .rounded
    let opimage = PGObjectImage()
    opimage.initWithName("oper_prim")
    button.opimage = opimage
    
    //windowView.addSubview(button)
    //window.contentView?.addSubview(windowView)
    //window.makeKeyAndOrderFront(nil)
    //sf.centerInRect(dest: &winRect)
    //window.setFrameOrigin(winRect.origin)
    pgc.liveView = button
    pgc.needsIndefiniteExecution = false
}

