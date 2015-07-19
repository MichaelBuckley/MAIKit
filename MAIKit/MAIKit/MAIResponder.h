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

@protocol MAIResponderProtocol
-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(void)updateUserActivityState:(NSUserActivity*)activity;
-(void)restoreUserActivityState:(NSUserActivity*)activity;
@property(readonly, nullable, getter=undoManager) NSUndoManager* undoManager;
@property(nullable, setter=setUserActivity:, getter=userActivity) NSUserActivity* userActivity;

#if TARGET_OS_IPHONE
+(void)clearTextInputContextIdentifier:(NSString*)identifier NS_UNAVAILABLE;
#else
-(instancetype)init NS_UNAVAILABLE;
-(nullable instancetype)initWithCoder:(NSCoder*)coder NS_UNAVAILABLE;
#endif

@end

#if TARGET_OS_IPHONE
@interface MAIResponder : UIResponder<MAIResponderProtocol>
#else
@interface MAIResponder : NSResponder<MAIResponderProtocol>
#endif
@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
