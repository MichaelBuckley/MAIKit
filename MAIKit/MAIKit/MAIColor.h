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

@class MAILayoutConstraint;
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

@interface MAIColor : NSObject<NSSecureCoding,NSCopying>
+(MAIColor*)colorWithWhite:(CGFloat)white alpha:(CGFloat)alpha;
+(MAIColor*)colorWithHue:(CGFloat)hue saturation:(CGFloat)saturation brightness:(CGFloat)brightness alpha:(CGFloat)alpha;
+(MAIColor*)colorWithRed:(CGFloat)red green:(CGFloat)green blue:(CGFloat)blue alpha:(CGFloat)alpha;
+(MAIColor*)colorWithCGColor:(CGColorRef)cgColor;
+(MAIColor*)blackColor;
+(MAIColor*)darkGrayColor;
+(MAIColor*)lightGrayColor;
+(MAIColor*)whiteColor;
+(MAIColor*)grayColor;
+(MAIColor*)redColor;
+(MAIColor*)greenColor;
+(MAIColor*)blueColor;
+(MAIColor*)cyanColor;
+(MAIColor*)yellowColor;
+(MAIColor*)magentaColor;
+(MAIColor*)orangeColor;
+(MAIColor*)purpleColor;
+(MAIColor*)brownColor;
+(MAIColor*)clearColor;
-(void)set;
-(void)setFill;
-(void)setStroke;
-(MAIColor*)colorWithAlphaComponent:(CGFloat)alpha;
@property(nonatomic, readonly, assign) CGColorRef CGColor;
#if TARGET_OS_IPHONE
-(UIColor*) ios;
#else
-(NSColor*) mac;
#endif

@end

#if TARGET_OS_IPHONE
@interface UIColor (MAIConversion)
#else
@interface NSColor (MAIConversion)
#endif
-(MAIColor*) mai;
@end
