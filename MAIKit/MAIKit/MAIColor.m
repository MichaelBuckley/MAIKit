#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

#import "MAIColor.h"

@implementation MAIColor

+(Class) class
{
#if TARGET_OS_IPHONE
    return [UIColor class];
#else
    return [NSColor class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAIColor*) [UIColor alloc];
#else
    return (MAIColor*) [NSColor alloc];
#endif
}
+(MAIColor*)colorWithWhite:(CGFloat)white alpha:(CGFloat)alpha{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [UIColor colorWithWhite:white alpha:alpha];
#else
    return (id) [NSColor colorWithWhite:white alpha:alpha];
#endif
#pragma clang diagnostic pop
}
+(MAIColor*)colorWithHue:(CGFloat)hue saturation:(CGFloat)saturation brightness:(CGFloat)brightness alpha:(CGFloat)alpha{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [UIColor colorWithHue:hue saturation:saturation brightness:brightness alpha:alpha];
#else
    return (id) [NSColor colorWithHue:hue saturation:saturation brightness:brightness alpha:alpha];
#endif
#pragma clang diagnostic pop
}
+(MAIColor*)colorWithRed:(CGFloat)red green:(CGFloat)green blue:(CGFloat)blue alpha:(CGFloat)alpha{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [UIColor colorWithRed:red green:green blue:blue alpha:alpha];
#else
    return (id) [NSColor colorWithRed:red green:green blue:blue alpha:alpha];
#endif
#pragma clang diagnostic pop
}
+(MAIColor*)colorWithCGColor:(CGColorRef)cgColor{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [UIColor colorWithCGColor:cgColor];
#else
    return (id) [NSColor colorWithCGColor:cgColor];
#endif
#pragma clang diagnostic pop
}
+(MAIColor*)colorWithPatternImage:(MAIImage*)image{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [UIColor colorWithPatternImage:image];
#else
    return (id) [NSColor colorWithPatternImage:image];
#endif
#pragma clang diagnostic pop
}
+(MAIColor*)blackColor{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [UIColor blackColor];
#else
    return (id) [NSColor blackColor];
#endif
#pragma clang diagnostic pop
}
+(MAIColor*)darkGrayColor{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [UIColor darkGrayColor];
#else
    return (id) [NSColor darkGrayColor];
#endif
#pragma clang diagnostic pop
}
+(MAIColor*)lightGrayColor{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [UIColor lightGrayColor];
#else
    return (id) [NSColor lightGrayColor];
#endif
#pragma clang diagnostic pop
}
+(MAIColor*)whiteColor{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [UIColor whiteColor];
#else
    return (id) [NSColor whiteColor];
#endif
#pragma clang diagnostic pop
}
+(MAIColor*)grayColor{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [UIColor grayColor];
#else
    return (id) [NSColor grayColor];
#endif
#pragma clang diagnostic pop
}
+(MAIColor*)redColor{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [UIColor redColor];
#else
    return (id) [NSColor redColor];
#endif
#pragma clang diagnostic pop
}
+(MAIColor*)greenColor{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [UIColor greenColor];
#else
    return (id) [NSColor greenColor];
#endif
#pragma clang diagnostic pop
}
+(MAIColor*)blueColor{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [UIColor blueColor];
#else
    return (id) [NSColor blueColor];
#endif
#pragma clang diagnostic pop
}
+(MAIColor*)cyanColor{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [UIColor cyanColor];
#else
    return (id) [NSColor cyanColor];
#endif
#pragma clang diagnostic pop
}
+(MAIColor*)yellowColor{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [UIColor yellowColor];
#else
    return (id) [NSColor yellowColor];
#endif
#pragma clang diagnostic pop
}
+(MAIColor*)magentaColor{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [UIColor magentaColor];
#else
    return (id) [NSColor magentaColor];
#endif
#pragma clang diagnostic pop
}
+(MAIColor*)orangeColor{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [UIColor orangeColor];
#else
    return (id) [NSColor orangeColor];
#endif
#pragma clang diagnostic pop
}
+(MAIColor*)purpleColor{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [UIColor purpleColor];
#else
    return (id) [NSColor purpleColor];
#endif
#pragma clang diagnostic pop
}
+(MAIColor*)brownColor{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [UIColor brownColor];
#else
    return (id) [NSColor brownColor];
#endif
#pragma clang diagnostic pop
}
+(MAIColor*)clearColor{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [UIColor clearColor];
#else
    return (id) [NSColor clearColor];
#endif
#pragma clang diagnostic pop
}

#if TARGET_OS_IPHONE
-(UIColor*) ios
{
    return (UIColor*) self;
}
#else
-(NSColor*) mac
{
    return (NSColor*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation UIColor (MAIConversion)
#else
@implementation NSColor (MAIConversion)
#endif
-(MAIColor*) mai
{
    return (MAIColor*) self;
}
@end

#pragma clang diagnostic pop
