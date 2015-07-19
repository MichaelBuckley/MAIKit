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

@protocol MAIDocumentProtocol
-(void)updateUserActivityState:(NSUserActivity*)userActivity;
-(void)restoreUserActivityState:(NSUserActivity*)userActivity;
@property(nullable, setter=setFileModificationDate:, getter=fileModificationDate) NSDate* fileModificationDate;
@property(nullable, setter=setUserActivity:, getter=userActivity) NSUserActivity* userActivity;

#if TARGET_OS_IPHONE
-(instancetype)initWithFileURL:(NSURL*)url NS_UNAVAILABLE;
#else
-(instancetype)init NS_UNAVAILABLE;
-(nullable instancetype)initWithType:(NSString*)typeName error:(NSError**)outError NS_UNAVAILABLE;
+(BOOL)canConcurrentlyReadDocumentsOfType:(NSString*)typeName NS_UNAVAILABLE;
-(nullable instancetype)initWithContentsOfURL:(NSURL*)url ofType:(NSString*)typeName error:(NSError**)outError NS_UNAVAILABLE;
-(nullable instancetype)initForURL:(nullable NSURL*)urlOrNil withContentsOfURL:(NSURL*)contentsURL ofType:(NSString*)typeName error:(NSError**)outError NS_UNAVAILABLE;
+(BOOL)autosavesInPlace NS_UNAVAILABLE;
+(BOOL)preservesVersions NS_UNAVAILABLE;
+(BOOL)autosavesDrafts NS_UNAVAILABLE;
+(BOOL)isNativeType:(NSString*)type NS_UNAVAILABLE;
+(BOOL)usesUbiquitousStorage NS_UNAVAILABLE;
#endif

@end

#if TARGET_OS_IPHONE
@interface MAIDocument : UIDocument<MAIDocumentProtocol>
#else
@interface MAIDocument : NSDocument<MAIDocumentProtocol>
#endif
@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
