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

@interface MAIMutableParagraphStyle : NSObject
+(MAIParagraphStyle*)defaultParagraphStyle;
+(MAIWritingDirection)defaultWritingDirectionForLanguage:(NSString *)languageName;
@property(nonatomic, readonly) CGFloat lineSpacing;
@property(nonatomic, readonly) CGFloat paragraphSpacing;
@property(nonatomic, readonly) NSTextAlignment alignment;
@property(nonatomic, readonly) CGFloat firstLineHeadIndent;
@property(nonatomic, readonly) CGFloat headIndent;
@property(nonatomic, readonly) CGFloat tailIndent;
@property(nonatomic, readonly) NSLineBreakMode lineBreakMode;
@property(nonatomic, readonly) CGFloat minimumLineHeight;
@property(nonatomic, readonly) CGFloat maximumLineHeight;
@property(nonatomic, readonly) MAIWritingDirection baseWritingDirection;
@property(nonatomic, readonly) CGFloat lineHeightMultiple;
@property(nonatomic, readonly) CGFloat paragraphSpacingBefore;
@property(nonatomic, readonly) float hyphenationFactor;
@property(nonatomic, readonly, copy) NSArray* tabStops;
@property(nonatomic, readonly) CGFloat defaultTabInterval;
#if TARGET_OS_IPHONE
-(NSMutableParagraphStyle*) ios;
#else
-(NSMutableParagraphStyle*) mac;
#endif

@end

#if TARGET_OS_IPHONE
@interface NSMutableParagraphStyle (MAIConversion)
#else
@interface NSMutableParagraphStyle (MAIConversion)
#endif
-(MAIMutableParagraphStyle*) mai;
@end
