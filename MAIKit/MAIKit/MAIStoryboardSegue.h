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

@protocol MAIStoryboardSegueProtocol
-(void)perform;
@property(readonly, nullable, getter=identifier) NSString* identifier;

#if TARGET_OS_IPHONE
-(instancetype)init NS_UNAVAILABLE;
#else
#endif

@end

#if TARGET_OS_IPHONE
@interface MAIStoryboardSegue : UIStoryboardSegue<MAIStoryboardSegueProtocol>
#else
@interface MAIStoryboardSegue : NSStoryboardSegue<MAIStoryboardSegueProtocol>
#endif
@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
