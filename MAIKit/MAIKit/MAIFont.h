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

@protocol MAIFontProtocol
+(nullable id<MAIFontProtocol>)fontWithName:(NSString*)fontName size:(CGFloat)fontSize;
+(id<MAIFontProtocol>)systemFontOfSize:(CGFloat)fontSize;
+(id<MAIFontProtocol>)boldSystemFontOfSize:(CGFloat)fontSize;
+(id<MAIFontProtocol>)systemFontOfSize:(CGFloat)fontSize weight:(CGFloat)weight;
+(id<MAIFontProtocol>)monospacedDigitSystemFontOfSize:(CGFloat)fontSize weight:(CGFloat)weight;
+(id<MAIFontProtocol>)fontWithDescriptor:(id<MAIFontDescriptorProtocol>)descriptor size:(CGFloat)pointSize;
+(CGFloat)labelFontSize;
+(CGFloat)smallSystemFontSize;
+(CGFloat)systemFontSize;
@property(readonly, getter=fontName) NSString* fontName;
@property(readonly, getter=pointSize) CGFloat pointSize;
@property(readonly, getter=ascender) CGFloat ascender;
@property(readonly, getter=descender) CGFloat descender;
@property(readonly, getter=capHeight) CGFloat capHeight;
@property(readonly, getter=xHeight) CGFloat xHeight;
@property(readonly, getter=leading) CGFloat leading;

#if TARGET_OS_IPHONE
+(id<MAIFontProtocol>)preferredFontForTextStyle:(NSString*)style NS_UNAVAILABLE;
+(id<MAIFontProtocol>)italicSystemFontOfSize:(CGFloat)fontSize NS_UNAVAILABLE;
+(CGFloat)buttonFontSize NS_UNAVAILABLE;
#else
+(nullable id<MAIFontProtocol>)fontWithName:(NSString*)fontName matrix:(const CGFloat*)fontMatrix NS_UNAVAILABLE;
+(nullable id<MAIFontProtocol>)fontWithDescriptor:(id<MAIFontDescriptorProtocol>)fontDescriptor textTransform:(nullable NSAffineTransform*)textTransform NS_UNAVAILABLE;
+(nullable id<MAIFontProtocol>)userFontOfSize:(CGFloat)fontSize NS_UNAVAILABLE;
+(nullable id<MAIFontProtocol>)userFixedPitchFontOfSize:(CGFloat)fontSize NS_UNAVAILABLE;
+(void)setUserFont:(nullable id<MAIFontProtocol>)aFont NS_UNAVAILABLE;
+(void)setUserFixedPitchFont:(nullable id<MAIFontProtocol>)aFont NS_UNAVAILABLE;
+(id<MAIFontProtocol>)labelFontOfSize:(CGFloat)fontSize NS_UNAVAILABLE;
+(id<MAIFontProtocol>)titleBarFontOfSize:(CGFloat)fontSize NS_UNAVAILABLE;
+(id<MAIFontProtocol>)menuFontOfSize:(CGFloat)fontSize NS_UNAVAILABLE;
+(id<MAIFontProtocol>)menuBarFontOfSize:(CGFloat)fontSize NS_UNAVAILABLE;
+(id<MAIFontProtocol>)messageFontOfSize:(CGFloat)fontSize NS_UNAVAILABLE;
+(id<MAIFontProtocol>)paletteFontOfSize:(CGFloat)fontSize NS_UNAVAILABLE;
+(id<MAIFontProtocol>)toolTipsFontOfSize:(CGFloat)fontSize NS_UNAVAILABLE;
+(id<MAIFontProtocol>)controlContentFontOfSize:(CGFloat)fontSize NS_UNAVAILABLE;
+(CGFloat)systemFontSizeForControlSize:(NSControlSize)controlSize NS_UNAVAILABLE;
#endif

@end

#if TARGET_OS_IPHONE
@interface MAIFont : UIFont<MAIFontProtocol>
#else
@interface MAIFont : NSFont<MAIFontProtocol>
#endif
@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
