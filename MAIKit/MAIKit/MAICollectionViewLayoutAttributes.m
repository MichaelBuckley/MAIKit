#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

#import "MAICollectionViewLayoutAttributes.h"

@implementation MAICollectionViewLayoutAttributes

+(Class) class
{
#if TARGET_OS_IPHONE
    return [UICollectionViewLayoutAttributes class];
#else
    return [NSCollectionViewLayoutAttributes class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAICollectionViewLayoutAttributes*) [UICollectionViewLayoutAttributes alloc];
#else
    return (MAICollectionViewLayoutAttributes*) [NSCollectionViewLayoutAttributes alloc];
#endif
}

#if TARGET_OS_IPHONE
-(UICollectionViewLayoutAttributes*) ios
{
    return (UICollectionViewLayoutAttributes*) self;
}
#else
-(NSCollectionViewLayoutAttributes*) mac
{
    return (NSCollectionViewLayoutAttributes*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation UICollectionViewLayoutAttributes (MAIConversion)
#else
@implementation NSCollectionViewLayoutAttributes (MAIConversion)
#endif
-(MAICollectionViewLayoutAttributes*) mai
{
    return (MAICollectionViewLayoutAttributes*) self;
}
@end

#pragma clang diagnostic pop
