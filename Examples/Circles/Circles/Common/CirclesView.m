//
//  CirclesView.m
//  Circles
//
//  Created by Buckley on 6/21/15.
//  Copyright © 2015 Buckleyisms. All rights reserved.
//

#import "CirclesView.h"

@interface Circle : NSObject

@property (nonatomic, readwrite, assign) CGPoint center;
@property (nonatomic, readwrite, assign) CGFloat radius;
@property (nonatomic, readwrite, strong) MAIColor* color;

@end

@implementation Circle

- (id) copy
{
    Circle* copy = [Circle new];
    [copy setCenter: [self center]];
    [copy setRadius: [self radius]];
    [copy setColor: [self color]];

    return copy;
}

@end

@interface CirclesView()
@property (nonatomic, readwrite, strong) NSMutableArray* circles;
@property (nonatomic, readwrite, strong) Circle* currentCircle;
@property (nonatomic, readwrite, assign) BOOL dragging;
@end

static NSArray* colors = nil;

@implementation CirclesView

+ (void) initialize
{
    colors = @[ [MAIColor blueColor],
                [MAIColor redColor],
                [MAIColor yellowColor],
                [MAIColor greenColor],
                [MAIColor orangeColor],
                [MAIColor purpleColor]
              ];
}

- (void) awakeFromNib
{
    [self setCircles: [NSMutableArray array]];
    [self setCurrentCircle: [Circle new]];
}

- (void) clear
{
    [self setCircles: [NSMutableArray array]];
    [self setNeedsDisplayInRect: [self bounds]];
}

- (void) drawRect:(CGRect)rect
{
    [super drawRect: rect];

#if !TARGET_OS_IPHONE
    [[MAIColor blackColor] set];
    NSRectFill([(NSView*) self bounds]);
#endif

#if TARGET_OS_IPHONE
    CGContextRef context = UIGraphicsGetCurrentContext();
#else
    CGContextRef context = [[NSGraphicsContext currentContext] CGContext];
#endif

    CGContextSaveGState(context);

    for (Circle* circle in [self circles])
    {
        CGContextSetFillColorWithColor(context, [[circle color] CGColor]);

        CGContextAddArc(context,
                        circle.center.x,
                        circle.center.y,
                        circle.radius,
                        0.0,
                        M_PI * 2,
                        1);

        CGContextDrawPath(context, kCGPathFill);
    }

    if ([self dragging])
    {
        CGContextSetFillColorWithColor(context, [[[self currentCircle] color] CGColor]);

        CGContextAddArc(context,
                        [self currentCircle] .center.x,
                        [self currentCircle] .center.y,
                        [self currentCircle] .radius,
                        0.0,
                        M_PI * 2,
                        1);

        CGContextDrawPath(context, kCGPathFill);
    }

    CGContextRestoreGState(context);
}

- (void) beganDragAtPoint: (CGPoint) point
{
    [self setDragging: YES];
    [[self currentCircle] setCenter: point];
    [[self currentCircle] setRadius: 0.0];
    [[self currentCircle] setColor: colors[[[self circles] count] % [colors count]]];
}

- (void) draggedToPoint: (CGPoint) point
{
    if ([[self currentCircle] center].x != point.x)
    {
        [[self currentCircle] setRadius:
         sqrt(pow([self currentCircle].center.y - point.y, 2) + pow([self currentCircle].center.x - point.x, 2))];
    }

    [self setNeedsDisplayInRect: [self bounds]];
}

- (void) dragEnded
{
    [self setDragging: NO];
    [self setNeedsDisplayInRect: [self bounds]];
    [[NSNotificationCenter defaultCenter] postNotificationName: @"circleDrawn" object: self];
}

- (void) saveCurrentCircle
{
    [[self circles] addObject: [[self currentCircle] copy]];
}

#if TARGET_OS_IPHONE
- (void) touchesBegan: (nonnull NSSet<UITouch*>*) touches withEvent: (nullable UIEvent*) event
{
    [self beganDragAtPoint: [[touches anyObject] locationInView: self]];
}

- (void) touchesMoved: (nonnull NSSet<UITouch*>*) touches withEvent: (nullable UIEvent*) event
{
    [self draggedToPoint: [[touches anyObject] locationInView: self]];
}

- (void) touchesEnded: (nonnull NSSet<UITouch*>*) touches withEvent: (nullable UIEvent*) event
{
    [self saveCurrentCircle];
    [self dragEnded];
}

- (void) touchesCancelled: (nullable NSSet<UITouch*>*) touches withEvent: (nullable UIEvent*) event
{
    [self dragEnded];
}

#else

- (void) mouseDown: (NSEvent*) event
{
    [self beganDragAtPoint: [self convertPoint: (CGPoint) [event locationInWindow] fromView: nil]];

}

- (void) mouseDragged: (NSEvent*) event
{
    [self draggedToPoint: [self convertPoint: [event locationInWindow] fromView: nil]];
}

- (void) mouseUp: (NSEvent*) event
{
    [self saveCurrentCircle];
    [self dragEnded];
}

#endif

@end


