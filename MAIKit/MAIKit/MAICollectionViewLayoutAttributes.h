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
@class MAICollectionViewFlowLayout;
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

@interface MAICollectionViewLayoutAttributes : NSObject<NSCopying>
+(instancetype)layoutAttributesForSupplementaryViewOfKind:(NSString*)elementKind withIndexPath:(NSIndexPath*)indexPath ;
+(instancetype)layoutAttributesForDecorationViewOfKind:(NSString*)decorationViewKind withIndexPath:(NSIndexPath*)indexPath ;
@property(nonatomic, readwrite, getter=isHidden) BOOL hidden;
@property(nonatomic, readonly, nullable) NSString* representedElementKind;
#if TARGET_OS_IPHONE
-(UICollectionViewLayoutAttributes*) ios;
#else
-(NSCollectionViewLayoutAttributes*) mac;
#endif

@end

#if TARGET_OS_IPHONE
@interface UICollectionViewLayoutAttributes (MAIConversion)
#else
@interface NSCollectionViewLayoutAttributes (MAIConversion)
#endif
-(MAICollectionViewLayoutAttributes*) mai;
@end

NS_ASSUME_NONNULL_END