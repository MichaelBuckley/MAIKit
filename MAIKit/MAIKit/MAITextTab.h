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

@protocol MAITextTabProtocol
+(NSCharacterSet*)columnTerminatorsForLocale:(nullable NSLocale*)aLocale;
-(instancetype)initWithTextAlignment:(NSTextAlignment)alignment location:(CGFloat)loc options:(NSDictionary<NSString*, id>*)options;
@property(readonly, getter=alignment) NSTextAlignment alignment;
@property(readonly, getter=location) CGFloat location;
@property(readonly, getter=options) NSDictionary<NSString*, id>* options;

#if TARGET_OS_IPHONE
#else
-(instancetype)initWithType:(NSTextTabType)type location:(CGFloat)loc NS_UNAVAILABLE;
#endif

@end

#if TARGET_OS_IPHONE
@interface MAITextTab : NSTextTab<MAITextTabProtocol>
#else
@interface MAITextTab : NSTextTab<MAITextTabProtocol>
#endif
@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
