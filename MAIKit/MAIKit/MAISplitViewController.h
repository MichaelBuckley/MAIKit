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

@protocol MAISplitViewControllerProtocol
-(instancetype)initWithNibName:(nullable NSString*)nibNameOrNil bundle:(nullable NSBundle*)nibBundleOrNil;
-(nullable instancetype)initWithCoder:(NSCoder*)aDecoder;
-(void)loadView;
-(void)viewDidLoad;
-(void)encodeRestorableStateWithCoder:(NSCoder*)coder;
-(void)updateViewConstraints;
-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(void)updateUserActivityState:(NSUserActivity*)activity;
-(void)restoreUserActivityState:(NSUserActivity*)activity;
@property(setter=setView:, getter=view) id<MAIViewProtocol> view;
@property(readonly, nullable, getter=nibName) NSString* nibName;
@property(readonly, nullable, getter=nibBundle) NSBundle* nibBundle;
@property(readonly, nullable, getter=storyboard) id<MAIStoryboardProtocol> storyboard;
@property(nullable, setter=setTitle:, getter=title) NSString* title;
@property(readonly, nullable, getter=parentViewController) id<MAIViewControllerProtocol> parentViewController;
@property(readonly, nullable, getter=presentingViewController) id<MAIViewControllerProtocol> presentingViewController;
@property(readonly, nullable, getter=extensionContext) NSExtensionContext* extensionContext;
@property(readonly, nullable, getter=undoManager) NSUndoManager* undoManager;
@property(nullable, setter=setUserActivity:, getter=userActivity) NSUserActivity* userActivity;
@property(readonly, getter=isViewLoaded) BOOL viewLoaded;

#if TARGET_OS_IPHONE
+(void)clearTextInputContextIdentifier:(NSString*)identifier NS_UNAVAILABLE;
#else
-(instancetype)init NS_UNAVAILABLE;
#endif

@end

#if TARGET_OS_IPHONE
@interface MAISplitViewController : UISplitViewController<MAISplitViewControllerProtocol>
#else
@interface MAISplitViewController : NSSplitViewController<MAISplitViewControllerProtocol>
#endif
@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
