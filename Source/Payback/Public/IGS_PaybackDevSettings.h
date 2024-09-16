#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "IGS_PaybackDevSettings.generated.h"

class UDataAsset;
class UDataTable;

UCLASS(BlueprintType, DefaultConfig, Config="DeveloperSettings/Dev_PaybackSettings")
class PAYBACK_API UIGS_PaybackDevSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UIGS_PaybackDevSettings();

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UDataAsset> AssetsPreloaderDataAsset;

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UDataTable> CharacterPosesDataTable;

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UDataTable> MetaCutscenesDataTable;

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UDataAsset> CutsceneSubsystemDataAsset;

};
