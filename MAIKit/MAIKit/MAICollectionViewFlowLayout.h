#if TARGET_OS_IPHONE
@import UIKit;
#else
@import AppKit;
#endif

#import "MAIEnums.h"

#import "MAILayoutManagerDelegate.h"
#import "MAITextLayoutOrientationProvider.h"
#import "MAITextAttachmentContainer.h"
#import "MAITextStorageDelegate.h"
#import "MAIApplicationDelegate.h"
#import "MAICollectionViewDataSource.h"
#import "MAICollectionViewDelegate.h"
#import "MAICollectionViewDelegateFlowLayout.h"
#import "MAIGestureRecognizerDelegate.h"
#import "MAITableViewDataSource.h"
#import "MAITableViewDelegate.h"
#import "MAITextFieldDelegate.h"
#import "MAITextInput.h"
#import "MAITextViewDelegate.h"
#import "MAIToolbarDelegate.h"

@class MAIDataAsset;
@class MAILayoutXAxisAnchor;
@class MAILayoutYAxisAnchor;
@class MAILayoutDimension;
@class MAILayoutConstraint;
@class MAILayoutManager;
@class MAITextTab;
@class MAIParagraphStyle;
@class MAIMutableParagraphStyle;
@class MAIShadow;
@class MAIStringDrawingContext;
@class MAITextAttachment;
@class MAITextContainer;
@class MAITextStorage;
@class MAIAccessibilityElement;
@class MAIApplication;
@class MAIBezierPath;
@class MAIButton;
@class MAICollectionView;
@class MAICollectionViewFlowLayoutInvalidationContext;
@class MAICollectionViewLayoutAttributes;
@class MAICollectionViewUpdateItem;
@class MAICollectionViewLayoutInvalidationContext;
@class MAICollectionViewLayout;
@class MAICollectionViewTransitionLayout;
@class MAIColor;
@class MAIControl;
@class MAIDatePicker;
@class MAIDocument;
@class MAIEvent;
@class MAIFont;
@class MAIFontDescriptor;
@class MAIGestureRecognizer;
@class MAIImage;
@class MAIImageView;
@class MAILayoutGuide;
@class MAIMenuItem;
@class MAINib;
@class MAIPanGestureRecognizer;
@class MAIPasteboard;
@class MAIPrinter;
@class MAIPrintInfo;
@class MAIResponder;
@class MAIRotationGestureRecognizer;
@class MAIScreen;
@class MAIScrollView;
@class MAISegmentedControl;
@class MAISlider;
@class MAISplitViewController;
@class MAIStackView;
@class MAIStepper;
@class MAIStoryboard;
@class MAIStoryboardSegue;
@class MAITableViewRowAction;
@class MAITableView;
@class MAITextField;
@class MAITextView;
@class MAIToolbar;
@class MAITouch;
@class MAIView;
@class MAIViewController;
@class MAIVisualEffectView;
@class MAIWindow;

NS_ASSUME_NONNULL_BEGIN

@protocol MAICollectionViewFlowLayoutProtocol
-(void)invalidateLayout;
-(void)invalidateLayoutWithContext:(MAICollectionViewLayoutInvalidationContext*)context;
-(void)registerClass:(nullable Class)viewClass forDecorationViewOfKind:(NSString*)elementKind;
-(void)registerNib:(nullable MAINib*)nib forDecorationViewOfKind:(NSString*)elementKind;
+(Class)layoutAttributesClass;
+(Class)invalidationContextClass;
-(void)prepareLayout;
-(nullable MAICollectionViewLayoutAttributes*)layoutAttributesForItemAtIndexPath:(NSIndexPath*)indexPath;
-(nullable MAICollectionViewLayoutAttributes*)layoutAttributesForSupplementaryViewOfKind:(NSString*)elementKind atIndexPath:(NSIndexPath*)indexPath;
-(nullable MAICollectionViewLayoutAttributes*)layoutAttributesForDecorationViewOfKind:(NSString*)elementKind atIndexPath:(NSIndexPath*)indexPath;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)newBounds;
-(MAICollectionViewLayoutInvalidationContext*)invalidationContextForBoundsChange:(CGRect)newBounds;
-(BOOL)shouldInvalidateLayoutForPreferredLayoutAttributes:(MAICollectionViewLayoutAttributes*)preferredAttributes withOriginalAttributes:(MAICollectionViewLayoutAttributes*)originalAttributes;
-(MAICollectionViewLayoutInvalidationContext*)invalidationContextForPreferredLayoutAttributes:(MAICollectionViewLayoutAttributes*)preferredAttributes withOriginalAttributes:(MAICollectionViewLayoutAttributes*)originalAttributes;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)proposedContentOffset withScrollingVelocity:(CGPoint)velocity;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)proposedContentOffset;
-(void)prepareForCollectionViewUpdates:(NSArray<MAICollectionViewUpdateItem*>*)updateItems;
-(void)finalizeCollectionViewUpdates;
-(void)prepareForAnimatedBoundsChange:(CGRect)oldBounds;
-(void)finalizeAnimatedBoundsChange;
-(void)prepareForTransitionToLayout:(MAICollectionViewLayout*)newLayout;
-(void)prepareForTransitionFromLayout:(MAICollectionViewLayout*)oldLayout;
-(void)finalizeLayoutTransition;
-(nullable MAICollectionViewLayoutAttributes*)initialLayoutAttributesForAppearingItemAtIndexPath:(NSIndexPath*)itemIndexPath;
-(nullable MAICollectionViewLayoutAttributes*)finalLayoutAttributesForDisappearingItemAtIndexPath:(NSIndexPath*)itemIndexPath;
-(nullable MAICollectionViewLayoutAttributes*)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(NSString*)elementKind atIndexPath:(NSIndexPath*)elementIndexPath;
-(nullable MAICollectionViewLayoutAttributes*)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(NSString*)elementKind atIndexPath:(NSIndexPath*)elementIndexPath;
-(nullable MAICollectionViewLayoutAttributes*)initialLayoutAttributesForAppearingDecorationElementOfKind:(NSString*)elementKind atIndexPath:(NSIndexPath*)decorationIndexPath;
-(nullable MAICollectionViewLayoutAttributes*)finalLayoutAttributesForDisappearingDecorationElementOfKind:(NSString*)elementKind atIndexPath:(NSIndexPath*)decorationIndexPath;
@property(setter=setMinimumLineSpacing:, getter=minimumLineSpacing) CGFloat minimumLineSpacing;
@property(setter=setMinimumInteritemSpacing:, getter=minimumInteritemSpacing) CGFloat minimumInteritemSpacing;
@property(setter=setScrollDirection:, getter=scrollDirection) MAICollectionViewScrollDirection scrollDirection;
@property(readonly, nullable, getter=collectionView) MAICollectionView* collectionView;

@end

#if TARGET_OS_IPHONE
@interface MAICollectionViewFlowLayout : UICollectionViewFlowLayout<MAICollectionViewFlowLayoutProtocol>
#else
@interface MAICollectionViewFlowLayout : NSCollectionViewFlowLayout<MAICollectionViewFlowLayoutProtocol>
#endif
@end

NS_ASSUME_NONNULL_END
