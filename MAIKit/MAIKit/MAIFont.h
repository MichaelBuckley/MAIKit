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
@class MAIColor;
@class MAIControl;
@class MAIDatePicker;
@class MAIDocument;
@class MAIEvent;
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

@interface MAIFont : NSObject<NSCopying>
+(MAIFont*)fontWithName:(NSString *)fontName size:(CGFloat)fontSize;
+(MAIFont*)systemFontOfSize:(CGFloat)fontSize;
+(MAIFont*)boldSystemFontOfSize:(CGFloat)fontSize;
+(MAIFont*)fontWithDescriptor:(MAIFontDescriptor *)descriptor size:(CGFloat)pointSize;
@property(nonatomic, readonly, assign) CGFloat pointSize;
@property(nonatomic, readonly, assign) CGFloat ascender;
@property(nonatomic, readonly, assign) CGFloat descender;
@property(nonatomic, readonly, assign) CGFloat capHeight;
@property(nonatomic, readonly, assign) CGFloat xHeight;
@property(nonatomic, readonly, assign) CGFloat leading;
#if TARGET_OS_IPHONE
-(UIFont*) ios;
#else
-(NSFont*) mac;
#endif

@end

#if TARGET_OS_IPHONE
@interface UIFont (MAIConversion)
#else
@interface NSFont (MAIConversion)
#endif
-(MAIFont*) mai;
@end
