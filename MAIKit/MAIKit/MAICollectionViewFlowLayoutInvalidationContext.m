#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

#import "MAICollectionViewFlowLayoutInvalidationContext.h"

@implementation MAICollectionViewFlowLayoutInvalidationContext

+(Class) class
{
#if TARGET_OS_IPHONE
    return [UICollectionViewFlowLayoutInvalidationContext class];
#else
    return [NSCollectionViewFlowLayoutInvalidationContext class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAICollectionViewFlowLayoutInvalidationContext*) [UICollectionViewFlowLayoutInvalidationContext alloc];
#else
    return (MAICollectionViewFlowLayoutInvalidationContext*) [NSCollectionViewFlowLayoutInvalidationContext alloc];
#endif
}

#if TARGET_OS_IPHONE
-(UICollectionViewFlowLayoutInvalidationContext*) ios
{
    return (UICollectionViewFlowLayoutInvalidationContext*) self;
}
#else
-(NSCollectionViewFlowLayoutInvalidationContext*) mac
{
    return (NSCollectionViewFlowLayoutInvalidationContext*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation UICollectionViewFlowLayoutInvalidationContext (MAIConversion)
#else
@implementation NSCollectionViewFlowLayoutInvalidationContext (MAIConversion)
#endif
-(MAICollectionViewFlowLayoutInvalidationContext*) mai
{
    return (MAICollectionViewFlowLayoutInvalidationContext*) self;
}
@end

#pragma clang diagnostic pop
