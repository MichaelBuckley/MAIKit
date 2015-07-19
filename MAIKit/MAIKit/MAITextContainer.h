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

@protocol MAITextContainerProtocol
-(nullable instancetype)initWithCoder:(NSCoder*)coder;
-(void)replaceLayoutManager:(id<MAILayoutManagerProtocol>)newLayoutManager;
-(CGRect)lineFragmentRectForProposedRect:(CGRect)proposedRect atIndex:(NSUInteger)characterIndex writingDirection:(MAIWritingDirection)baseWritingDirection remainingRect:(nullable CGRect*)remainingRect;
@property(nullable, setter=setLayoutManager:, getter=layoutManager) id<MAILayoutManagerProtocol> layoutManager;
@property(setter=setExclusionPaths:, getter=exclusionPaths) NSArray<MAIBezierPath*>* exclusionPaths;
@property(setter=setLineBreakMode:, getter=lineBreakMode) NSLineBreakMode lineBreakMode;
@property(setter=setLineFragmentPadding:, getter=lineFragmentPadding) CGFloat lineFragmentPadding;
@property(setter=setMaximumNumberOfLines:, getter=maximumNumberOfLines) NSUInteger maximumNumberOfLines;
@property(readonly, getter=isSimpleRectangularTextContainer) BOOL simpleRectangularTextContainer;
@property(setter=setWidthTracksTextView:, getter=widthTracksTextView) BOOL widthTracksTextView;
@property(setter=setHeightTracksTextView:, getter=heightTracksTextView) BOOL heightTracksTextView;

#if TARGET_OS_IPHONE
#else
-(instancetype)initWithContainerSize:(NSSize)aContainerSize NS_UNAVAILABLE;
#endif

@end

#if TARGET_OS_IPHONE
@interface MAITextContainer : NSTextContainer<MAITextContainerProtocol>
#else
@interface MAITextContainer : NSTextContainer<MAITextContainerProtocol>
#endif
@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
