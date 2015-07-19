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

@protocol MAITextAttachmentProtocol
-(instancetype)initWithData:(nullable NSData*)contentData ofType:(nullable NSString*)uti;
@property(nullable, setter=setContents:, getter=contents) NSData* contents;
@property(nullable, setter=setFileType:, getter=fileType) NSString* fileType;
@property(nullable, setter=setImage:, getter=image) id<MAIImageProtocol> image;
@property(setter=setBounds:, getter=bounds) CGRect bounds;
@property(nullable, setter=setFileWrapper:, getter=fileWrapper) NSFileWrapper* fileWrapper;

#if TARGET_OS_IPHONE
#else
-(instancetype)initWithFileWrapper:(nullable NSFileWrapper*)fileWrapper NS_UNAVAILABLE;
#endif

@end

#if TARGET_OS_IPHONE
@interface MAITextAttachment : NSTextAttachment<MAITextAttachmentProtocol>
#else
@interface MAITextAttachment : NSTextAttachment<MAITextAttachmentProtocol>
#endif
@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
