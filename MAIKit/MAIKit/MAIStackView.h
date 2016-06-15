#import <TargetConditionals.h>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#if TARGET_OS_IPHONE
@import UIKit;
#else
@import AppKit;
#endif

#import "MAIEnums.h"
#import "MAIDeclarations.h"

NS_ASSUME_NONNULL_BEGIN

@protocol MAIStackViewProtocol
-(void)addArrangedSubview:(id<MAIViewProtocol>)view;
-(void)removeArrangedSubview:(id<MAIViewProtocol>)view;
-(instancetype)initWithFrame:(CGRect)frame;
-(nullable instancetype)initWithCoder:(NSCoder*)aDecoder;
-(CGPoint)convertPoint:(CGPoint)point toView:(nullable id<MAIViewProtocol>)view;
-(CGPoint)convertPoint:(CGPoint)point fromView:(nullable id<MAIViewProtocol>)view;
-(CGRect)convertRect:(CGRect)rect toView:(nullable id<MAIViewProtocol>)view;
-(CGRect)convertRect:(CGRect)rect fromView:(nullable id<MAIViewProtocol>)view;
-(void)removeFromSuperview;
-(void)addSubview:(id<MAIViewProtocol>)view;
-(void)didAddSubview:(id<MAIViewProtocol>)subview;
-(void)willRemoveSubview:(id<MAIViewProtocol>)subview;
-(nullable __kindof id<MAIViewProtocol>)viewWithTag:(NSInteger)tag;
-(void)drawRect:(CGRect)rect;
-(void)setNeedsDisplayInRect:(CGRect)rect;
-(void)addGestureRecognizer:(id<MAIGestureRecognizerProtocol>)gestureRecognizer;
-(void)removeGestureRecognizer:(id<MAIGestureRecognizerProtocol>)gestureRecognizer;
-(void)encodeRestorableStateWithCoder:(NSCoder*)coder;
-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(void)updateUserActivityState:(NSUserActivity*)activity;
-(void)restoreUserActivityState:(NSUserActivity*)activity;
@property(readonly, getter=arrangedSubviews) NSArray<__kindof MAIView*>* arrangedSubviews;
@property(setter=setDistribution:, getter=distribution) MAIStackViewDistribution distribution;
@property(setter=setSpacing:, getter=spacing) CGFloat spacing;
@property(setter=setFrame:, getter=frame) CGRect frame;
@property(setter=setBounds:, getter=bounds) CGRect bounds;
@property(setter=setAutoresizesSubviews:, getter=autoresizesSubviews) BOOL autoresizesSubviews;
@property(readonly, nullable, getter=superview) id<MAIViewProtocol> superview;
@property(readonly, nullable, getter=window) id<MAIWindowProtocol> window;
@property(setter=setHidden:, getter=isHidden) BOOL hidden;
@property(setter=setGestureRecognizers:, getter=gestureRecognizers) NSArray<__kindof MAIGestureRecognizer*>* gestureRecognizers;
@property(readonly, nullable, getter=undoManager) NSUndoManager* undoManager;
@property(nullable, setter=setUserActivity:, getter=userActivity) NSUserActivity* userActivity;

#if TARGET_OS_IPHONE
-(instancetype)initWithArrangedSubviews:(NSArray<__kindof MAIView*>*)views NS_UNAVAILABLE;
+(Class)layerClass NS_UNAVAILABLE;
+(MAIUserInterfaceLayoutDirection)userInterfaceLayoutDirectionForSemanticContentAttribute:(UISemanticContentAttribute)attribute NS_UNAVAILABLE;
+(MAIUserInterfaceLayoutDirection)userInterfaceLayoutDirectionForSemanticContentAttribute:(UISemanticContentAttribute)semanticContentAttribute relativeToLayoutDirection:(MAIUserInterfaceLayoutDirection)layoutDirection NS_UNAVAILABLE;
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
+(void)performWithoutAnimation:(void (NS_NOESCAPE ^)(void))actionsWithoutAnimation NS_UNAVAILABLE;
+(NSTimeInterval)inheritedAnimationDuration NS_UNAVAILABLE;
+(void)animateWithDuration:(NSTimeInterval)duration delay:(NSTimeInterval)delay options:(UIViewAnimationOptions)options animations:(void (^)(void))animations completion:(void (^ __nullable)(BOOL finished))completion NS_UNAVAILABLE;
+(void)animateWithDuration:(NSTimeInterval)duration animations:(void (^)(void))animations completion:(void (^ __nullable)(BOOL finished))completion NS_UNAVAILABLE;
+(void)animateWithDuration:(NSTimeInterval)duration animations:(void (^)(void))animations NS_UNAVAILABLE;
+(void)animateWithDuration:(NSTimeInterval)duration delay:(NSTimeInterval)delay usingSpringWithDamping:(CGFloat)dampingRatio initialSpringVelocity:(CGFloat)velocity options:(UIViewAnimationOptions)options animations:(void (^)(void))animations completion:(void (^ __nullable)(BOOL finished))completion NS_UNAVAILABLE;
+(void)transitionWithView:(id<MAIViewProtocol>)view duration:(NSTimeInterval)duration options:(UIViewAnimationOptions)options animations:(void (^ __nullable)(void))animations completion:(void (^ __nullable)(BOOL finished))completion NS_UNAVAILABLE;
+(void)transitionFromView:(id<MAIViewProtocol>)fromView toView:(id<MAIViewProtocol>)toView duration:(NSTimeInterval)duration options:(UIViewAnimationOptions)options completion:(void (^ __nullable)(BOOL finished))completion NS_UNAVAILABLE;
+(void)performSystemAnimation:(UISystemAnimation)animation onViews:(NSArray<__kindof MAIView*>*)views options:(UIViewAnimationOptions)options animations:(void (^ __nullable)(void))parallelAnimations completion:(void (^ __nullable)(BOOL finished))completion NS_UNAVAILABLE;
+(void)animateKeyframesWithDuration:(NSTimeInterval)duration delay:(NSTimeInterval)delay options:(UIViewKeyframeAnimationOptions)options animations:(void (^)(void))animations completion:(void (^ __nullable)(BOOL finished))completion NS_UNAVAILABLE;
+(void)addKeyframeWithRelativeStartTime:(double)frameStartTime relativeDuration:(double)frameDuration animations:(void (^)(void))animations NS_UNAVAILABLE;
+(BOOL)requiresConstraintBasedLayout NS_UNAVAILABLE;
+(void)clearTextInputContextIdentifier:(NSString*)identifier NS_UNAVAILABLE;
#else
+(instancetype)stackViewWithViews:(NSArray<MAIView*>*)views NS_UNAVAILABLE;
+(nullable id<MAIViewProtocol>)focusView NS_UNAVAILABLE;
+(nullable NSMenu*)defaultMenu NS_UNAVAILABLE;
+(BOOL)isCompatibleWithResponsiveScrolling NS_UNAVAILABLE;
+(NSFocusRingType)defaultFocusRingType NS_UNAVAILABLE;
-(instancetype)init NS_UNAVAILABLE;
#endif

@end

#if TARGET_OS_IPHONE
@interface MAIStackView : UIStackView<MAIStackViewProtocol>
#else
@interface MAIStackView : NSStackView<MAIStackViewProtocol>
#endif
@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
