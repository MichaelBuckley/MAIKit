#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

#import "MAITextView.h"

@implementation MAITextView

+(Class) class
{
#if TARGET_OS_IPHONE
    return [UITextView class];
#else
    return [NSTextView class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAITextView*) [UITextView alloc];
#else
    return (MAITextView*) [NSTextView alloc];
#endif
}

#if TARGET_OS_IPHONE
-(UITextView*) ios
{
    return (UITextView*) self;
}
#else
-(NSTextView*) mac
{
    return (NSTextView*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation UITextView (MAIConversion)
#else
@implementation NSTextView (MAIConversion)
#endif
-(MAITextView*) mai
{
    return (MAITextView*) self;
}
@end

#pragma clang diagnostic pop
