#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "IGS_LevelGeneratorDevSettings.generated.h"

class UDataTable;

UCLASS(BlueprintType, DefaultConfig, Config="DeveloperSettings/Dev_LevelGeneratorSettings")
class BF_LEVELGENERATOR_API UIGS_LevelGeneratorDevSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UIGS_LevelGeneratorDevSettings();

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UDataTable> HubPresetsDataTable;

};
