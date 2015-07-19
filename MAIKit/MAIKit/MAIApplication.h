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

@protocol MAIApplicationProtocol
+(id<MAIApplicationProtocol>)sharedApplication;
-(void)sendEvent:(id<MAIEventProtocol>)event;
-(void)unregisterForRemoteNotifications;
-(void)extendStateRestoration;
-(void)completeStateRestoration;
-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(void)updateUserActivityState:(NSUserActivity*)activity;
-(void)restoreUserActivityState:(NSUserActivity*)activity;
@property(nullable, setter=setDelegate:, getter=delegate) id<MAIApplicationDelegate> delegate;
@property(readonly, nullable, getter=keyWindow) id<MAIWindowProtocol> keyWindow;
@property(readonly, getter=userInterfaceLayoutDirection) MAIUserInterfaceLayoutDirection userInterfaceLayoutDirection;
@property(readonly, nullable, getter=undoManager) NSUndoManager* undoManager;
@property(nullable, setter=setUserActivity:, getter=userActivity) NSUserActivity* userActivity;

#if TARGET_OS_IPHONE
+(void)registerObjectForStateRestoration:(id<UIStateRestoring>)object restorationIdentifier:(NSString*)restorationIdentifier NS_UNAVAILABLE;
+(void)clearTextInputContextIdentifier:(NSString*)identifier NS_UNAVAILABLE;
#else
+(void)detachDrawingThread:(SEL)selector toTarget:(id)target withObject:(nullable id)argument NS_UNAVAILABLE;
-(instancetype)init NS_UNAVAILABLE;
-(nullable instancetype)initWithCoder:(NSCoder*)coder NS_UNAVAILABLE;
#endif

@end

#if TARGET_OS_IPHONE
@interface MAIApplication : UIApplication<MAIApplicationProtocol>
#else
@interface MAIApplication : NSApplication<MAIApplicationProtocol>
#endif
@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
