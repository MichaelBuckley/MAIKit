#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

#import "MAIFont.h"

@implementation MAIFont

+(Class) class
{
#if TARGET_OS_IPHONE
    return [UIFont class];
#else
    return [NSFont class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAIFont*) [UIFont alloc];
#else
    return (MAIFont*) [NSFont alloc];
#endif
}
+(nullable MAIFont*)fontWithName:(NSString*)fontName size:(CGFloat)fontSize{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [UIFont fontWithName:fontName size:fontSize];
#else
    return (id) [NSFont fontWithName:fontName size:fontSize];
#endif
#pragma clang diagnostic pop
}
+(MAIFont*)systemFontOfSize:(CGFloat)fontSize{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [UIFont systemFontOfSize:fontSize];
#else
    return (id) [NSFont systemFontOfSize:fontSize];
#endif
#pragma clang diagnostic pop
}
+(MAIFont*)boldSystemFontOfSize:(CGFloat)fontSize{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [UIFont boldSystemFontOfSize:fontSize];
#else
    return (id) [NSFont boldSystemFontOfSize:fontSize];
#endif
#pragma clang diagnostic pop
}
+(MAIFont*)systemFontOfSize:(CGFloat)fontSize weight:(CGFloat)weight{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [UIFont systemFontOfSize:fontSize weight:weight];
#else
    return (id) [NSFont systemFontOfSize:fontSize weight:weight];
#endif
#pragma clang diagnostic pop
}
+(MAIFont*)fontWithDescriptor:(MAIFontDescriptor*)descriptor size:(CGFloat)pointSize{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [UIFont fontWithDescriptor:descriptor size:pointSize];
#else
    return (id) [NSFont fontWithDescriptor:descriptor size:pointSize];
#endif
#pragma clang diagnostic pop
}

#if TARGET_OS_IPHONE
-(UIFont*) ios
{
    return (UIFont*) self;
}
#else
-(NSFont*) mac
{
    return (NSFont*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation UIFont (MAIConversion)
#else
@implementation NSFont (MAIConversion)
#endif
-(MAIFont*) mai
{
    return (MAIFont*) self;
}
@end

#pragma clang diagnostic pop
