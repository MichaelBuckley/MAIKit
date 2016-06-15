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

@protocol MAIImageProtocol
+(nullable id<MAIImageProtocol>)imageNamed:(NSString*)name;
-(nullable instancetype)initWithContentsOfFile:(NSString*)path;
-(nullable instancetype)initWithData:(NSData*)data;
-(void)drawInRect:(CGRect)rect;

#if TARGET_OS_IPHONE
+(nullable id<MAIImageProtocol>)imageNamed:(NSString*)name inBundle:(nullable NSBundle*)bundle compatibleWithTraitCollection:(nullable UITraitCollection*)traitCollection NS_UNAVAILABLE;
+(nullable id<MAIImageProtocol>)imageWithContentsOfFile:(NSString*)path NS_UNAVAILABLE;
+(nullable id<MAIImageProtocol>)imageWithData:(NSData*)data NS_UNAVAILABLE;
+(nullable id<MAIImageProtocol>)imageWithData:(NSData*)data scale:(CGFloat)scale NS_UNAVAILABLE;
+(id<MAIImageProtocol>)imageWithCGImage:(CGImageRef)cgImage NS_UNAVAILABLE;
+(id<MAIImageProtocol>)imageWithCGImage:(CGImageRef)cgImage scale:(CGFloat)scale orientation:(UIImageOrientation)orientation NS_UNAVAILABLE;
+(id<MAIImageProtocol>)imageWithCIImage:(CIImage*)ciImage NS_UNAVAILABLE;
+(id<MAIImageProtocol>)imageWithCIImage:(CIImage*)ciImage scale:(CGFloat)scale orientation:(UIImageOrientation)orientation NS_UNAVAILABLE;
-(nullable instancetype)initWithData:(NSData*)data scale:(CGFloat)scale NS_UNAVAILABLE;
-(instancetype)initWithCGImage:(CGImageRef)cgImage NS_UNAVAILABLE;
-(instancetype)initWithCGImage:(CGImageRef)cgImage scale:(CGFloat)scale orientation:(UIImageOrientation)orientation NS_UNAVAILABLE;
-(instancetype)initWithCIImage:(CIImage*)ciImage NS_UNAVAILABLE;
-(instancetype)initWithCIImage:(CIImage*)ciImage scale:(CGFloat)scale orientation:(UIImageOrientation)orientation NS_UNAVAILABLE;
+(nullable id<MAIImageProtocol>)animatedImageNamed:(NSString*)name duration:(NSTimeInterval)duration NS_UNAVAILABLE;
+(nullable id<MAIImageProtocol>)animatedResizableImageNamed:(NSString*)name capInsets:(UIEdgeInsets)capInsets duration:(NSTimeInterval)duration NS_UNAVAILABLE;
+(nullable id<MAIImageProtocol>)animatedResizableImageNamed:(NSString*)name capInsets:(UIEdgeInsets)capInsets resizingMode:(UIImageResizingMode)resizingMode duration:(NSTimeInterval)duration NS_UNAVAILABLE;
+(nullable id<MAIImageProtocol>)animatedImageWithImages:(NSArray<MAIImage*>*)images duration:(NSTimeInterval)duration NS_UNAVAILABLE;
#else
-(instancetype)initWithSize:(NSSize)size NS_UNAVAILABLE;
-(nullable instancetype)initWithContentsOfURL:(NSURL*)url NS_UNAVAILABLE;
-(nullable instancetype)initByReferencingFile:(NSString*)fileName NS_UNAVAILABLE;
-(instancetype)initByReferencingURL:(NSURL*)url NS_UNAVAILABLE;
-(instancetype)initWithIconRef:(IconRef)iconRef NS_UNAVAILABLE;
-(nullable instancetype)initWithPasteboard:(id<MAIPasteboardProtocol>)pasteboard NS_UNAVAILABLE;
-(nullable instancetype)initWithDataIgnoringOrientation:(NSData*)data NS_UNAVAILABLE;
+(id<MAIImageProtocol>)imageWithSize:(NSSize)size flipped:(BOOL)drawingHandlerShouldBeCalledWithFlippedContext drawingHandler:(BOOL (^)(CGRect dstRect))drawingHandler NS_UNAVAILABLE;
+(BOOL)canInitWithPasteboard:(id<MAIPasteboardProtocol>)pasteboard NS_UNAVAILABLE;
-(instancetype)initWithCGImage:(CGImageRef)cgImage size:(NSSize)size NS_UNAVAILABLE;
#endif

@end

#if TARGET_OS_IPHONE
@interface MAIImage : UIImage<MAIImageProtocol>
#else
@interface MAIImage : NSImage<MAIImageProtocol>
#endif
@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
