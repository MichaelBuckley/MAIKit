#import <TargetConditionals.h>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

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

@protocol MAIImageProtocol
+(nullable id<MAIImageProtocol>)imageNamed:(NSString*)name;
-(nullable instancetype)initWithContentsOfFile:(NSString*)path;
-(nullable instancetype)initWithData:(NSData*)data;
-(void)drawInRect:(CGRect)rect;

#if TARGET_OS_IPHONE
+(nullable id<MAIImageProtocol>)imageNamed:(NSString*)name inBundle:(nullable NSBundle*)bundle compatibleWithTraitCollection:(nullable UITraitCollection*)traitCollection NS_UNAVAILABLE;
+(nullable id<MAIImageProtocol>)imageWithContentsOfFile:(NSString*)path NS_UNAVAILABLE;
+(nullable id<MAIImageProtocol>)imageWithData:(NSData*)data NS_UNAVAILABLE;
+(nullable id<MAIImageProtocol>)imageWithData:(NSData*)data scale:(CGFloat)scale NS_UNAVAILABLE;
+(id<MAIImageProtocol>)imageWithCGImage:(CGImageRef)cgImage NS_UNAVAILABLE;
+(id<MAIImageProtocol>)imageWithCGImage:(CGImageRef)cgImage scale:(CGFloat)scale orientation:(UIImageOrientation)orientation NS_UNAVAILABLE;
+(id<MAIImageProtocol>)imageWithCIImage:(CIImage*)ciImage NS_UNAVAILABLE;
+(id<MAIImageProtocol>)imageWithCIImage:(CIImage*)ciImage scale:(CGFloat)scale orientation:(UIImageOrientation)orientation NS_UNAVAILABLE;
-(nullable instancetype)initWithData:(NSData*)data scale:(CGFloat)scale NS_UNAVAILABLE;
-(instancetype)initWithCGImage:(CGImageRef)cgImage NS_UNAVAILABLE;
-(instancetype)initWithCGImage:(CGImageRef)cgImage scale:(CGFloat)scale orientation:(UIImageOrientation)orientation NS_UNAVAILABLE;
-(instancetype)initWithCIImage:(CIImage*)ciImage NS_UNAVAILABLE;
-(instancetype)initWithCIImage:(CIImage*)ciImage scale:(CGFloat)scale orientation:(UIImageOrientation)orientation NS_UNAVAILABLE;
+(nullable id<MAIImageProtocol>)animatedImageNamed:(NSString*)name duration:(NSTimeInterval)duration NS_UNAVAILABLE;
+(nullable id<MAIImageProtocol>)animatedResizableImageNamed:(NSString*)name capInsets:(UIEdgeInsets)capInsets duration:(NSTimeInterval)duration NS_UNAVAILABLE;
+(nullable id<MAIImageProtocol>)animatedResizableImageNamed:(NSString*)name capInsets:(UIEdgeInsets)capInsets resizingMode:(UIImageResizingMode)resizingMode duration:(NSTimeInterval)duration NS_UNAVAILABLE;
+(nullable id<MAIImageProtocol>)animatedImageWithImages:(NSArray<MAIImage*>*)images duration:(NSTimeInterval)duration NS_UNAVAILABLE;
#else
-(instancetype)initWithSize:(NSSize)aSize NS_UNAVAILABLE;
-(nullable instancetype)initWithContentsOfURL:(NSURL*)url NS_UNAVAILABLE;
-(nullable instancetype)initByReferencingFile:(NSString*)fileName NS_UNAVAILABLE;
-(instancetype)initByReferencingURL:(NSURL*)url NS_UNAVAILABLE;
-(instancetype)initWithIconRef:(IconRef)iconRef NS_UNAVAILABLE;
-(nullable instancetype)initWithPasteboard:(id<MAIPasteboardProtocol>)pasteboard NS_UNAVAILABLE;
-(nullable instancetype)initWithDataIgnoringOrientation:(NSData*)data NS_UNAVAILABLE;
+(id<MAIImageProtocol>)imageWithSize:(NSSize)size flipped:(BOOL)drawingHandlerShouldBeCalledWithFlippedContext drawingHandler:(BOOL (^)(CGRect dstRect))drawingHandler NS_UNAVAILABLE;
+(BOOL)canInitWithPasteboard:(id<MAIPasteboardProtocol>)pasteboard NS_UNAVAILABLE;
-(instancetype)initWithCGImage:(CGImageRef)cgImage size:(NSSize)size NS_UNAVAILABLE;
#endif

@end

#if TARGET_OS_IPHONE
@interface MAIImage : UIImage<MAIImageProtocol>
#else
@interface MAIImage : NSImage<MAIImageProtocol>
#endif
@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
