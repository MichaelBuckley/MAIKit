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

@interface MAIParagraphStyle : NSObject<NSCopying,NSMutableCopying,NSSecureCoding>
+(MAIParagraphStyle*)defaultParagraphStyle ;
+(MAIWritingDirection)defaultWritingDirectionForLanguage:(nullable NSString*)languageName ;
@property(nonatomic, readonly) CGFloat lineSpacing;
@property(nonatomic, readonly) CGFloat paragraphSpacing;
@property(nonatomic, readonly) NSTextAlignment alignment;
@property(nonatomic, readonly) CGFloat headIndent;
@property(nonatomic, readonly) CGFloat tailIndent;
@property(nonatomic, readonly) CGFloat firstLineHeadIndent;
@property(nonatomic, readonly) CGFloat minimumLineHeight;
@property(nonatomic, readonly) CGFloat maximumLineHeight;
@property(nonatomic, readonly) NSLineBreakMode lineBreakMode;
@property(nonatomic, readonly) MAIWritingDirection baseWritingDirection;
@property(nonatomic, readonly) CGFloat lineHeightMultiple;
@property(nonatomic, readonly) CGFloat paragraphSpacingBefore;
@property(nonatomic, readonly) float hyphenationFactor;
@property(nonatomic, readonly, copy) NSArray<MAITextTab*>* tabStops;
@property(nonatomic, readonly) CGFloat defaultTabInterval;
@property(nonatomic, readonly) BOOL allowsDefaultTighteningForTruncation;
#if TARGET_OS_IPHONE
-(NSParagraphStyle*) ios;
#else
-(NSParagraphStyle*) mac;
#endif

@end

#if TARGET_OS_IPHONE
@interface NSParagraphStyle (MAIConversion)
#else
@interface NSParagraphStyle (MAIConversion)
#endif
-(MAIParagraphStyle*) mai;
@end

NS_ASSUME_NONNULL_END
