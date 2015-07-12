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
@class MAIApplication;
@protocol MAIApplicationProtocol;
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

@protocol MAIBezierPathProtocol
-(void)moveToPoint:(CGPoint)point;
-(void)closePath;
-(void)removeAllPoints;
-(BOOL)containsPoint:(CGPoint)point;
-(void)setLineDash:(nullable const CGFloat*)pattern count:(NSInteger)count phase:(CGFloat)phase;
-(void)getLineDash:(nullable CGFloat*)pattern count:(nullable NSInteger*)count phase:(nullable CGFloat*)phase;
-(void)fill;
-(void)stroke;
-(void)addClip;
@property(readonly, getter=isEmpty) BOOL empty;
@property(readonly, getter=bounds) CGRect bounds;
@property(readonly, getter=currentPoint) CGPoint currentPoint;
@property(setter=setLineWidth:, getter=lineWidth) CGFloat lineWidth;
@property(setter=setMiterLimit:, getter=miterLimit) CGFloat miterLimit;
@property(setter=setFlatness:, getter=flatness) CGFloat flatness;

#if TARGET_OS_IPHONE
+(instancetype)bezierPathWithRoundedRect:(CGRect)rect cornerRadius:(CGFloat)cornerRadius NS_UNAVAILABLE;
+(instancetype)bezierPathWithRoundedRect:(CGRect)rect byRoundingCorners:(UIRectCorner)corners cornerRadii:(CGSize)cornerRadii NS_UNAVAILABLE;
+(instancetype)bezierPathWithArcCenter:(CGPoint)center radius:(CGFloat)radius startAngle:(CGFloat)startAngle endAngle:(CGFloat)endAngle clockwise:(BOOL)clockwise NS_UNAVAILABLE;
+(instancetype)bezierPathWithCGPath:(CGPathRef)CGPath NS_UNAVAILABLE;
-(instancetype)init NS_UNAVAILABLE;
-(nullable instancetype)initWithCoder:(NSCoder*)aDecoder NS_UNAVAILABLE;
#else
+(id<MAIBezierPathProtocol>)bezierPathWithRoundedRect:(CGRect)rect xRadius:(CGFloat)xRadius yRadius:(CGFloat)yRadius NS_UNAVAILABLE;
+(void)fillRect:(CGRect)rect NS_UNAVAILABLE;
+(void)strokeRect:(CGRect)rect NS_UNAVAILABLE;
+(void)clipRect:(CGRect)rect NS_UNAVAILABLE;
+(void)strokeLineFromPoint:(CGPoint)point1 toPoint:(CGPoint)point2 NS_UNAVAILABLE;
+(void)drawPackedGlyphs:(const char*)packedGlyphs atPoint:(CGPoint)point NS_UNAVAILABLE;
+(void)setDefaultMiterLimit:(CGFloat)limit NS_UNAVAILABLE;
+(CGFloat)defaultMiterLimit NS_UNAVAILABLE;
+(void)setDefaultFlatness:(CGFloat)flatness NS_UNAVAILABLE;
+(CGFloat)defaultFlatness NS_UNAVAILABLE;
+(void)setDefaultWindingRule:(NSWindingRule)windingRule NS_UNAVAILABLE;
+(NSWindingRule)defaultWindingRule NS_UNAVAILABLE;
+(void)setDefaultLineCapStyle:(NSLineCapStyle)lineCapStyle NS_UNAVAILABLE;
+(NSLineCapStyle)defaultLineCapStyle NS_UNAVAILABLE;
+(void)setDefaultLineJoinStyle:(NSLineJoinStyle)lineJoinStyle NS_UNAVAILABLE;
+(NSLineJoinStyle)defaultLineJoinStyle NS_UNAVAILABLE;
+(void)setDefaultLineWidth:(CGFloat)lineWidth NS_UNAVAILABLE;
+(CGFloat)defaultLineWidth NS_UNAVAILABLE;
#endif

@end

#if TARGET_OS_IPHONE
@interface MAIBezierPath : UIBezierPath<MAIBezierPathProtocol>
#else
@interface MAIBezierPath : NSBezierPath<MAIBezierPathProtocol>
#endif
@end

NS_ASSUME_NONNULL_END
