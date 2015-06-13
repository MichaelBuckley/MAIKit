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

@interface MAITextStorage : NSMutableAttributedString
-(void)addLayoutManager:(MAILayoutManager*)aLayoutManager ;
-(void)removeLayoutManager:(MAILayoutManager*)aLayoutManager ;
-(void)edited:(MAITextStorageEditActions)editedMask range:(NSRange)editedRange changeInLength:(NSInteger)delta ;
-(void)processEditing ;
-(void)invalidateAttributesInRange:(NSRange)range ;
-(void)ensureAttributesAreFixedInRange:(NSRange)range ;
@property(nonatomic, readonly, copy) NSArray<MAILayoutManager*>* layoutManagers;
@property(nonatomic, readonly) MAITextStorageEditActions editedMask;
@property(nonatomic, readonly) NSRange editedRange;
@property(nonatomic, readonly) NSInteger changeInLength;
@property(nonatomic, readwrite, nullable, assign) id <MAITextStorageDelegate> delegate;
@property(nonatomic, readonly) BOOL fixesAttributesLazily;
#if TARGET_OS_IPHONE
-(NSTextStorage*) ios;
#else
-(NSTextStorage*) mac;
#endif

@end

#if TARGET_OS_IPHONE
@interface NSTextStorage (MAIConversion)
#else
@interface NSTextStorage (MAIConversion)
#endif
-(MAITextStorage*) mai;
@end

NS_ASSUME_NONNULL_END
