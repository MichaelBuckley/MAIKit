#import <TargetConditionals.h>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#if TARGET_OS_IPHONE
@import UIKit;
#else
@import AppKit;
#endif

#import "MAIEnums.h"
#import "MAIDeclarations.h"

NS_ASSUME_NONNULL_BEGIN

@protocol MAIBezierPathProtocol
-(void)moveToPoint:(CGPoint)point;
-(void)closePath;
-(void)removeAllPoints;
-(BOOL)containsPoint:(CGPoint)point;
-(void)setLineDash:(nullable const CGFloat*)pattern count:(NSInteger)count phase:(CGFloat)phase;
-(void)getLineDash:(nullable CGFloat*)pattern count:(nullable NSInteger*)count phase:(nullable CGFloat*)phase;
-(void)fill;
-(void)stroke;
-(void)addClip;
@property(readonly, getter=isEmpty) BOOL empty;
@property(readonly, getter=bounds) CGRect bounds;
@property(readonly, getter=currentPoint) CGPoint currentPoint;
@property(setter=setLineWidth:, getter=lineWidth) CGFloat lineWidth;
@property(setter=setMiterLimit:, getter=miterLimit) CGFloat miterLimit;
@property(setter=setFlatness:, getter=flatness) CGFloat flatness;

#if TARGET_OS_IPHONE
+(instancetype)bezierPathWithRoundedRect:(CGRect)rect cornerRadius:(CGFloat)cornerRadius NS_UNAVAILABLE;
+(instancetype)bezierPathWithRoundedRect:(CGRect)rect byRoundingCorners:(UIRectCorner)corners cornerRadii:(CGSize)cornerRadii NS_UNAVAILABLE;
+(instancetype)bezierPathWithArcCenter:(CGPoint)center radius:(CGFloat)radius startAngle:(CGFloat)startAngle endAngle:(CGFloat)endAngle clockwise:(BOOL)clockwise NS_UNAVAILABLE;
+(instancetype)bezierPathWithCGPath:(CGPathRef)CGPath NS_UNAVAILABLE;
-(instancetype)init NS_UNAVAILABLE;
-(nullable instancetype)initWithCoder:(NSCoder*)aDecoder NS_UNAVAILABLE;
#else
+(id<MAIBezierPathProtocol>)bezierPathWithRoundedRect:(CGRect)rect xRadius:(CGFloat)xRadius yRadius:(CGFloat)yRadius NS_UNAVAILABLE;
+(void)fillRect:(CGRect)rect NS_UNAVAILABLE;
+(void)strokeRect:(CGRect)rect NS_UNAVAILABLE;
+(void)clipRect:(CGRect)rect NS_UNAVAILABLE;
+(void)strokeLineFromPoint:(CGPoint)point1 toPoint:(CGPoint)point2 NS_UNAVAILABLE;
+(void)drawPackedGlyphs:(const char*)packedGlyphs atPoint:(CGPoint)point NS_UNAVAILABLE;
+(void)setDefaultMiterLimit:(CGFloat)limit NS_UNAVAILABLE;
+(CGFloat)defaultMiterLimit NS_UNAVAILABLE;
+(void)setDefaultFlatness:(CGFloat)flatness NS_UNAVAILABLE;
+(CGFloat)defaultFlatness NS_UNAVAILABLE;
+(void)setDefaultWindingRule:(NSWindingRule)windingRule NS_UNAVAILABLE;
+(NSWindingRule)defaultWindingRule NS_UNAVAILABLE;
+(void)setDefaultLineCapStyle:(NSLineCapStyle)lineCapStyle NS_UNAVAILABLE;
+(NSLineCapStyle)defaultLineCapStyle NS_UNAVAILABLE;
+(void)setDefaultLineJoinStyle:(NSLineJoinStyle)lineJoinStyle NS_UNAVAILABLE;
+(NSLineJoinStyle)defaultLineJoinStyle NS_UNAVAILABLE;
+(void)setDefaultLineWidth:(CGFloat)lineWidth NS_UNAVAILABLE;
+(CGFloat)defaultLineWidth NS_UNAVAILABLE;
#endif

@end

#if TARGET_OS_IPHONE
@interface MAIBezierPath : UIBezierPath<MAIBezierPathProtocol>
#else
@interface MAIBezierPath : NSBezierPath<MAIBezierPathProtocol>
#endif
@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
