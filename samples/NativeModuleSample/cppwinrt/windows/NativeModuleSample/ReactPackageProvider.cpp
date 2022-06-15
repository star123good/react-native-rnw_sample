// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. 

#include "pch.h"
#include "ReactPackageProvider.h"
#if __has_include("ReactPackageProvider.g.cpp")
#include "ReactPackageProvider.g.cpp"
#endif

#include "FancyMath.h"
#include "DataMarshallingExamples.h"
#include "AsyncMethodExamples.h"

using namespace winrt::Microsoft::ReactNative;

namespace winrt::NativeModuleSample::implementation
{

void ReactPackageProvider::CreatePackage(IReactPackageBuilder const &packageBuilder) noexcept
{
    AddAttributedModules(packageBuilder);
}

} // namespace winrt::NativeModuleSample::implementation
