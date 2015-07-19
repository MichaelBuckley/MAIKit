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

@protocol MAINibProtocol

#if TARGET_OS_IPHONE
+(id<MAINibProtocol>)nibWithNibName:(NSString*)name bundle:(nullable NSBundle*)bundleOrNil NS_UNAVAILABLE;
+(id<MAINibProtocol>)nibWithData:(NSData*)data bundle:(nullable NSBundle*)bundleOrNil NS_UNAVAILABLE;
#else
-(nullable instancetype)initWithNibNamed:(NSString*)nibName bundle:(nullable NSBundle*)bundle NS_UNAVAILABLE;
-(instancetype)initWithNibData:(NSData*)nibData bundle:(nullable NSBundle*)bundle NS_UNAVAILABLE;
#endif

@end

#if TARGET_OS_IPHONE
@interface MAINib : UINib<MAINibProtocol>
#else
@interface MAINib : NSNib<MAINibProtocol>
#endif
@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
