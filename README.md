## Installation (source build)
Expect to use ~150 GB of disk space for a development Editor build.

1. Install [Visual Studio 2022](https://visualstudio.microsoft.com/vs/community/) and [git](https://github.com/git-guides/install-git).
1. [Link your GitHub account to your Epic Games account](https://dev.epicgames.com/documentation/en-us/unreal-engine/downloading-unreal-engine-source-code#accessingunrealenginesourcecodeongithub).
1. Clone my Unreal Engine 4.27 fork and its submodules.
    ```
    git clone --recursive https://github.com/rtkzboss/UnrealEngine --depth 1
    ```
1. Clone this repo and its submodules inside the `UnrealEngine` folder:
    ```
    cd UnrealEngine
    git clone --recursive https://github.com/rtkzboss/CrimeBoss-bare CrimeBoss
    ```
1. Download the latest [AssetRegistry.bin](https://github.com/ingamestudios/CB-UGCPlugin/releases/latest/download/AssetRegistry.bin) from the IGS repository and install it to `CrimeBoss\Releases\Update11\WindowsNoEditor\AssetRegistry.bin`. You may have to create these folders.
1. [Install Wwise 2021.1.14.8108](https://www.audiokinetic.com/en/download/), including the Windows Visual Studio 2022 deployment platform.
1. [Integrate the Wwise Unreal plugin](https://www.audiokinetic.com/en/library/wwise_launcher/?source=InstallGuide&id=integrating_wwise_into_an_unreal_project) version 2021.1.14.8108.2656 for Unreal Engine version 4.27 into the `CrimeBoss` project.
1. Run `Setup.bat` in the root `UnrealEngine` folder. (This may take a while.)
1. Run `GenerateProjectFiles.bat` in the root `UnrealEngine` folder.
1. Open `UE4.sln` in Visual Studio 2022 and build the `AutomationTool` project as well as the `CrimeBoss` project. (This will take quite a while.)
1. Start the `CrimeBoss` project from Visual Studio (<kbd>Ctrl+F5</kbd>).
