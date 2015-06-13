#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

#import "MAICollectionViewLayoutInvalidationContext.h"

@implementation MAICollectionViewLayoutInvalidationContext

+(Class) class
{
#if TARGET_OS_IPHONE
    return [UICollectionViewLayoutInvalidationContext class];
#else
    return [NSCollectionViewLayoutInvalidationContext class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAICollectionViewLayoutInvalidationContext*) [UICollectionViewLayoutInvalidationContext alloc];
#else
    return (MAICollectionViewLayoutInvalidationContext*) [NSCollectionViewLayoutInvalidationContext alloc];
#endif
}

#if TARGET_OS_IPHONE
-(UICollectionViewLayoutInvalidationContext*) ios
{
    return (UICollectionViewLayoutInvalidationContext*) self;
}
#else
-(NSCollectionViewLayoutInvalidationContext*) mac
{
    return (NSCollectionViewLayoutInvalidationContext*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation UICollectionViewLayoutInvalidationContext (MAIConversion)
#else
@implementation NSCollectionViewLayoutInvalidationContext (MAIConversion)
#endif
-(MAICollectionViewLayoutInvalidationContext*) mai
{
    return (MAICollectionViewLayoutInvalidationContext*) self;
}
@end

#pragma clang diagnostic pop
