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
    var center: CGPoint = CGPoint.zero
    var radius: CGFloat = 0.0
    var color: MAIColorProtocol = MAIColor.blackColor()
}

class CirclesView: MAIView {

    var circles: [ Circle ] = []
    var currentCircle = Circle()
    var dragging = false

    override func draw(_ dirtyRect: CGRect) {
        super.draw(dirtyRect)

        #if os(OSX)
            MAIColor.blackColor().set()
            NSRectFill(self.bounds)
        #endif

        #if os(iOS)
            let context = UIGraphicsGetCurrentContext();
        #else
            let context = NSGraphicsContext.current()?.cgContext
        #endif

        context!.saveGState();

        for circle in self.circles
        {
            context!.setFillColor(circle.color.cgColor);

            context!.addArc(centerX: circle.center.x,
                            y: circle.center.y,
                            radius: circle.radius,
                            startAngle: CGFloat(0.0),
                            endAngle: CGFloat(M_PI * 2),
                            clockwise: 1);

            context!.drawPath(using: .fill);
        }

        if self.dragging
        {
            context!.setFillColor(self.currentCircle.color.cgColor);

            context!.addArc(centerX: self.currentCircle.center.x,
                            y: self.currentCircle.center.y,
                            radius: self.currentCircle.radius,
                            startAngle: CGFloat(0.0),
                            endAngle: CGFloat(M_PI * 2),
                            clockwise: 1);

            context!.drawPath(using: .fill);
        }
        
        context!.restoreGState();
    }

    func clear()
    {
        circles = []
        self.setNeedsDisplay(self.bounds)
    }

    func dragStarted(_ point: CGPoint)
    {
        self.dragging = true
        self.currentCircle.center = point
        self.currentCircle.radius = 0.0
        self.currentCircle.color = colors[self.circles.count % colors.count]
    }

    func draggedTo(_ point: CGPoint)
    {
        if (self.currentCircle.center.x != point.x)
        {
            self.currentCircle.radius = sqrt(
                pow(self.currentCircle.center.y - point.y, 2) +
                pow(self.currentCircle.center.x - point.x, 2)
            )
        }

        self.setNeedsDisplay(self.bounds)
    }

    func dragEnded()
    {
        self.dragging = false;
        self.setNeedsDisplay(self.bounds)
        NotificationCenter.default().post(name: "circleDrawn" as NSNotification.Name, object: self);
    }

    func saveCurrentCircle()
    {
        self.circles.append(self.currentCircle)
    }

#if os(iOS)

    override func touchesBegan(_ touches: Set<UITouch>, with event: UIEvent?)
    {
        self.dragStarted(touches.first!.location(in: self))
    }

    override func touchesMoved(_ touches: Set<UITouch>, with event: UIEvent?)
    {
        self.draggedTo(touches.first!.location(in: self))
    }

    override func touchesEnded(_ touches: Set<UITouch>, with event: UIEvent?) {
        self.saveCurrentCircle()
        self.dragEnded()
    }

    override func touchesCancelled(_ touches: Set<UITouch>?, with event: UIEvent?) {
        self.dragEnded()
    }

#else

    override func mouseDown(_ event: NSEvent?)
    {
        self.dragStarted(self.convert(event!.locationInWindow, from: nil))
    }

    override func mouseDragged(_ event: NSEvent?)
    {
        self.draggedTo(self.convert(event!.locationInWindow, from: nil))
    }

    override func mouseUp(_ event: NSEvent?)
    {
        self.saveCurrentCircle()
        self.dragEnded()
    }

#endif
    
}
