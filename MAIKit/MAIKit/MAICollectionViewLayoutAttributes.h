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

@protocol MAICollectionViewLayoutAttributesProtocol
+(instancetype)layoutAttributesForSupplementaryViewOfKind:(NSString*)elementKind withIndexPath:(NSIndexPath*)indexPath;
+(instancetype)layoutAttributesForDecorationViewOfKind:(NSString*)decorationViewKind withIndexPath:(NSIndexPath*)indexPath;
@property(setter=setFrame:, getter=frame) CGRect frame;
@property(setter=setAlpha:, getter=alpha) CGFloat alpha;
@property(setter=setZIndex:, getter=zIndex) NSInteger zIndex;
@property(setter=setHidden:, getter=isHidden) BOOL hidden;
@property(readonly, nullable, getter=representedElementKind) NSString* representedElementKind;

#if TARGET_OS_IPHONE
+(instancetype)layoutAttributesForCellWithIndexPath:(NSIndexPath*)indexPath NS_UNAVAILABLE;
#else
+(instancetype)layoutAttributesForItemWithIndexPath:(NSIndexPath*)indexPath NS_UNAVAILABLE;
+(instancetype)layoutAttributesForInterItemGapBeforeIndexPath:(NSIndexPath*)indexPath NS_UNAVAILABLE;
#endif

@end

#if TARGET_OS_IPHONE
@interface MAICollectionViewLayoutAttributes : UICollectionViewLayoutAttributes<MAICollectionViewLayoutAttributesProtocol>
#else
@interface MAICollectionViewLayoutAttributes : NSCollectionViewLayoutAttributes<MAICollectionViewLayoutAttributesProtocol>
#endif
@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
