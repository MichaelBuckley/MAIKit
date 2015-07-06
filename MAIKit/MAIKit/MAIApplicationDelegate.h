#if TARGET_OS_IPHONE
@import UIKit;
#else
@import AppKit;
#endif

#import "MAIEnums.h"

@protocol MAILayoutManagerDelegate;
@protocol MAITextLayoutOrientationProvider;
@protocol MAITextAttachmentContainer;
@protocol MAITextStorageDelegate;
@protocol MAICollectionViewDataSource;
@protocol MAICollectionViewDelegate;
@protocol MAICollectionViewDelegateFlowLayout;
@protocol MAIGestureRecognizerDelegate;
@protocol MAITableViewDataSource;
@protocol MAITableViewDelegate;
@protocol MAITextFieldDelegate;
@protocol MAITextInput;
@protocol MAITextViewDelegate;
@protocol MAIToolbarDelegate;

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

@protocol MAIApplicationDelegate
@optional
-(void)application:(MAIApplication*)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData*)deviceToken;
-(void)application:(MAIApplication*)application didFailToRegisterForRemoteNotificationsWithError:(NSError*)error;
-(BOOL)application:(MAIApplication*)application willContinueUserActivityWithType:(NSString*)userActivityType;
-(void)application:(MAIApplication*)application didFailToContinueUserActivityWithType:(NSString*)userActivityType error:(NSError*)error;
-(void)application:(MAIApplication*)application didUpdateUserActivity:(NSUserActivity*)userActivity;



@end

NS_ASSUME_NONNULL_END
