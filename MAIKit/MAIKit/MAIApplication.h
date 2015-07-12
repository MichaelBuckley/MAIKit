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
@class MAITextView;
@protocol MAITextViewProtocol;
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

@protocol MAIApplicationProtocol
+(id<MAIApplicationProtocol>)sharedApplication;
-(void)sendEvent:(id<MAIEventProtocol>)event;
-(void)unregisterForRemoteNotifications;
-(void)extendStateRestoration;
-(void)completeStateRestoration;
-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(void)updateUserActivityState:(NSUserActivity*)activity;
-(void)restoreUserActivityState:(NSUserActivity*)activity;
@property(nullable, setter=setDelegate:, getter=delegate) id<MAIApplicationDelegate> delegate;
@property(readonly, nullable, getter=keyWindow) id<MAIWindowProtocol> keyWindow;
@property(readonly, getter=userInterfaceLayoutDirection) MAIUserInterfaceLayoutDirection userInterfaceLayoutDirection;
@property(readonly, nullable, getter=undoManager) NSUndoManager* undoManager;
@property(nullable, setter=setUserActivity:, getter=userActivity) NSUserActivity* userActivity;

#if TARGET_OS_IPHONE
+(void)registerObjectForStateRestoration:(id<UIStateRestoring>)object restorationIdentifier:(NSString*)restorationIdentifier NS_UNAVAILABLE;
+(void)clearTextInputContextIdentifier:(NSString*)identifier NS_UNAVAILABLE;
#else
+(void)detachDrawingThread:(SEL)selector toTarget:(id)target withObject:(nullable id)argument NS_UNAVAILABLE;
-(instancetype)init NS_UNAVAILABLE;
-(nullable instancetype)initWithCoder:(NSCoder*)coder NS_UNAVAILABLE;
#endif

@end

#if TARGET_OS_IPHONE
@interface MAIApplication : UIApplication<MAIApplicationProtocol>
#else
@interface MAIApplication : NSApplication<MAIApplicationProtocol>
#endif
@end

NS_ASSUME_NONNULL_END
