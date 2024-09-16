#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "IGS_InputDevSettings.generated.h"

class UIGS_InputActionDefaultKeysDataAsset;
class UIGS_InputActionMapDataAsset;
class UIGS_InputDeviceIconsDataAsset;

UCLASS(BlueprintType, DefaultConfig, Config="DeveloperSettings/Dev_InputSettings")
class BF_INPUT_API UIGS_InputDevSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UIGS_InputDevSettings();

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UIGS_InputActionMapDataAsset> InputActionMap;

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UIGS_InputDeviceIconsDataAsset> InputActionIconMapPS5;

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UIGS_InputDeviceIconsDataAsset> InputActionIconMapXBSX;

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UIGS_InputDeviceIconsDataAsset> InputActionIconMapSteamDeck;

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UIGS_InputDeviceIconsDataAsset> InputActionIconMapPC;

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UIGS_InputActionDefaultKeysDataAsset> InputActionDefaultKeys;

};
