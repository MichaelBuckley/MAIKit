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

@protocol MAIPrintInfoProtocol

#if TARGET_OS_IPHONE
-(nullable instancetype)initWithCoder:(NSCoder*)aDecoder NS_UNAVAILABLE;
+(id<MAIPrintInfoProtocol>)printInfo NS_UNAVAILABLE;
+(id<MAIPrintInfoProtocol>)printInfoWithDictionary:(nullable NSDictionary*)dictionary NS_UNAVAILABLE;
#else
+(void)setSharedPrintInfo:(id<MAIPrintInfoProtocol>)printInfo NS_UNAVAILABLE;
+(id<MAIPrintInfoProtocol>)sharedPrintInfo NS_UNAVAILABLE;
-(instancetype)initWithDictionary:(NSDictionary<NSString*, id>*)attributes NS_UNAVAILABLE;
+(nullable id<MAIPrinterProtocol>)defaultPrinter NS_UNAVAILABLE;
#endif

@end

#if TARGET_OS_IPHONE
@interface MAIPrintInfo : UIPrintInfo<MAIPrintInfoProtocol>
#else
@interface MAIPrintInfo : NSPrintInfo<MAIPrintInfoProtocol>
#endif
@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
