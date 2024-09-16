#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "IGS_AudioDevSettings.generated.h"

class UDataAsset;

UCLASS(BlueprintType, DefaultConfig, Config="DeveloperSettings/Dev_AudioSettings")
class BF_AUDIOBASE_API UIGS_AudioDevSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UIGS_AudioDevSettings();

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UDataAsset> MusicSubsystemDataAsset;

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UDataAsset> AudioSubsystemDataAsset;

};
