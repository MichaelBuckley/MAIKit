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

@protocol MAIStringDrawingContextProtocol
@property(setter=setMinimumScaleFactor:, getter=minimumScaleFactor) CGFloat minimumScaleFactor;
@property(readonly, getter=actualScaleFactor) CGFloat actualScaleFactor;
@property(readonly, getter=totalBounds) CGRect totalBounds;

#if TARGET_OS_IPHONE
#else
#endif

@end

#if TARGET_OS_IPHONE
@interface MAIStringDrawingContext : NSStringDrawingContext<MAIStringDrawingContextProtocol>
#else
@interface MAIStringDrawingContext : NSStringDrawingContext<MAIStringDrawingContextProtocol>
#endif
@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
