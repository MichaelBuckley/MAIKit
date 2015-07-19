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

@protocol MAIPrinterProtocol

#if TARGET_OS_IPHONE
+(id<MAIPrinterProtocol>)printerWithURL:(NSURL*)url NS_UNAVAILABLE;
#else
+(nullable id<MAIPrinterProtocol>)printerWithName:(NSString*)name NS_UNAVAILABLE;
+(nullable id<MAIPrinterProtocol>)printerWithType:(NSString*)type NS_UNAVAILABLE;
#endif

@end

#if TARGET_OS_IPHONE
@interface MAIPrinter : UIPrinter<MAIPrinterProtocol>
#else
@interface MAIPrinter : NSPrinter<MAIPrinterProtocol>
#endif
@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
