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

@protocol MAIColorProtocol
+(id<MAIColorProtocol>)colorWithWhite:(CGFloat)white alpha:(CGFloat)alpha;
+(id<MAIColorProtocol>)colorWithHue:(CGFloat)hue saturation:(CGFloat)saturation brightness:(CGFloat)brightness alpha:(CGFloat)alpha;
+(id<MAIColorProtocol>)colorWithRed:(CGFloat)red green:(CGFloat)green blue:(CGFloat)blue alpha:(CGFloat)alpha;
+(id<MAIColorProtocol>)colorWithCGColor:(CGColorRef)cgColor;
+(id<MAIColorProtocol>)colorWithPatternImage:(id<MAIImageProtocol>)image;
+(id<MAIColorProtocol>)colorWithCIColor:(CIColor*)ciColor;
+(id<MAIColorProtocol>)blackColor;
+(id<MAIColorProtocol>)darkGrayColor;
+(id<MAIColorProtocol>)lightGrayColor;
+(id<MAIColorProtocol>)whiteColor;
+(id<MAIColorProtocol>)grayColor;
+(id<MAIColorProtocol>)redColor;
+(id<MAIColorProtocol>)greenColor;
+(id<MAIColorProtocol>)blueColor;
+(id<MAIColorProtocol>)cyanColor;
+(id<MAIColorProtocol>)yellowColor;
+(id<MAIColorProtocol>)magentaColor;
+(id<MAIColorProtocol>)orangeColor;
+(id<MAIColorProtocol>)purpleColor;
+(id<MAIColorProtocol>)brownColor;
+(id<MAIColorProtocol>)clearColor;
-(void)set;
-(void)setFill;
-(void)setStroke;
-(id<MAIColorProtocol>)colorWithAlphaComponent:(CGFloat)alpha;
@property(readonly, getter=CGColor) CGColorRef CGColor;

#if TARGET_OS_IPHONE
-(id<MAIColorProtocol>)initWithWhite:(CGFloat)white alpha:(CGFloat)alpha NS_UNAVAILABLE;
-(id<MAIColorProtocol>)initWithHue:(CGFloat)hue saturation:(CGFloat)saturation brightness:(CGFloat)brightness alpha:(CGFloat)alpha NS_UNAVAILABLE;
-(id<MAIColorProtocol>)initWithRed:(CGFloat)red green:(CGFloat)green blue:(CGFloat)blue alpha:(CGFloat)alpha NS_UNAVAILABLE;
-(id<MAIColorProtocol>)initWithCGColor:(CGColorRef)cgColor NS_UNAVAILABLE;
-(id<MAIColorProtocol>)initWithPatternImage:(id<MAIImageProtocol>)image NS_UNAVAILABLE;
-(id<MAIColorProtocol>)initWithCIColor:(CIColor*)ciColor NS_UNAVAILABLE;
+(id<MAIColorProtocol>)lightTextColor NS_UNAVAILABLE;
+(id<MAIColorProtocol>)darkTextColor NS_UNAVAILABLE;
+(id<MAIColorProtocol>)groupTableViewBackgroundColor NS_UNAVAILABLE;
#else
-(instancetype)init NS_UNAVAILABLE;
-(nullable instancetype)initWithCoder:(NSCoder*)coder NS_UNAVAILABLE;
+(id<MAIColorProtocol>)colorWithCalibratedWhite:(CGFloat)white alpha:(CGFloat)alpha NS_UNAVAILABLE;
+(id<MAIColorProtocol>)colorWithCalibratedHue:(CGFloat)hue saturation:(CGFloat)saturation brightness:(CGFloat)brightness alpha:(CGFloat)alpha NS_UNAVAILABLE;
+(id<MAIColorProtocol>)colorWithCalibratedRed:(CGFloat)red green:(CGFloat)green blue:(CGFloat)blue alpha:(CGFloat)alpha NS_UNAVAILABLE;
+(id<MAIColorProtocol>)colorWithDeviceWhite:(CGFloat)white alpha:(CGFloat)alpha NS_UNAVAILABLE;
+(id<MAIColorProtocol>)colorWithDeviceHue:(CGFloat)hue saturation:(CGFloat)saturation brightness:(CGFloat)brightness alpha:(CGFloat)alpha NS_UNAVAILABLE;
+(id<MAIColorProtocol>)colorWithDeviceRed:(CGFloat)red green:(CGFloat)green blue:(CGFloat)blue alpha:(CGFloat)alpha NS_UNAVAILABLE;
+(id<MAIColorProtocol>)colorWithDeviceCyan:(CGFloat)cyan magenta:(CGFloat)magenta yellow:(CGFloat)yellow black:(CGFloat)black alpha:(CGFloat)alpha NS_UNAVAILABLE;
+(nullable id<MAIColorProtocol>)colorWithCatalogName:(NSString*)listName colorName:(NSString*)colorName NS_UNAVAILABLE;
+(id<MAIColorProtocol>)colorWithColorSpace:(NSColorSpace*)space components:(const CGFloat*)components count:(NSInteger)numberOfComponents NS_UNAVAILABLE;
+(id<MAIColorProtocol>)colorWithGenericGamma22White:(CGFloat)white alpha:(CGFloat)alpha NS_UNAVAILABLE;
+(id<MAIColorProtocol>)colorWithSRGBRed:(CGFloat)red green:(CGFloat)green blue:(CGFloat)blue alpha:(CGFloat)alpha NS_UNAVAILABLE;
+(id<MAIColorProtocol>)controlShadowColor NS_UNAVAILABLE;
+(id<MAIColorProtocol>)controlDarkShadowColor NS_UNAVAILABLE;
+(id<MAIColorProtocol>)controlColor NS_UNAVAILABLE;
+(id<MAIColorProtocol>)controlHighlightColor NS_UNAVAILABLE;
+(id<MAIColorProtocol>)controlLightHighlightColor NS_UNAVAILABLE;
+(id<MAIColorProtocol>)controlTextColor NS_UNAVAILABLE;
+(id<MAIColorProtocol>)controlBackgroundColor NS_UNAVAILABLE;
+(id<MAIColorProtocol>)selectedControlColor NS_UNAVAILABLE;
+(id<MAIColorProtocol>)secondarySelectedControlColor NS_UNAVAILABLE;
+(id<MAIColorProtocol>)selectedControlTextColor NS_UNAVAILABLE;
+(id<MAIColorProtocol>)disabledControlTextColor NS_UNAVAILABLE;
+(id<MAIColorProtocol>)textColor NS_UNAVAILABLE;
+(id<MAIColorProtocol>)textBackgroundColor NS_UNAVAILABLE;
+(id<MAIColorProtocol>)selectedTextColor NS_UNAVAILABLE;
+(id<MAIColorProtocol>)selectedTextBackgroundColor NS_UNAVAILABLE;
+(id<MAIColorProtocol>)gridColor NS_UNAVAILABLE;
+(id<MAIColorProtocol>)keyboardFocusIndicatorColor NS_UNAVAILABLE;
+(id<MAIColorProtocol>)windowBackgroundColor NS_UNAVAILABLE;
+(id<MAIColorProtocol>)underPageBackgroundColor NS_UNAVAILABLE;
+(id<MAIColorProtocol>)labelColor NS_UNAVAILABLE;
+(id<MAIColorProtocol>)secondaryLabelColor NS_UNAVAILABLE;
+(id<MAIColorProtocol>)tertiaryLabelColor NS_UNAVAILABLE;
+(id<MAIColorProtocol>)quaternaryLabelColor NS_UNAVAILABLE;
+(id<MAIColorProtocol>)scrollBarColor NS_UNAVAILABLE;
+(id<MAIColorProtocol>)knobColor NS_UNAVAILABLE;
+(id<MAIColorProtocol>)selectedKnobColor NS_UNAVAILABLE;
+(id<MAIColorProtocol>)windowFrameColor NS_UNAVAILABLE;
+(id<MAIColorProtocol>)windowFrameTextColor NS_UNAVAILABLE;
+(id<MAIColorProtocol>)selectedMenuItemColor NS_UNAVAILABLE;
+(id<MAIColorProtocol>)selectedMenuItemTextColor NS_UNAVAILABLE;
+(id<MAIColorProtocol>)highlightColor NS_UNAVAILABLE;
+(id<MAIColorProtocol>)shadowColor NS_UNAVAILABLE;
+(id<MAIColorProtocol>)headerColor NS_UNAVAILABLE;
+(id<MAIColorProtocol>)headerTextColor NS_UNAVAILABLE;
+(id<MAIColorProtocol>)alternateSelectedControlColor NS_UNAVAILABLE;
+(id<MAIColorProtocol>)alternateSelectedControlTextColor NS_UNAVAILABLE;
+(id<MAIColorProtocol>)colorForControlTint:(NSControlTint)controlTint NS_UNAVAILABLE;
+(NSControlTint)currentControlTint NS_UNAVAILABLE;
+(nullable id<MAIColorProtocol>)colorFromPasteboard:(id<MAIPasteboardProtocol>)pasteBoard NS_UNAVAILABLE;
+(void)setIgnoresAlpha:(BOOL)flag NS_UNAVAILABLE;
+(BOOL)ignoresAlpha NS_UNAVAILABLE;
#endif

@end

#if TARGET_OS_IPHONE
@interface MAIColor : UIColor<MAIColorProtocol>
#else
@interface MAIColor : NSColor<MAIColorProtocol>
#endif
@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
