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

@protocol MAIEventProtocol
@property(readonly, getter=timestamp) NSTimeInterval timestamp;

#if TARGET_OS_IPHONE
#else
+(nullable id<MAIEventProtocol>)eventWithEventRef:(const void*)eventRef NS_UNAVAILABLE;
+(nullable id<MAIEventProtocol>)eventWithCGEvent:(CGEventRef)cgEvent NS_UNAVAILABLE;
+(void)setMouseCoalescingEnabled:(BOOL)flag NS_UNAVAILABLE;
+(BOOL)isMouseCoalescingEnabled NS_UNAVAILABLE;
+(BOOL)isSwipeTrackingFromScrollEventsEnabled NS_UNAVAILABLE;
+(void)startPeriodicEventsAfterDelay:(NSTimeInterval)delay withPeriod:(NSTimeInterval)period NS_UNAVAILABLE;
+(void)stopPeriodicEvents NS_UNAVAILABLE;
+(nullable id<MAIEventProtocol>)mouseEventWithType:(NSEventType)type location:(CGPoint)location modifierFlags:(NSEventModifierFlags)flags timestamp:(NSTimeInterval)time windowNumber:(NSInteger)wNum context:(nullable NSGraphicsContext* __unused)unusedPassNil eventNumber:(NSInteger)eNum clickCount:(NSInteger)cNum pressure:(float)pressure NS_UNAVAILABLE;
+(nullable id<MAIEventProtocol>)keyEventWithType:(NSEventType)type location:(CGPoint)location modifierFlags:(NSEventModifierFlags)flags timestamp:(NSTimeInterval)time windowNumber:(NSInteger)wNum context:(nullable NSGraphicsContext* __unused)unusedPassNil characters:(NSString*)keys charactersIgnoringModifiers:(NSString*)ukeys isARepeat:(BOOL)flag keyCode:(unsigned short)code NS_UNAVAILABLE;
+(nullable id<MAIEventProtocol>)enterExitEventWithType:(NSEventType)type location:(CGPoint)location modifierFlags:(NSEventModifierFlags)flags timestamp:(NSTimeInterval)time windowNumber:(NSInteger)wNum context:(nullable NSGraphicsContext* __unused)unusedPassNil eventNumber:(NSInteger)eNum trackingNumber:(NSInteger)tNum userData:(nullable void*)data NS_UNAVAILABLE;
+(nullable id<MAIEventProtocol>)otherEventWithType:(NSEventType)type location:(CGPoint)location modifierFlags:(NSEventModifierFlags)flags timestamp:(NSTimeInterval)time windowNumber:(NSInteger)wNum context:(nullable NSGraphicsContext* __unused)unusedPassNil subtype:(short)subtype data1:(NSInteger)d1 data2:(NSInteger)d2 NS_UNAVAILABLE;
+(CGPoint)mouseLocation NS_UNAVAILABLE;
+(NSEventModifierFlags)modifierFlags NS_UNAVAILABLE;
+(NSUInteger)pressedMouseButtons NS_UNAVAILABLE;
+(NSTimeInterval)doubleClickInterval NS_UNAVAILABLE;
+(NSTimeInterval)keyRepeatDelay NS_UNAVAILABLE;
+(NSTimeInterval)keyRepeatInterval NS_UNAVAILABLE;
+(nullable id)addGlobalMonitorForEventsMatchingMask:(NSEventMask)mask handler:(void (^)(MAIEvent*))block NS_UNAVAILABLE;
+(nullable id)addLocalMonitorForEventsMatchingMask:(NSEventMask)mask handler:(MAIEvent* __nullable (^)(MAIEvent*))block NS_UNAVAILABLE;
+(void)removeMonitor:(id)eventMonitor NS_UNAVAILABLE;
#endif

@end

#if TARGET_OS_IPHONE
@interface MAIEvent : UIEvent<MAIEventProtocol>
#else
@interface MAIEvent : NSEvent<MAIEventProtocol>
#endif
@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
