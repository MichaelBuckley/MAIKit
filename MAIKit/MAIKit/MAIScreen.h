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

@protocol MAIScreenProtocol
+(id<MAIScreenProtocol>)mainScreen;

#if TARGET_OS_IPHONE
#else
+(nullable id<MAIScreenProtocol>)deepestScreen NS_UNAVAILABLE;
+(BOOL)screensHaveSeparateSpaces NS_UNAVAILABLE;
#endif

@end

#if TARGET_OS_IPHONE
@interface MAIScreen : UIScreen<MAIScreenProtocol>
#else
@interface MAIScreen : NSScreen<MAIScreenProtocol>
#endif
@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
