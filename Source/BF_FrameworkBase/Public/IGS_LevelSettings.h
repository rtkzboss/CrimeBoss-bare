#pragma once
#include "CoreMinimal.h"
#include "IGS_LevelSettings.generated.h"

class UIGS_TempWaveManagerData;
class UIGS_TerritoryData;

USTRUCT(BlueprintType)
struct FIGS_LevelSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PlayerSpawnDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CivilianDensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 AmountOfBots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 RandomNumberOfBots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UIGS_TerritoryData* TerritoryData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UIGS_TempWaveManagerData* WaveManagerData;
    
    BF_FRAMEWORKBASE_API FIGS_LevelSettings();
};

