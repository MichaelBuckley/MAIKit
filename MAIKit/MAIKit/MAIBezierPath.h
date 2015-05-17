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

@interface MAIBezierPath : NSObject<NSCopying,NSCoding>
+(MAIBezierPath*)bezierPath;
+(MAIBezierPath*)bezierPathWithRect:(CGRect)rect;
+(MAIBezierPath*)bezierPathWithOvalInRect:(CGRect)rect;
-(void)moveToPoint:(CGPoint)point;
-(void)closePath;
-(void)removeAllPoints;
-(BOOL)containsPoint:(CGPoint)point;
-(void)setLineDash:(const CGFloat *)pattern count:(NSInteger)count phase:(CGFloat)phase;
-(void)getLineDash:(CGFloat *)pattern count:(NSInteger *)count phase:(CGFloat *)phase;
-(void)fill;
-(void)stroke;
-(void)addClip;
@property(nonatomic, readonly, getter=isEmpty) BOOL empty;
@property(nonatomic, readonly) CGRect bounds;
@property(nonatomic, readonly) CGPoint currentPoint;
#if TARGET_OS_IPHONE
-(UIBezierPath*) ios;
#else
-(NSBezierPath*) mac;
#endif

@end

#if TARGET_OS_IPHONE
@interface UIBezierPath (MAIConversion)
#else
@interface NSBezierPath (MAIConversion)
#endif
-(MAIBezierPath*) mai;
@end
