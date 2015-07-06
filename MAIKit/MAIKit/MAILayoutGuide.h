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

@protocol MAILayoutGuideProtocol
@property(nullable, setter=setOwningView:, getter=owningView) MAIView* owningView;
@property(setter=setIdentifier:, getter=identifier) NSString* identifier;
@property(readonly, getter=leadingAnchor) MAILayoutXAxisAnchor* leadingAnchor;
@property(readonly, getter=trailingAnchor) MAILayoutXAxisAnchor* trailingAnchor;
@property(readonly, getter=leftAnchor) MAILayoutXAxisAnchor* leftAnchor;
@property(readonly, getter=rightAnchor) MAILayoutXAxisAnchor* rightAnchor;
@property(readonly, getter=topAnchor) MAILayoutYAxisAnchor* topAnchor;
@property(readonly, getter=bottomAnchor) MAILayoutYAxisAnchor* bottomAnchor;
@property(readonly, getter=widthAnchor) MAILayoutDimension* widthAnchor;
@property(readonly, getter=heightAnchor) MAILayoutDimension* heightAnchor;
@property(readonly, getter=centerXAnchor) MAILayoutXAxisAnchor* centerXAnchor;
@property(readonly, getter=centerYAnchor) MAILayoutYAxisAnchor* centerYAnchor;

@end

#if TARGET_OS_IPHONE
@interface MAILayoutGuide : UILayoutGuide<MAILayoutGuideProtocol>
#else
@interface MAILayoutGuide : NSLayoutGuide<MAILayoutGuideProtocol>
#endif
@end

NS_ASSUME_NONNULL_END
