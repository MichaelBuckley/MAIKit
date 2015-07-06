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

@protocol MAIColorProtocol
+(MAIColor*)colorWithWhite:(CGFloat)white alpha:(CGFloat)alpha;
+(MAIColor*)colorWithHue:(CGFloat)hue saturation:(CGFloat)saturation brightness:(CGFloat)brightness alpha:(CGFloat)alpha;
+(MAIColor*)colorWithRed:(CGFloat)red green:(CGFloat)green blue:(CGFloat)blue alpha:(CGFloat)alpha;
+(MAIColor*)colorWithCGColor:(CGColorRef)cgColor;
+(MAIColor*)colorWithPatternImage:(MAIImage*)image;
+(MAIColor*)colorWithCIColor:(CIColor*)ciColor;
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
@property(readonly, getter=CGColor) CGColorRef CGColor;

@end

#if TARGET_OS_IPHONE
@interface MAIColor : UIColor<MAIColorProtocol>
#else
@interface MAIColor : NSColor<MAIColorProtocol>
#endif
@end

NS_ASSUME_NONNULL_END
