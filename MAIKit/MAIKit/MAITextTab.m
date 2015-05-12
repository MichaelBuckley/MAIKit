#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"

#import "MAITextTab.h"

@implementation MAITextTab

+(Class) class
{
#if TARGET_OS_IPHONE
    return [NSTextTab class];
#else
    return [NSTextTab class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAITextTab*) [NSTextTab alloc];
#else
    return (MAITextTab*) [NSTextTab alloc];
#endif
}

- (instancetype)init
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [(NSTextTab*) self init];
#else
    return (id) [(NSTextTab*) self init];
#endif
#pragma clang diagnostic pop
}

-(instancetype)initWithTextAlignment:(NSTextAlignment)alignment location:(CGFloat)loc options:(NSDictionary *)options{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [(NSTextTab*) self initWithTextAlignment:alignment location:loc options:options];
#else
    return (id) [(NSTextTab*) self initWithTextAlignment:alignment location:loc options:options];
#endif
#pragma clang diagnostic pop
}
#if TARGET_OS_IPHONE
-(NSTextTab*) ios
{
    return (NSTextTab*) self;
}
#else
-(NSTextTab*) mac
{
    return (NSTextTab*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation NSTextTab (MAIConversion)
#else
@implementation NSTextTab (MAIConversion)
#endif
-(MAITextTab*) mai
{
    return (MAITextTab*) self;
}
@end

#pragma clang diagnostic pop
