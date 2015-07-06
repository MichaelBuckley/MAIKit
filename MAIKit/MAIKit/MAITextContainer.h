#import <TargetConditionals.h>

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

@protocol MAITextContainerProtocol
-(instancetype)initWithCoder:(NSCoder*)coder;
-(void)replaceLayoutManager:(MAILayoutManager*)newLayoutManager;
-(CGRect)lineFragmentRectForProposedRect:(CGRect)proposedRect atIndex:(NSUInteger)characterIndex writingDirection:(MAIWritingDirection)baseWritingDirection remainingRect:(nullable CGRect*)remainingRect;
@property(nullable, setter=setLayoutManager:, getter=layoutManager) MAILayoutManager* layoutManager;
@property(setter=setExclusionPaths:, getter=exclusionPaths) NSArray<MAIBezierPath*>* exclusionPaths;
@property(setter=setLineBreakMode:, getter=lineBreakMode) NSLineBreakMode lineBreakMode;
@property(setter=setLineFragmentPadding:, getter=lineFragmentPadding) CGFloat lineFragmentPadding;
@property(setter=setMaximumNumberOfLines:, getter=maximumNumberOfLines) NSUInteger maximumNumberOfLines;
@property(readonly, getter=isSimpleRectangularTextContainer) BOOL simpleRectangularTextContainer;
@property(setter=setWidthTracksTextView:, getter=widthTracksTextView) BOOL widthTracksTextView;
@property(setter=setHeightTracksTextView:, getter=heightTracksTextView) BOOL heightTracksTextView;

@end

#if TARGET_OS_IPHONE
@interface MAITextContainer : NSTextContainer<MAITextContainerProtocol>
#else
@interface MAITextContainer : NSTextContainer<MAITextContainerProtocol>
#endif
@end

NS_ASSUME_NONNULL_END
