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

@protocol MAIToolbarProtocol
@property(nullable, setter=setDelegate:, getter=delegate) id<MAIToolbarDelegate> delegate;

#if TARGET_OS_IPHONE
+(Class)layerClass NS_UNAVAILABLE;
-(instancetype)initWithFrame:(CGRect)frame NS_UNAVAILABLE;
-(nullable instancetype)initWithCoder:(NSCoder*)aDecoder NS_UNAVAILABLE;
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
+(void)transitionWithView:(id<MAIViewProtocol>)view duration:(NSTimeInterval)duration options:(UIViewAnimationOptions)options animations:(void (^ __nullable)(void))animations completion:(void (^ __nullable)(BOOL finished))completion NS_UNAVAILABLE;
+(void)transitionFromView:(id<MAIViewProtocol>)fromView toView:(id<MAIViewProtocol>)toView duration:(NSTimeInterval)duration options:(UIViewAnimationOptions)options completion:(void (^ __nullable)(BOOL finished))completion NS_UNAVAILABLE;
+(void)performSystemAnimation:(UISystemAnimation)animation onViews:(NSArray<__kindof MAIView*>*)views options:(UIViewAnimationOptions)options animations:(void (^ __nullable)(void))parallelAnimations completion:(void (^ __nullable)(BOOL finished))completion NS_UNAVAILABLE;
+(void)animateKeyframesWithDuration:(NSTimeInterval)duration delay:(NSTimeInterval)delay options:(UIViewKeyframeAnimationOptions)options animations:(void (^)(void))animations completion:(void (^ __nullable)(BOOL finished))completion NS_UNAVAILABLE;
+(void)addKeyframeWithRelativeStartTime:(double)frameStartTime relativeDuration:(double)frameDuration animations:(void (^)(void))animations NS_UNAVAILABLE;
+(BOOL)requiresConstraintBasedLayout NS_UNAVAILABLE;
+(void)clearTextInputContextIdentifier:(NSString*)identifier NS_UNAVAILABLE;
#else
-(instancetype)initWithIdentifier:(NSString*)identifier NS_UNAVAILABLE;
#endif

@end

#if TARGET_OS_IPHONE
@interface MAIToolbar : UIToolbar<MAIToolbarProtocol>
#else
@interface MAIToolbar : NSToolbar<MAIToolbarProtocol>
#endif
@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
