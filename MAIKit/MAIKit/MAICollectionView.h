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
@class MAIBezierPath;
@protocol MAIBezierPathProtocol;
@class MAIButton;
@protocol MAIButtonProtocol;
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

@protocol MAICollectionViewProtocol
-(nullable instancetype)initWithCoder:(NSCoder*)aDecoder;
-(void)reloadData;
-(NSInteger)numberOfSections;
-(NSInteger)numberOfItemsInSection:(NSInteger)section;
-(nullable id<MAICollectionViewLayoutAttributesProtocol>)layoutAttributesForItemAtIndexPath:(NSIndexPath*)indexPath;
-(nullable id<MAICollectionViewLayoutAttributesProtocol>)layoutAttributesForSupplementaryElementOfKind:(NSString*)kind atIndexPath:(NSIndexPath*)indexPath;
-(nullable NSIndexPath*)indexPathForItemAtPoint:(CGPoint)point;
-(void)insertSections:(NSIndexSet*)sections;
-(void)deleteSections:(NSIndexSet*)sections;
-(void)reloadSections:(NSIndexSet*)sections;
-(void)moveSection:(NSInteger)section toSection:(NSInteger)newSection;
-(void)moveItemAtIndexPath:(NSIndexPath*)indexPath toIndexPath:(NSIndexPath*)newIndexPath;
-(instancetype)initWithFrame:(CGRect)frame;
-(CGPoint)convertPoint:(CGPoint)point toView:(nullable id<MAIViewProtocol>)view;
-(CGPoint)convertPoint:(CGPoint)point fromView:(nullable id<MAIViewProtocol>)view;
-(CGRect)convertRect:(CGRect)rect toView:(nullable id<MAIViewProtocol>)view;
-(CGRect)convertRect:(CGRect)rect fromView:(nullable id<MAIViewProtocol>)view;
-(void)removeFromSuperview;
-(void)addSubview:(id<MAIViewProtocol>)view;
-(void)didAddSubview:(id<MAIViewProtocol>)subview;
-(void)willRemoveSubview:(id<MAIViewProtocol>)subview;
-(nullable id<MAIViewProtocol>)viewWithTag:(NSInteger)tag;
-(void)drawRect:(CGRect)rect;
-(void)setNeedsDisplayInRect:(CGRect)rect;
-(void)addGestureRecognizer:(id<MAIGestureRecognizerProtocol>)gestureRecognizer;
-(void)removeGestureRecognizer:(id<MAIGestureRecognizerProtocol>)gestureRecognizer;
-(void)encodeRestorableStateWithCoder:(NSCoder*)coder;
-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(void)updateUserActivityState:(NSUserActivity*)activity;
-(void)restoreUserActivityState:(NSUserActivity*)activity;
@property(nullable, setter=setBackgroundView:, getter=backgroundView) id<MAIViewProtocol> backgroundView;
@property(setter=setAllowsMultipleSelection:, getter=allowsMultipleSelection) BOOL allowsMultipleSelection;
@property(setter=setFrame:, getter=frame) CGRect frame;
@property(setter=setBounds:, getter=bounds) CGRect bounds;
@property(setter=setAutoresizesSubviews:, getter=autoresizesSubviews) BOOL autoresizesSubviews;
@property(readonly, nullable, getter=superview) id<MAIViewProtocol> superview;
@property(readonly, nullable, getter=window) id<MAIWindowProtocol> window;
@property(setter=setHidden:, getter=isHidden) BOOL hidden;
@property(readonly, nullable, getter=undoManager) NSUndoManager* undoManager;
@property(nullable, setter=setUserActivity:, getter=userActivity) NSUserActivity* userActivity;

#if TARGET_OS_IPHONE
-(instancetype)initWithFrame:(CGRect)frame collectionViewLayout:(id<MAICollectionViewLayoutProtocol>)layout NS_UNAVAILABLE;
+(Class)layerClass NS_UNAVAILABLE;
+(MAIUserInterfaceLayoutDirection)userInterfaceLayoutDirectionForSemanticContentAttribute:(UISemanticContentAttribute)attribute NS_UNAVAILABLE;
+(void)beginAnimations:(nullable NSString*)animationID context:(nullable void*)context NS_UNAVAILABLE;
+(void)commitAnimations NS_UNAVAILABLE;
+(void)setAnimationDelegate:(nullable id)delegate NS_UNAVAILABLE;
+(void)setAnimationWillStartSelector:(nullable SEL)selector NS_UNAVAILABLE;
+(void)setAnimationDidStopSelector:(nullable SEL)selector NS_UNAVAILABLE;
+(void)setAnimationDuration:(NSTimeInterval)duration NS_UNAVAILABLE;
+(void)setAnimationDelay:(NSTimeInterval)delay NS_UNAVAILABLE;
+(void)setAnimationStartDate:(NSDate*)startDate NS_UNAVAILABLE;
+(void)setAnimationCurve:(UIViewAnimationCurve)curve NS_UNAVAILABLE;
+(void)setAnimationRepeatCount:(float)repeatCount NS_UNAVAILABLE;
+(void)setAnimationRepeatAutoreverses:(BOOL)repeatAutoreverses NS_UNAVAILABLE;
+(void)setAnimationBeginsFromCurrentState:(BOOL)fromCurrentState NS_UNAVAILABLE;
+(void)setAnimationTransition:(UIViewAnimationTransition)transition forView:(id<MAIViewProtocol>)view cache:(BOOL)cache NS_UNAVAILABLE;
+(void)setAnimationsEnabled:(BOOL)enabled NS_UNAVAILABLE;
+(BOOL)areAnimationsEnabled NS_UNAVAILABLE;
+(void)performWithoutAnimation:(void (^)(void))actionsWithoutAnimation NS_UNAVAILABLE;
+(NSTimeInterval)inheritedAnimationDuration NS_UNAVAILABLE;
+(void)animateWithDuration:(NSTimeInterval)duration delay:(NSTimeInterval)delay options:(UIViewAnimationOptions)options animations:(void (^)(void))animations completion:(void (^ __nullable)(BOOL finished))completion NS_UNAVAILABLE;
+(void)animateWithDuration:(NSTimeInterval)duration animations:(void (^)(void))animations completion:(void (^ __nullable)(BOOL finished))completion NS_UNAVAILABLE;
+(void)animateWithDuration:(NSTimeInterval)duration animations:(void (^)(void))animations NS_UNAVAILABLE;
+(void)animateWithDuration:(NSTimeInterval)duration delay:(NSTimeInterval)delay usingSpringWithDamping:(CGFloat)dampingRatio initialSpringVelocity:(CGFloat)velocity options:(UIViewAnimationOptions)options animations:(void (^)(void))animations completion:(void (^ __nullable)(BOOL finished))completion NS_UNAVAILABLE;
+(void)transitionWithView:(id<MAIViewProtocol>)view duration:(NSTimeInterval)duration options:(UIViewAnimationOptions)options animations:(void (^)(void))animations completion:(void (^ __nullable)(BOOL finished))completion NS_UNAVAILABLE;
+(void)transitionFromView:(id<MAIViewProtocol>)fromView toView:(id<MAIViewProtocol>)toView duration:(NSTimeInterval)duration options:(UIViewAnimationOptions)options completion:(void (^ __nullable)(BOOL finished))completion NS_UNAVAILABLE;
+(void)performSystemAnimation:(UISystemAnimation)animation onViews:(NSArray<__kindof MAIView*>*)views options:(UIViewAnimationOptions)options animations:(void (^ __nullable)(void))parallelAnimations completion:(void (^ __nullable)(BOOL finished))completion NS_UNAVAILABLE;
+(void)animateKeyframesWithDuration:(NSTimeInterval)duration delay:(NSTimeInterval)delay options:(UIViewKeyframeAnimationOptions)options animations:(void (^)(void))animations completion:(void (^ __nullable)(BOOL finished))completion NS_UNAVAILABLE;
+(void)addKeyframeWithRelativeStartTime:(double)frameStartTime relativeDuration:(double)frameDuration animations:(void (^)(void))animations NS_UNAVAILABLE;
+(BOOL)requiresConstraintBasedLayout NS_UNAVAILABLE;
+(void)clearTextInputContextIdentifier:(NSString*)identifier NS_UNAVAILABLE;
#else
+(nullable id<MAIViewProtocol>)focusView NS_UNAVAILABLE;
+(nullable NSMenu*)defaultMenu NS_UNAVAILABLE;
+(BOOL)isCompatibleWithResponsiveScrolling NS_UNAVAILABLE;
+(NSFocusRingType)defaultFocusRingType NS_UNAVAILABLE;
-(instancetype)init NS_UNAVAILABLE;
#endif

@end

#if TARGET_OS_IPHONE
@interface MAICollectionView : UICollectionView<MAICollectionViewProtocol>
#else
@interface MAICollectionView : NSCollectionView<MAICollectionViewProtocol>
#endif
@end

NS_ASSUME_NONNULL_END
