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

@protocol MAIDataAssetProtocol
-(instancetype)init NS_UNAVAILABLE;
-(nullable instancetype)initWithName:(NSString*)name;
-(nullable instancetype)initWithName:(NSString*)name bundle:(NSBundle*)bundle;
@property(readonly, getter=name) NSString* name;
@property(readonly, getter=data) NSData* data;
@property(readonly, getter=typeIdentifier) NSString* typeIdentifier;

#if TARGET_OS_IPHONE
#else
#endif

@end

#if TARGET_OS_IPHONE
@interface MAIDataAsset : NSDataAsset<MAIDataAssetProtocol>
#else
@interface MAIDataAsset : NSDataAsset<MAIDataAssetProtocol>
#endif
@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
