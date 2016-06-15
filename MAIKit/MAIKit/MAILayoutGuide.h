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

@protocol MAILayoutGuideProtocol
@property(nullable, setter=setOwningView:, getter=owningView) id<MAIViewProtocol> owningView;
@property(setter=setIdentifier:, getter=identifier) NSString* identifier;
@property(readonly, getter=leadingAnchor) id<MAILayoutXAxisAnchorProtocol> leadingAnchor;
@property(readonly, getter=trailingAnchor) id<MAILayoutXAxisAnchorProtocol> trailingAnchor;
@property(readonly, getter=leftAnchor) id<MAILayoutXAxisAnchorProtocol> leftAnchor;
@property(readonly, getter=rightAnchor) id<MAILayoutXAxisAnchorProtocol> rightAnchor;
@property(readonly, getter=topAnchor) id<MAILayoutYAxisAnchorProtocol> topAnchor;
@property(readonly, getter=bottomAnchor) id<MAILayoutYAxisAnchorProtocol> bottomAnchor;
@property(readonly, getter=widthAnchor) id<MAILayoutDimensionProtocol> widthAnchor;
@property(readonly, getter=heightAnchor) id<MAILayoutDimensionProtocol> heightAnchor;
@property(readonly, getter=centerXAnchor) id<MAILayoutXAxisAnchorProtocol> centerXAnchor;
@property(readonly, getter=centerYAnchor) id<MAILayoutYAxisAnchorProtocol> centerYAnchor;
@property(readonly, getter=hasAmbiguousLayout) BOOL hasAmbiguousLayout;

#if TARGET_OS_IPHONE
#else
#endif

@end

#if TARGET_OS_IPHONE
@interface MAILayoutGuide : UILayoutGuide<MAILayoutGuideProtocol>
#else
@interface MAILayoutGuide : NSLayoutGuide<MAILayoutGuideProtocol>
#endif
@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
