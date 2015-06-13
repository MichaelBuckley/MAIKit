#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

#import "MAIFontDescriptor.h"

@implementation MAIFontDescriptor

+(Class) class
{
#if TARGET_OS_IPHONE
    return [UIFontDescriptor class];
#else
    return [NSFontDescriptor class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAIFontDescriptor*) [UIFontDescriptor alloc];
#else
    return (MAIFontDescriptor*) [NSFontDescriptor alloc];
#endif
}
+(MAIFontDescriptor*)fontDescriptorWithName:(NSString*)fontName size:(CGFloat)size{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [UIFontDescriptor fontDescriptorWithName:fontName size:size];
#else
    return (id) [NSFontDescriptor fontDescriptorWithName:fontName size:size];
#endif
#pragma clang diagnostic pop
}

#if TARGET_OS_IPHONE
-(UIFontDescriptor*) ios
{
    return (UIFontDescriptor*) self;
}
#else
-(NSFontDescriptor*) mac
{
    return (NSFontDescriptor*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation UIFontDescriptor (MAIConversion)
#else
@implementation NSFontDescriptor (MAIConversion)
#endif
-(MAIFontDescriptor*) mai
{
    return (MAIFontDescriptor*) self;
}
@end

#pragma clang diagnostic pop
