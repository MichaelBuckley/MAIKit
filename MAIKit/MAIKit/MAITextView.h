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
@protocol MAIDataAssetProtocol;
@class MAILayoutXAxisAnchor;
@protocol MAILayoutXAxisAnchorProtocol;
@class MAILayoutYAxisAnchor;
@protocol MAILayoutYAxisAnchorProtocol;
@class MAILayoutDimension;
@protocol MAILayoutDimensionProtocol;
@class MAILayoutConstraint;
@protocol MAILayoutConstraintProtocol;
@class MAILayoutManager;
@protocol MAILayoutManagerProtocol;
@class MAITextTab;
@protocol MAITextTabProtocol;
@class MAIParagraphStyle;
@protocol MAIParagraphStyleProtocol;
@class MAIMutableParagraphStyle;
@protocol MAIMutableParagraphStyleProtocol;
@class MAIShadow;
@protocol MAIShadowProtocol;
@class MAIStringDrawingContext;
@protocol MAIStringDrawingContextProtocol;
@class MAITextAttachment;
@protocol MAITextAttachmentProtocol;
@class MAITextContainer;
@protocol MAITextContainerProtocol;
@class MAITextStorage;
@protocol MAITextStorageProtocol;
@class MAIAccessibilityElement;
@protocol MAIAccessibilityElementProtocol;
@class MAIApplication;
@protocol MAIApplicationProtocol;
@class MAIBezierPath;
@protocol MAIBezierPathProtocol;
@class MAIButton;
@protocol MAIButtonProtocol;
@class MAICollectionView;
@protocol MAICollectionViewProtocol;
@class MAICollectionViewFlowLayoutInvalidationContext;
@protocol MAICollectionViewFlowLayoutInvalidationContextProtocol;
@class MAICollectionViewFlowLayout;
@protocol MAICollectionViewFlowLayoutProtocol;
@class MAICollectionViewLayoutAttributes;
@protocol MAICollectionViewLayoutAttributesProtocol;
@class MAICollectionViewUpdateItem;
@protocol MAICollectionViewUpdateItemProtocol;
@class MAICollectionViewLayoutInvalidationContext;
@protocol MAICollectionViewLayoutInvalidationContextProtocol;
@class MAICollectionViewLayout;
@protocol MAICollectionViewLayoutProtocol;
@class MAICollectionViewTransitionLayout;
@protocol MAICollectionViewTransitionLayoutProtocol;
@class MAIColor;
@protocol MAIColorProtocol;
@class MAIControl;
@protocol MAIControlProtocol;
@class MAIDatePicker;
@protocol MAIDatePickerProtocol;
@class MAIDocument;
@protocol MAIDocumentProtocol;
@class MAIEvent;
@protocol MAIEventProtocol;
@class MAIFont;
@protocol MAIFontProtocol;
@class MAIFontDescriptor;
@protocol MAIFontDescriptorProtocol;
@class MAIGestureRecognizer;
@protocol MAIGestureRecognizerProtocol;
@class MAIImage;
@protocol MAIImageProtocol;
@class MAIImageView;
@protocol MAIImageViewProtocol;
@class MAILayoutGuide;
@protocol MAILayoutGuideProtocol;
@class MAIMenuItem;
@protocol MAIMenuItemProtocol;
@class MAINib;
@protocol MAINibProtocol;
@class MAIPanGestureRecognizer;
@protocol MAIPanGestureRecognizerProtocol;
@class MAIPasteboard;
@protocol MAIPasteboardProtocol;
@class MAIPrinter;
@protocol MAIPrinterProtocol;
@class MAIPrintInfo;
@protocol MAIPrintInfoProtocol;
@class MAIResponder;
@protocol MAIResponderProtocol;
@class MAIRotationGestureRecognizer;
@protocol MAIRotationGestureRecognizerProtocol;
@class MAIScreen;
@protocol MAIScreenProtocol;
@class MAIScrollView;
@protocol MAIScrollViewProtocol;
@class MAISegmentedControl;
@protocol MAISegmentedControlProtocol;
@class MAISlider;
@protocol MAISliderProtocol;
@class MAISplitViewController;
@protocol MAISplitViewControllerProtocol;
@class MAIStackView;
@protocol MAIStackViewProtocol;
@class MAIStepper;
@protocol MAIStepperProtocol;
@class MAIStoryboard;
@protocol MAIStoryboardProtocol;
@class MAIStoryboardSegue;
@protocol MAIStoryboardSegueProtocol;
@class MAITableViewRowAction;
@protocol MAITableViewRowActionProtocol;
@class MAITableView;
@protocol MAITableViewProtocol;
@class MAITextField;
@protocol MAITextFieldProtocol;
@class MAIToolbar;
@protocol MAIToolbarProtocol;
@class MAITouch;
@protocol MAITouchProtocol;
@class MAIView;
@protocol MAIViewProtocol;
@class MAIViewController;
@protocol MAIViewControllerProtocol;
@class MAIVisualEffectView;
@protocol MAIVisualEffectViewProtocol;
@class MAIWindow;
@protocol MAIWindowProtocol;

NS_ASSUME_NONNULL_BEGIN

@protocol MAITextViewProtocol
-(void)scrollRangeToVisible:(NSRange)range;
-(instancetype)initWithFrame:(CGRect)frame textContainer:(nullable id<MAITextContainerProtocol>)textContainer;
-(nullable instancetype)initWithCoder:(NSCoder*)aDecoder;
-(instancetype)initWithFrame:(CGRect)frame;
-(CGPoint)convertPoint:(CGPoint)point toView:(nullable id<MAIViewProtocol>)view;
-(CGPoint)convertPoint:(CGPoint)point fromView:(nullable id<MAIViewProtocol>)view;
-(CGRect)convertRect:(CGRect)rect toView:(nullable id<MAIViewProtocol>)view;
-(CGRect)convertRect:(CGRect)rect fromView:(nullable id<MAIViewProtocol>)view;
-(void)sizeToFit;
-(void)removeFromSuperview;
-(void)addSubview:(id<MAIViewProtocol>)view;
-(void)didAddSubview:(id<MAIViewProtocol>)subview;
-(void)willRemoveSubview:(id<MAIViewProtocol>)subview;
-(nullable id<MAIViewProtocol>)viewWithTag:(NSInteger)tag;
-(void)drawRect:(CGRect)rect;
-(void)setNeedsDisplayInRect:(CGRect)rect;
-(void)addGestureRecognizer:(id<MAIGestureRecognizerProtocol>)gestureRecognizer;
-(void)removeGestureRecognizer:(id<MAIGestureRecognizerProtocol>)gestureRecognizer;
-(void)encodeRestorableStateWithCoder:(NSCoder*)coder;
-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(void)updateUserActivityState:(NSUserActivity*)activity;
-(void)restoreUserActivityState:(NSUserActivity*)activity;
@property(nullable, setter=setFont:, getter=font) id<MAIFontProtocol> font;
@property(nullable, setter=setTextColor:, getter=textColor) id<MAIColorProtocol> textColor;
@property(setter=setSelectedRange:, getter=selectedRange) NSRange selectedRange;
@property(setter=setEditable:, getter=isEditable) BOOL editable;
@property(setter=setSelectable:, getter=isSelectable) BOOL selectable;
@property(setter=setTypingAttributes:, getter=typingAttributes) NSDictionary<NSString*, id>* typingAttributes;
@property(setter=setFrame:, getter=frame) CGRect frame;
@property(setter=setBounds:, getter=bounds) CGRect bounds;
@property(setter=setAutoresizesSubviews:, getter=autoresizesSubviews) BOOL autoresizesSubviews;
@property(readonly, nullable, getter=superview) id<MAIViewProtocol> superview;
@property(readonly, nullable, getter=window) id<MAIWindowProtocol> window;
@property(nullable, setter=setBackgroundColor:, getter=backgroundColor) id<MAIColorProtocol> backgroundColor;
@property(setter=setHidden:, getter=isHidden) BOOL hidden;
@property(readonly, nullable, getter=undoManager) NSUndoManager* undoManager;
@property(nullable, setter=setUserActivity:, getter=userActivity) NSUserActivity* userActivity;

@end

#if TARGET_OS_IPHONE
@interface MAITextView : UITextView<MAITextViewProtocol>
#else
@interface MAITextView : NSTextView<MAITextViewProtocol>
#endif
@end

NS_ASSUME_NONNULL_END
