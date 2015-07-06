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

@protocol MAIDatePickerProtocol
-(instancetype)initWithFrame:(CGRect)frame;
-(instancetype)initWithCoder:(NSCoder*)aDecoder;
-(CGPoint)convertPoint:(CGPoint)point toView:(nullable MAIView*)view;
-(CGPoint)convertPoint:(CGPoint)point fromView:(nullable MAIView*)view;
-(CGRect)convertRect:(CGRect)rect toView:(nullable MAIView*)view;
-(CGRect)convertRect:(CGRect)rect fromView:(nullable MAIView*)view;
-(void)sizeToFit;
-(void)removeFromSuperview;
-(void)addSubview:(MAIView*)view;
-(void)didAddSubview:(MAIView*)subview;
-(void)willRemoveSubview:(MAIView*)subview;
-(nullable MAIView*)viewWithTag:(NSInteger)tag;
-(void)drawRect:(CGRect)rect;
-(void)setNeedsDisplay;
-(void)setNeedsDisplayInRect:(CGRect)rect;
-(void)addGestureRecognizer:(MAIGestureRecognizer*)gestureRecognizer;
-(void)removeGestureRecognizer:(MAIGestureRecognizer*)gestureRecognizer;
-(void)encodeRestorableStateWithCoder:(NSCoder*)coder;
-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(void)updateUserActivityState:(NSUserActivity*)activity;
-(void)restoreUserActivityState:(NSUserActivity*)activity;
@property(nullable, setter=setLocale:, getter=locale) NSLocale* locale;
@property(nullable, setter=setTimeZone:, getter=timeZone) NSTimeZone* timeZone;
@property(setter=setEnabled:, getter=isEnabled) BOOL enabled;
@property(setter=setHighlighted:, getter=isHighlighted) BOOL highlighted;
@property(setter=setFrame:, getter=frame) CGRect frame;
@property(setter=setBounds:, getter=bounds) CGRect bounds;
@property(setter=setAutoresizesSubviews:, getter=autoresizesSubviews) BOOL autoresizesSubviews;
@property(readonly, nullable, getter=superview) MAIView* superview;
@property(readonly, nullable, getter=window) MAIWindow* window;
@property(setter=setHidden:, getter=isHidden) BOOL hidden;
@property(readonly, nullable, getter=undoManager) NSUndoManager* undoManager;
@property(nullable, setter=setUserActivity:, getter=userActivity) NSUserActivity* userActivity;

@end

#if TARGET_OS_IPHONE
@interface MAIDatePicker : UIDatePicker<MAIDatePickerProtocol>
#else
@interface MAIDatePicker : NSDatePicker<MAIDatePickerProtocol>
#endif
@end

NS_ASSUME_NONNULL_END
