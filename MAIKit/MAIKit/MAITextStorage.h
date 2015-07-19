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

@protocol MAITextStorageProtocol
-(void)addLayoutManager:(id<MAILayoutManagerProtocol>)aLayoutManager;
-(void)removeLayoutManager:(id<MAILayoutManagerProtocol>)aLayoutManager;
-(void)edited:(MAITextStorageEditActions)editedMask range:(NSRange)editedRange changeInLength:(NSInteger)delta;
-(void)processEditing;
-(void)invalidateAttributesInRange:(NSRange)range;
-(void)ensureAttributesAreFixedInRange:(NSRange)range;
@property(readonly, getter=layoutManagers) NSArray<MAILayoutManager*>* layoutManagers;
@property(readonly, getter=editedMask) MAITextStorageEditActions editedMask;
@property(readonly, getter=editedRange) NSRange editedRange;
@property(readonly, getter=changeInLength) NSInteger changeInLength;
@property(nullable, setter=setDelegate:, getter=delegate) id <MAITextStorageDelegate> delegate;
@property(readonly, getter=fixesAttributesLazily) BOOL fixesAttributesLazily;

#if TARGET_OS_IPHONE
#else
#endif

@end

#if TARGET_OS_IPHONE
@interface MAITextStorage : NSTextStorage<MAITextStorageProtocol>
#else
@interface MAITextStorage : NSTextStorage<MAITextStorageProtocol>
#endif
@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
