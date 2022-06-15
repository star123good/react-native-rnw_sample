---
id: version-0.66-IReactViewHost
title: IReactViewHost
original_id: IReactViewHost
---

Kind: `interface`



> **EXPERIMENTAL**

Used to implement a non-XAML platform ReactRootView.



## Methods
### AttachViewInstance
[`IAsyncAction`](https://docs.microsoft.com/uwp/api/Windows.Foundation.IAsyncAction) **`AttachViewInstance`**([`IReactViewInstance`](IReactViewInstance) operation)

Attaches IReactViewInstance to the IReactViewHost.



### DetachViewInstance
[`IAsyncAction`](https://docs.microsoft.com/uwp/api/Windows.Foundation.IAsyncAction) **`DetachViewInstance`**()

Detaches IReactViewInstance from the IReactViewHost.



### ReloadViewInstance
[`IAsyncAction`](https://docs.microsoft.com/uwp/api/Windows.Foundation.IAsyncAction) **`ReloadViewInstance`**()

Reloads the IReactViewInstance if it is attached.



### ReloadViewInstanceWithOptions
[`IAsyncAction`](https://docs.microsoft.com/uwp/api/Windows.Foundation.IAsyncAction) **`ReloadViewInstanceWithOptions`**([`ReactViewOptions`](ReactViewOptions) operation)

Reloads IReactViewInstance if it is attached with a new set of options.



### UnloadViewInstance
[`IAsyncAction`](https://docs.microsoft.com/uwp/api/Windows.Foundation.IAsyncAction) **`UnloadViewInstance`**()

Unloads the attached IReactViewInstance.






## Referenced by
- [`ReactCoreInjection`](ReactCoreInjection)
