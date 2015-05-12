#if TARGET_OS_IPHONE
@import UIKit;
#else
@import AppKit;
#endif

#import "MAIEnums.h"

#import "MAILayoutManagerDelegate.h"
#import "MAITextLayoutOrientationProvider.h"
#import "MAITextStorageDelegate.h"
#import "MAIApplicationDelegate.h"
#import "MAICollectionViewDelegate.h"
#import "MAIGestureRecognizerDelegate.h"
#import "MAITableViewDataSource.h"
#import "MAITableViewDelegate.h"
#import "MAITextFieldDelegate.h"
#import "MAITextInput.h"
#import "MAITextViewDelegate.h"
#import "MAIToolbarDelegate.h"

@class MAILayoutManager;
@class MAITextTab;
@class MAIParagraphStyle;
@class MAIMutableParagraphStyle;
@class MAIShadow;
@class MAITextAttachment;
@class MAITextContainer;
@class MAITextStorage;
@class MAIAccessibilityElement;
@class MAIApplication;
@class MAIBezierPath;
@class MAIButton;
@class MAICollectionView;
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
@class MAIStepper;
@class MAIStoryboard;
@class MAIStoryboardSegue;
@class MAITableView;
@class MAITextField;
@class MAITextView;
@class MAIToolbar;
@class MAITouch;
@class MAIView;
@class MAIViewController;
@class MAIVisualEffectView;
@class MAIWindow;

@interface MAILayoutConstraint : NSObject
+(NSArray*)constraintsWithVisualFormat:(NSString *)format options:(MAILayoutFormatOptions)opts metrics:(NSDictionary *)metrics views:(NSDictionary *)views;
+(instancetype)constraintWithItem:(id)view1 attribute:(MAILayoutAttribute)attr1 relatedBy:(MAILayoutRelation)relation toItem:(id)view2 attribute:(MAILayoutAttribute)attr2 multiplier:(CGFloat)multiplier constant:(CGFloat)c;
+(void)activateConstraints:(NSArray *)constraints;
+(void)deactivateConstraints:(NSArray *)constraints;
@property(nonatomic, readonly, assign) id firstItem;
@property(nonatomic, readonly, assign) MAILayoutAttribute firstAttribute;
@property(nonatomic, readonly, assign) MAILayoutRelation relation;
@property(nonatomic, readonly, assign) id secondItem;
@property(nonatomic, readonly, assign) MAILayoutAttribute secondAttribute;
@property(nonatomic, readonly, assign) CGFloat multiplier;
@property(nonatomic, readwrite, assign, getter=isActive) BOOL active;
#if TARGET_OS_IPHONE
-(NSLayoutConstraint*) ios;
#else
-(NSLayoutConstraint*) mac;
#endif

@end

#if TARGET_OS_IPHONE
@interface NSLayoutConstraint (MAIConversion)
#else
@interface NSLayoutConstraint (MAIConversion)
#endif
-(MAILayoutConstraint*) mai;
@end
