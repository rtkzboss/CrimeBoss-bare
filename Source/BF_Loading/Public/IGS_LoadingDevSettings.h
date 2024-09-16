#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "IGS_LoadingDevSettings.generated.h"

class UDataTable;
class UIGS_LevelTransitionDataAsset;
class UIGS_LoadingScreenDataAsset;

UCLASS(BlueprintType, DefaultConfig, Config="DeveloperSettings/Dev_LoadingSettings")
class BF_LOADING_API UIGS_LoadingDevSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UIGS_LoadingDevSettings();

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UDataTable> LoadingSetupDataTable;

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UDataTable> LoadingScreenTipsDataTable;

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UIGS_LevelTransitionDataAsset> LevelTransitionDataAsset;

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UIGS_LoadingScreenDataAsset> LoadingScreenDataAsset;

};
