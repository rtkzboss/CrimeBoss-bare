#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "IGS_HordeModeSettings.generated.h"

class UDataTable;

UCLASS(BlueprintType, DefaultConfig, Config=Game)
class COMMON_DATA_API UIGS_HordeModeSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UIGS_HordeModeSettings();

    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly)
    int32 MaxWave;

    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly)
    int32 SwatSpawnOnWave;

    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly)
    int32 ScudosSpawnOnWave;

    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly)
    int32 MaxSavedMissions;

    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly)
    TSoftObjectPtr<UDataTable> UpgradesTable;

};
