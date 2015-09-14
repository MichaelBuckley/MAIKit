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

@protocol MAIMenuItemProtocol
@property(setter=setTitle:, getter=title) NSString* title;

#if TARGET_OS_IPHONE
-(instancetype)initWithTitle:(NSString*)title action:(SEL)action NS_UNAVAILABLE;
#else
+(void)setUsesUserKeyEquivalents:(BOOL)flag NS_UNAVAILABLE;
+(BOOL)usesUserKeyEquivalents NS_UNAVAILABLE;
+(id<MAIMenuItemProtocol>)separatorItem NS_UNAVAILABLE;
-(instancetype)initWithTitle:(NSString*)aString action:(nullable SEL)aSelector keyEquivalent:(NSString*)charCode NS_UNAVAILABLE;
#endif

@end

#if TARGET_OS_IPHONE
@interface MAIMenuItem : UIMenuItem<MAIMenuItemProtocol>
#else
@interface MAIMenuItem : NSMenuItem<MAIMenuItemProtocol>
#endif
@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
