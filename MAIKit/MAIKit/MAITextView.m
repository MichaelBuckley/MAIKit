#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"

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

- (instancetype)init
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [(UITextView*) self init];
#else
    return (id) [(NSTextView*) self init];
#endif
#pragma clang diagnostic pop
}

-(instancetype)initWithFrame:(CGRect)frame textContainer:(MAITextContainer *)textContainer{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [(UITextView*) self initWithFrame:frame textContainer:textContainer];
#else
    return (id) [(NSTextView*) self initWithFrame:frame textContainer:textContainer];
#endif
#pragma clang diagnostic pop
}-(instancetype)initWithFrame:(CGRect)frame{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [(UITextView*) self initWithFrame:frame];
#else
    return (id) [(NSTextView*) self initWithFrame:frame];
#endif
#pragma clang diagnostic pop
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
