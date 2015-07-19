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

@protocol MAITableViewRowActionProtocol

#if TARGET_OS_IPHONE
#else
#endif

@end

#if TARGET_OS_IPHONE
@interface MAITableViewRowAction : UITableViewRowAction<MAITableViewRowActionProtocol>
#else
@interface MAITableViewRowAction : NSTableViewRowAction<MAITableViewRowActionProtocol>
#endif
@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
