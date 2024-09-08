#pragma once
#include "CoreMinimal.h"
#include "EIGS_WeatherScenarioType.h"
#include "EIGS_WindGeneralDirectionsType.h"
#include "EIGS_WindScenarioType.h"
#include "IGS_WeatherConfig.generated.h"

USTRUCT(BlueprintType)
struct FIGS_WeatherConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_WeatherScenarioType WeatherScenario;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_WindScenarioType WindScenario;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_WindGeneralDirectionsType WindGeneralDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WeatherUpdateInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bDynamicWind: 1;
    
    BF_FRAMEWORKGAME_API FIGS_WeatherConfig();
};

