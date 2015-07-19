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

@protocol MAIShadowProtocol
-(instancetype)init;
@property(setter=setShadowBlurRadius:, getter=shadowBlurRadius) CGFloat shadowBlurRadius;

#if TARGET_OS_IPHONE
-(nullable instancetype)initWithCoder:(NSCoder*)aDecoder NS_UNAVAILABLE;
#else
#endif

@end

#if TARGET_OS_IPHONE
@interface MAIShadow : NSShadow<MAIShadowProtocol>
#else
@interface MAIShadow : NSShadow<MAIShadowProtocol>
#endif
@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
