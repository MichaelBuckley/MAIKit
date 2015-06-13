#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

#import "MAICollectionViewTransitionLayout.h"

@implementation MAICollectionViewTransitionLayout

+(Class) class
{
#if TARGET_OS_IPHONE
    return [UICollectionViewTransitionLayout class];
#else
    return [NSCollectionViewTransitionLayout class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAICollectionViewTransitionLayout*) [UICollectionViewTransitionLayout alloc];
#else
    return (MAICollectionViewTransitionLayout*) [NSCollectionViewTransitionLayout alloc];
#endif
}

#if TARGET_OS_IPHONE
-(UICollectionViewTransitionLayout*) ios
{
    return (UICollectionViewTransitionLayout*) self;
}
#else
-(NSCollectionViewTransitionLayout*) mac
{
    return (NSCollectionViewTransitionLayout*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation UICollectionViewTransitionLayout (MAIConversion)
#else
@implementation NSCollectionViewTransitionLayout (MAIConversion)
#endif
-(MAICollectionViewTransitionLayout*) mai
{
    return (MAICollectionViewTransitionLayout*) self;
}
@end

#pragma clang diagnostic pop
