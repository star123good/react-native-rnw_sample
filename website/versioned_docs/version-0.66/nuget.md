---
id: version-0.66-NuGet
title: Using react-native-windows NuGet packages
original_id: NuGet
---

>**This documentation and the underlying platform code is a work in progress.**

The default for react-native-windows has been to build all code from source. This includes building all the code shipped by the react-native-windows team in the npm package from source. This code can be quite large and take a long time to build as well as require a high-performance computer. Some configurations have problems building this code with only 8 GB of memory. Especially if you are used to working only with managed code, this can be a big surprise.

Starting with version 0.64 the team offers experimental NuGet packages that can be used as a replacement of compiling the sources.

> Disclaimer: There are known compatibility issues with [community modules](supported-community-modules.md), as they still rely on building the shared code from source. So the solution still needs to have all the source projects which puts all the build performance problems back.

> Disclaimer: NuGet packages are not compatible with experimental feature [WinUI 3](winui3.md).

The benefit of using NuGet packages is that you get improved compilation times for your Windows project and can develop on a less powerful computer.

The other benefit will be that it will be easier to update your projects to future versions or react-native-windows.

# How to enable on new projects
When you enable react-native-windows on your new project, you can pass `--experimentalNuGetDependency true`:

1. `npx react-native init <projectName>`
1. `pushd <projectName>`
1. `npx react-native-windows-init --overwrite --experimentalNuGetDependency true`

Of course all the other flags still work.

# How to update a previously created project

<!--DOCUSAURUS_CODE_TABS-->
<!--C# projects-->
1. Update the solution file `windows\<projectName>.sln`:
   1. Open the project in Visual Studio
   1. Remove all projects except your own app project
1. Edit the file `windows\ExperimentalFeatures.props`
   1. Set the following to true
      ```xml
      <UseExperimentalNuGet>true</UseExperimentalNuGet>
      ```
1. Edit the project file `windows\<projectName>\<projectName.csproj>`
   1. Remove any `<ProjectReference>` references for `Microsoft.ReactNative.*` projects.
   1. Add a NuGet reference to `Microsoft.ReactNative.Managed`.
      You can do this either through Visual Studio's UI or by adding:
      ```xml
      <ItemGroup>
        <PackageReference Include="Microsoft.ReactNative.Managed">
          <Version>0.66.0</Version>
        </PackageReference>
      </ItemGroup>
      ```
      > Note: You'll need to match the NuGet version with the npm version

1. Update the C# logic for the new [compile-time C# codeGen](native-modules-csharp-codegen.md)

<!--C++ projects-->
1. Update the solution file `windows\<projectName>.sln`:
   1. Open the project in Visual Studio
   1. Remove all projects that are not your project
1. Edit the file `windows\ExperimentalFeatures.props`
   1. Set the following to true
      ```xml
      <UseExperimentalNuGet>true</UseExperimentalNuGet>
      ```
1. Edit the project file `windows\<projectName>\<projectName.vcxproj>`
   1. Remove any `<ProjectReference>` references for `Microsoft.ReactNative.*` projects.
   1. Add NuGet references to the following NuGet packages:
      * `Microsoft.ReactNative`
      * `Microsoft.ReactNative.Cxx`

      C++ packages do not support `PackageReference` so it is not recommended to manually add these dependencies to the project file, instead add the dependencies via the Visual Studio IDE.
      > Note: You'll need to match the NuGet version with the npm version

<!--END_DOCUSAURUS_CODE_TABS-->

# Version match
The versions of the NuGet package in your project must match the npm package version. If you need to update the NuGet packages there is a separate page on [Updating NuGet packages](nuget-update.md)
