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

@protocol MAIParagraphStyleProtocol
+(id<MAIParagraphStyleProtocol>)defaultParagraphStyle;
+(MAIWritingDirection)defaultWritingDirectionForLanguage:(nullable NSString*)languageName;
@property(readonly, getter=lineSpacing) CGFloat lineSpacing;
@property(readonly, getter=paragraphSpacing) CGFloat paragraphSpacing;
@property(readonly, getter=alignment) NSTextAlignment alignment;
@property(readonly, getter=headIndent) CGFloat headIndent;
@property(readonly, getter=tailIndent) CGFloat tailIndent;
@property(readonly, getter=firstLineHeadIndent) CGFloat firstLineHeadIndent;
@property(readonly, getter=minimumLineHeight) CGFloat minimumLineHeight;
@property(readonly, getter=maximumLineHeight) CGFloat maximumLineHeight;
@property(readonly, getter=lineBreakMode) NSLineBreakMode lineBreakMode;
@property(readonly, getter=baseWritingDirection) MAIWritingDirection baseWritingDirection;
@property(readonly, getter=lineHeightMultiple) CGFloat lineHeightMultiple;
@property(readonly, getter=paragraphSpacingBefore) CGFloat paragraphSpacingBefore;
@property(readonly, getter=hyphenationFactor) float hyphenationFactor;
@property(readonly, getter=tabStops) NSArray<MAITextTab*>* tabStops;
@property(readonly, getter=defaultTabInterval) CGFloat defaultTabInterval;
@property(readonly, getter=allowsDefaultTighteningForTruncation) BOOL allowsDefaultTighteningForTruncation;

#if TARGET_OS_IPHONE
#else
#endif

@end

#if TARGET_OS_IPHONE
@interface MAIParagraphStyle : NSParagraphStyle<MAIParagraphStyleProtocol>
#else
@interface MAIParagraphStyle : NSParagraphStyle<MAIParagraphStyleProtocol>
#endif
@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
