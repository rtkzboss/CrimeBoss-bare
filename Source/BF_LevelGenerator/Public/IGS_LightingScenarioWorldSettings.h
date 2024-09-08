#pragma once
#include "CoreMinimal.h"
#include "EIGS_LightingScenarioType.h"
#include "IGS_LightingScenarioWorldSettings.generated.h"

class UWorld;

USTRUCT(BlueprintType)
struct BF_LEVELGENERATOR_API FIGS_LightingScenarioWorldSettings {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FString LightingScenarioHelp;
    
    UPROPERTY(EditAnywhere)
    bool bLevelIsPersistent;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UWorld> DefaultLightingScenarioLevel;
    
    UPROPERTY(EditAnywhere)
    bool bUseDefaultScenario;
    
    UPROPERTY(EditAnywhere)
    TMap<EIGS_LightingScenarioType, TSoftObjectPtr<UWorld>> LightingScenarioMapPairs;
    
    FIGS_LightingScenarioWorldSettings();
};

