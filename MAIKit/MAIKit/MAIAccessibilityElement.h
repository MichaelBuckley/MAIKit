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

@protocol MAIAccessibilityElementProtocol

#if TARGET_OS_IPHONE
-(instancetype)initWithAccessibilityContainer:(id)container NS_UNAVAILABLE;
#else
+(id)accessibilityElementWithRole:(NSString*)role frame:(CGRect)frame label:(nullable NSString*)label parent:(nullable id)parent NS_UNAVAILABLE;
#endif

@end

#if TARGET_OS_IPHONE
@interface MAIAccessibilityElement : UIAccessibilityElement<MAIAccessibilityElementProtocol>
#else
@interface MAIAccessibilityElement : NSAccessibilityElement<MAIAccessibilityElementProtocol>
#endif
@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
