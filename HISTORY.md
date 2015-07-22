# Version History

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
