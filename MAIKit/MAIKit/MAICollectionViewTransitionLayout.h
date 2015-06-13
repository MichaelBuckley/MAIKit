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
@class MAICollectionViewLayoutAttributes;
@class MAICollectionViewUpdateItem;
@class MAICollectionViewLayoutInvalidationContext;
@class MAICollectionViewLayout;
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

@interface MAICollectionViewTransitionLayout : NSObject
-(instancetype)initWithCurrentLayout:(MAICollectionViewLayout*)currentLayout nextLayout:(MAICollectionViewLayout*)newLayout NS_DESIGNATED_INITIALIZER;
-(void)updateValue:(CGFloat)value forAnimatedKey:(NSString*)key ;
-(CGFloat)valueForAnimatedKey:(NSString*)key ;
-(void)invalidateLayout ;
-(void)invalidateLayoutWithContext:(MAICollectionViewLayoutInvalidationContext*)context ;
-(void)registerClass:(nullable Class)viewClass forDecorationViewOfKind:(NSString*)elementKind ;
-(void)registerNib:(nullable MAINib*)nib forDecorationViewOfKind:(NSString*)elementKind ;
@property(nonatomic, readwrite, assign) CGFloat transitionProgress;
@property(nonatomic, readonly) MAICollectionViewLayout* currentLayout;
@property(nonatomic, readonly) MAICollectionViewLayout* nextLayout;
@property(nonatomic, readonly, nullable) MAICollectionView* collectionView;
#if TARGET_OS_IPHONE
-(UICollectionViewTransitionLayout*) ios;
#else
-(NSCollectionViewTransitionLayout*) mac;
#endif

@end

#if TARGET_OS_IPHONE
@interface UICollectionViewTransitionLayout (MAIConversion)
#else
@interface NSCollectionViewTransitionLayout (MAIConversion)
#endif
-(MAICollectionViewTransitionLayout*) mai;
@end

NS_ASSUME_NONNULL_END
