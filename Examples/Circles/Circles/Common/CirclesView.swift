//
//  CirclesView.swift
//  Circles
//
//  Created by Buckley on 7/9/15.
//  Copyright © 2015 Buckleyisms. All rights reserved.
//

import MAIKit

var colors = [
    MAIColor.blueColor(),
    MAIColor.redColor(),
    MAIColor.yellowColor(),
    MAIColor.greenColor(),
    MAIColor.orangeColor(),
    MAIColor.purpleColor()
]

struct Circle
{
    var center: CGPoint = CGPointZero
    var radius: CGFloat = 0.0
    var color: MAIColorProtocol = MAIColor.blackColor()
}

class CirclesView: MAIView {

    var circles: [ Circle ] = []
    var currentCircle = Circle()
    var dragging = false

    override func drawRect(dirtyRect: CGRect) {
        super.drawRect(dirtyRect)

        #if os(OSX)
            MAIColor.blackColor().set()
            NSRectFill(self.bounds)
        #endif

        #if os(iOS)
            let context = UIGraphicsGetCurrentContext();
        #else
            let context = NSGraphicsContext.currentContext()?.CGContext
        #endif

        CGContextSaveGState(context);

        for circle in self.circles
        {
            CGContextSetFillColorWithColor(context, circle.color.CGColor);

            CGContextAddArc(context,
                circle.center.x,
                circle.center.y,
                circle.radius,
                CGFloat(0.0),
                CGFloat(M_PI * 2),
                1);

            CGContextDrawPath(context, .Fill);
        }

        if self.dragging
        {
            CGContextSetFillColorWithColor(context, self.currentCircle.color.CGColor);

            CGContextAddArc(context,
                self.currentCircle.center.x,
                self.currentCircle.center.y,
                self.currentCircle.radius,
                CGFloat(0.0),
                CGFloat(M_PI * 2),
                1);

            CGContextDrawPath(context, .Fill);
        }
        
        CGContextRestoreGState(context);
    }

    func clear()
    {
        circles = []
        self.setNeedsDisplayInRect(self.bounds)
    }

    func dragStarted(point: CGPoint)
    {
        self.dragging = true
        self.currentCircle.center = point
        self.currentCircle.radius = 0.0
        self.currentCircle.color = colors[self.circles.count % colors.count]
    }

    func draggedTo(point: CGPoint)
    {
        if (self.currentCircle.center.x != point.x)
        {
            self.currentCircle.radius = sqrt(
                pow(self.currentCircle.center.y - point.y, 2) +
                pow(self.currentCircle.center.x - point.x, 2)
            )
        }

        self.setNeedsDisplayInRect(self.bounds)
    }

    func dragEnded()
    {
        self.dragging = false;
        self.setNeedsDisplayInRect(self.bounds)
        NSNotificationCenter.defaultCenter().postNotificationName("circleDrawn", object: self);
    }

    func saveCurrentCircle()
    {
        self.circles.append(self.currentCircle)
    }

#if os(iOS)

    override func touchesBegan(touches: Set<UITouch>, withEvent event: UIEvent?)
    {
        self.dragStarted(touches.first!.locationInView(self))
    }

    override func touchesMoved(touches: Set<UITouch>, withEvent event: UIEvent?)
    {
        self.draggedTo(touches.first!.locationInView(self))
    }

    override func touchesEnded(touches: Set<UITouch>, withEvent event: UIEvent?) {
        self.saveCurrentCircle()
        self.dragEnded()
    }

    override func touchesCancelled(touches: Set<UITouch>?, withEvent event: UIEvent?) {
        self.dragEnded()
    }

#else

    override func mouseDown(event: NSEvent?)
    {
        self.dragStarted(self.convertPoint(event!.locationInWindow, fromView: nil))
    }

    override func mouseDragged(event: NSEvent?)
    {
        self.draggedTo(self.convertPoint(event!.locationInWindow, fromView: nil))
    }

    override func mouseUp(event: NSEvent?)
    {
        self.saveCurrentCircle()
        self.dragEnded()
    }

#endif
    
}
