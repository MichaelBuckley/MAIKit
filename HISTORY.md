# Version History

### 71.0.0 - 2015-09-13

* Updated to Xcode 7 Beta 1, which added many `__kindof` annotations

### 70.0.6 - 2015-09-13

* Updated to Xcode 7 GM, which introduced the following changes
 * Many nullability annotations were added
 * The `action` property was removed from `MAIMenuItem`, since is is nullable on OS X, but not on iOS
 * The `bezierPathByReversingPath` property was added to `MAIBezierPath`
 * The `viewLoaded` property was added to `MAIViewController` and `MAISplitViewController`
 * The `firstResponder` property was added to `MAICollectionView`
 * `numberOfSections` has been changed from a method to a property on `MAICollectionView`


### 70.0.5 — 2015-07-21

* Moved class and protocol declarations to their own header
* Updated to Xcode 7 Beta 4, which added the following method to MAILayoutManagerDelegate

```Objective-C
- (BOOL)layoutManager:(id<MAILayoutManagerProtocol>)layoutManager
shouldSetLineFragmentRect:(inout CGRect *)lineFragmentRect
lineFragmentUsedRect:(inout CGRect *)lineFragmentUsedRect
baselineOffset:(inout CGFloat *)baselineOffset
inTextContainer:(id<MAITextContainerProtocol>)textContainer
forGlyphRange:(NSRange)glyphRange
```

### 70.0.4 — 2015-07-12

* Initial public release
