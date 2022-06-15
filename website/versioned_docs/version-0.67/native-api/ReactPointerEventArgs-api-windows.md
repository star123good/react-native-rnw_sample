---
id: version-0.67-ReactPointerEventArgs
title: ReactPointerEventArgs
original_id: ReactPointerEventArgs
---

Kind: `class`



> **EXPERIMENTAL**

Event arguments wrapper for [`IViewManagerWithPointerEvents`](IViewManagerWithPointerEvents).

## Properties
### Args
`readonly`  [`PointerRoutedEventArgs`](https://docs.microsoft.com/uwp/api/Windows.UI.Xaml.Input.PointerRoutedEventArgs) `Args`

> **EXPERIMENTAL**

Gets the wrapped routed pointer event.

### Kind
 [`PointerEventKind`](PointerEventKind) `Kind`

> **EXPERIMENTAL**

Gets or sets the pointer event kind. The only valid override is [`PointerEventKind.CaptureLost`](PointerEventKind#capturelost) to [`PointerEventKind.End`](PointerEventKind#end) to handle cases where PointerCaptureLost events on ReactRootView can be safely treated as PointerReleased events, e.g., for pointer events on selectable text.

### Target
 Object `Target`

> **EXPERIMENTAL**

Gets or sets the React target for the pointer event.






## Referenced by
- [`IViewManagerWithPointerEvents`](IViewManagerWithPointerEvents)
