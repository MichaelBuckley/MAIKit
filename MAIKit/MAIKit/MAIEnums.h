typedef NS_ENUM(NSInteger, MAILayoutRelation) {
MAILayoutRelationLessThanOrEqual = -1,
MAILayoutRelationEqual = 0,
MAILayoutRelationGreaterThanOrEqual = 1
};

typedef NS_ENUM(NSInteger, MAILayoutAttribute) {
MAILayoutAttributeLeft = 1,
MAILayoutAttributeRight,
MAILayoutAttributeTop,
MAILayoutAttributeBottom,
MAILayoutAttributeLeading,
MAILayoutAttributeTrailing,
MAILayoutAttributeWidth,
MAILayoutAttributeHeight,
MAILayoutAttributeCenterX,
MAILayoutAttributeCenterY,
MAILayoutAttributeBaseline,
MAILayoutAttributeNotAnAttribute = 0
};

typedef NS_OPTIONS(NSUInteger, MAILayoutFormatOptions) {
MAILayoutFormatAlignAllLeft = (1 << MAILayoutAttributeLeft),
MAILayoutFormatAlignAllRight = (1 << MAILayoutAttributeRight),
MAILayoutFormatAlignAllTop = (1 << MAILayoutAttributeTop),
MAILayoutFormatAlignAllBottom = (1 << MAILayoutAttributeBottom),
MAILayoutFormatAlignAllLeading = (1 << MAILayoutAttributeLeading),
MAILayoutFormatAlignAllTrailing = (1 << MAILayoutAttributeTrailing),
MAILayoutFormatAlignAllCenterX = (1 << MAILayoutAttributeCenterX),
MAILayoutFormatAlignAllCenterY = (1 << MAILayoutAttributeCenterY),
MAILayoutFormatAlignAllBaseline = (1 << MAILayoutAttributeBaseline),
MAILayoutFormatAlignmentMask = 0xFFFF,
MAILayoutFormatDirectionLeadingToTrailing = 0 << 16,
MAILayoutFormatDirectionLeftToRight = 1 << 16,
MAILayoutFormatDirectionRightToLeft = 2 << 16,
MAILayoutFormatDirectionMask = 0x3 << 16
};

typedef NS_ENUM(NSInteger, MAITextLayoutOrientation) {
MAITextLayoutOrientationHorizontal = 0,
MAITextLayoutOrientationVertical = 1
};

typedef NS_ENUM(NSInteger, MAIWritingDirection) {
MAIWritingDirectionNatural = -1,
MAIWritingDirectionLeftToRight = 0,
MAIWritingDirectionRightToLeft = 1
};

typedef NS_OPTIONS(NSUInteger, MAITextStorageEditActions) {
MAITextStorageEditedAttributes = (1 << 0),
MAITextStorageEditedCharacters = (1 << 1)
};

typedef NS_OPTIONS(NSUInteger, MAIRemoteNotificationType) {
MAIRemoteNotificationTypeNone = 0,
MAIRemoteNotificationTypeBadge = 1 << 0,
MAIRemoteNotificationTypeSound = 1 << 1,
MAIRemoteNotificationTypeAlert = 1 << 2
};

typedef NS_ENUM(NSInteger, MAIUserInterfaceLayoutDirection) {
MAIUserInterfaceLayoutDirectionLeftToRight,
MAIUserInterfaceLayoutDirectionRightToLeft
};

typedef NS_ENUM(NSInteger, MAIGestureRecognizerState) {
MAIGestureRecognizerStatePossible,
MAIGestureRecognizerStateBegan,
MAIGestureRecognizerStateChanged,
MAIGestureRecognizerStateEnded,
MAIGestureRecognizerStateCancelled,
MAIGestureRecognizerStateFailed,
MAIGestureRecognizerStateRecognized = MAIGestureRecognizerStateEnded
};

