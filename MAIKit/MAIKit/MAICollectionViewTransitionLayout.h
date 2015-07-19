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

@protocol MAICollectionViewTransitionLayoutProtocol
-(instancetype)initWithCurrentLayout:(id<MAICollectionViewLayoutProtocol>)currentLayout nextLayout:(id<MAICollectionViewLayoutProtocol>)newLayout;
-(void)updateValue:(CGFloat)value forAnimatedKey:(NSString*)key;
-(CGFloat)valueForAnimatedKey:(NSString*)key;
-(void)invalidateLayout;
-(void)invalidateLayoutWithContext:(id<MAICollectionViewLayoutInvalidationContextProtocol>)context;
-(void)registerClass:(nullable Class)viewClass forDecorationViewOfKind:(NSString*)elementKind;
-(void)registerNib:(nullable id<MAINibProtocol>)nib forDecorationViewOfKind:(NSString*)elementKind;
+(Class)layoutAttributesClass;
+(Class)invalidationContextClass;
-(void)prepareLayout;
-(nullable id<MAICollectionViewLayoutAttributesProtocol>)layoutAttributesForItemAtIndexPath:(NSIndexPath*)indexPath;
-(nullable id<MAICollectionViewLayoutAttributesProtocol>)layoutAttributesForSupplementaryViewOfKind:(NSString*)elementKind atIndexPath:(NSIndexPath*)indexPath;
-(nullable id<MAICollectionViewLayoutAttributesProtocol>)layoutAttributesForDecorationViewOfKind:(NSString*)elementKind atIndexPath:(NSIndexPath*)indexPath;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)newBounds;
-(id<MAICollectionViewLayoutInvalidationContextProtocol>)invalidationContextForBoundsChange:(CGRect)newBounds;
-(BOOL)shouldInvalidateLayoutForPreferredLayoutAttributes:(id<MAICollectionViewLayoutAttributesProtocol>)preferredAttributes withOriginalAttributes:(id<MAICollectionViewLayoutAttributesProtocol>)originalAttributes;
-(id<MAICollectionViewLayoutInvalidationContextProtocol>)invalidationContextForPreferredLayoutAttributes:(id<MAICollectionViewLayoutAttributesProtocol>)preferredAttributes withOriginalAttributes:(id<MAICollectionViewLayoutAttributesProtocol>)originalAttributes;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)proposedContentOffset withScrollingVelocity:(CGPoint)velocity;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)proposedContentOffset;
-(void)prepareForCollectionViewUpdates:(NSArray<MAICollectionViewUpdateItem*>*)updateItems;
-(void)finalizeCollectionViewUpdates;
-(void)prepareForAnimatedBoundsChange:(CGRect)oldBounds;
-(void)finalizeAnimatedBoundsChange;
-(void)prepareForTransitionToLayout:(id<MAICollectionViewLayoutProtocol>)newLayout;
-(void)prepareForTransitionFromLayout:(id<MAICollectionViewLayoutProtocol>)oldLayout;
-(void)finalizeLayoutTransition;
-(nullable id<MAICollectionViewLayoutAttributesProtocol>)initialLayoutAttributesForAppearingItemAtIndexPath:(NSIndexPath*)itemIndexPath;
-(nullable id<MAICollectionViewLayoutAttributesProtocol>)finalLayoutAttributesForDisappearingItemAtIndexPath:(NSIndexPath*)itemIndexPath;
-(nullable id<MAICollectionViewLayoutAttributesProtocol>)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(NSString*)elementKind atIndexPath:(NSIndexPath*)elementIndexPath;
-(nullable id<MAICollectionViewLayoutAttributesProtocol>)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(NSString*)elementKind atIndexPath:(NSIndexPath*)elementIndexPath;
-(nullable id<MAICollectionViewLayoutAttributesProtocol>)initialLayoutAttributesForAppearingDecorationElementOfKind:(NSString*)elementKind atIndexPath:(NSIndexPath*)decorationIndexPath;
-(nullable id<MAICollectionViewLayoutAttributesProtocol>)finalLayoutAttributesForDisappearingDecorationElementOfKind:(NSString*)elementKind atIndexPath:(NSIndexPath*)decorationIndexPath;
@property(setter=setTransitionProgress:, getter=transitionProgress) CGFloat transitionProgress;
@property(readonly, getter=currentLayout) id<MAICollectionViewLayoutProtocol> currentLayout;
@property(readonly, getter=nextLayout) id<MAICollectionViewLayoutProtocol> nextLayout;
@property(readonly, nullable, getter=collectionView) id<MAICollectionViewProtocol> collectionView;

#if TARGET_OS_IPHONE
-(nullable instancetype)initWithCoder:(NSCoder*)aDecoder NS_UNAVAILABLE;
-(instancetype)init NS_UNAVAILABLE;
#else
#endif

@end

#if TARGET_OS_IPHONE
@interface MAICollectionViewTransitionLayout : UICollectionViewTransitionLayout<MAICollectionViewTransitionLayoutProtocol>
#else
@interface MAICollectionViewTransitionLayout : NSCollectionViewTransitionLayout<MAICollectionViewTransitionLayoutProtocol>
#endif
@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
