#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

#import "MAICollectionView.h"

@implementation MAICollectionView

+(Class) class
{
#if TARGET_OS_IPHONE
    return [UICollectionView class];
#else
    return [NSCollectionView class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAICollectionView*) [UICollectionView alloc];
#else
    return (MAICollectionView*) [NSCollectionView alloc];
#endif
}

#if TARGET_OS_IPHONE
-(UICollectionView*) ios
{
    return (UICollectionView*) self;
}
#else
-(NSCollectionView*) mac
{
    return (NSCollectionView*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation UICollectionView (MAIConversion)
#else
@implementation NSCollectionView (MAIConversion)
#endif
-(MAICollectionView*) mai
{
    return (MAICollectionView*) self;
}
@end

#pragma clang diagnostic pop
