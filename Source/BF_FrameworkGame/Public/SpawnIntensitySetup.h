#pragma once
#include "CoreMinimal.h"
#include "SpawnIntensitySetup.generated.h"

USTRUCT(BlueprintType)
struct FSpawnIntensitySetup {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float FakeSpawnUsedPercantage;
    
    UPROPERTY(EditAnywhere)
    float SpawnDelayBetweenWavesCoef;
    
    UPROPERTY(EditAnywhere)
    int32 MaxEnemiesInSceneAddon;
    
    UPROPERTY(EditAnywhere)
    float AssaultDurationAddon;
    
    UPROPERTY(EditAnywhere)
    float EnemyDispersionCoef;
    
    BF_FRAMEWORKGAME_API FSpawnIntensitySetup();
};

