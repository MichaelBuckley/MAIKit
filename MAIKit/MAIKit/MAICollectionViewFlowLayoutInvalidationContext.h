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

@protocol MAICollectionViewFlowLayoutInvalidationContextProtocol
@property(setter=setInvalidateFlowLayoutDelegateMetrics:, getter=invalidateFlowLayoutDelegateMetrics) BOOL invalidateFlowLayoutDelegateMetrics;
@property(setter=setInvalidateFlowLayoutAttributes:, getter=invalidateFlowLayoutAttributes) BOOL invalidateFlowLayoutAttributes;
@property(readonly, getter=invalidateEverything) BOOL invalidateEverything;
@property(readonly, getter=invalidateDataSourceCounts) BOOL invalidateDataSourceCounts;
@property(setter=setContentOffsetAdjustment:, getter=contentOffsetAdjustment) CGPoint contentOffsetAdjustment;

#if TARGET_OS_IPHONE
#else
#endif

@end

#if TARGET_OS_IPHONE
@interface MAICollectionViewFlowLayoutInvalidationContext : UICollectionViewFlowLayoutInvalidationContext<MAICollectionViewFlowLayoutInvalidationContextProtocol>
#else
@interface MAICollectionViewFlowLayoutInvalidationContext : NSCollectionViewFlowLayoutInvalidationContext<MAICollectionViewFlowLayoutInvalidationContextProtocol>
#endif
@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
