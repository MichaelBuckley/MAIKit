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

@protocol MAILayoutConstraintProtocol
+(instancetype)constraintWithItem:(id)view1 attribute:(MAILayoutAttribute)attr1 relatedBy:(MAILayoutRelation)relation toItem:(nullable id)view2 attribute:(MAILayoutAttribute)attr2 multiplier:(CGFloat)multiplier constant:(CGFloat)c;
+(void)activateConstraints:(NSArray<MAILayoutConstraint*>*)constraints;
+(void)deactivateConstraints:(NSArray<MAILayoutConstraint*>*)constraints;
@property(setter=setShouldBeArchived:, getter=shouldBeArchived) BOOL shouldBeArchived;
@property(readonly, getter=firstItem) id firstItem;
@property(readonly, getter=firstAttribute) MAILayoutAttribute firstAttribute;
@property(readonly, getter=relation) MAILayoutRelation relation;
@property(readonly, nullable, getter=secondItem) id secondItem;
@property(readonly, getter=secondAttribute) MAILayoutAttribute secondAttribute;
@property(readonly, getter=multiplier) CGFloat multiplier;
@property(setter=setConstant:, getter=constant) CGFloat constant;
@property(setter=setActive:, getter=isActive) BOOL active;
@property(nullable, setter=setIdentifier:, getter=identifier) NSString* identifier;

@end

#if TARGET_OS_IPHONE
@interface MAILayoutConstraint : NSLayoutConstraint<MAILayoutConstraintProtocol>
#else
@interface MAILayoutConstraint : NSLayoutConstraint<MAILayoutConstraintProtocol>
#endif
@end

NS_ASSUME_NONNULL_END
