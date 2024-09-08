#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_SwatHeavyInjuredSettings.generated.h"

USTRUCT()
struct BF_FRAMEWORKGAME_API FIGS_SwatHeavyInjuredSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float HealthToInjured;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval InjuredTime;
    
    FIGS_SwatHeavyInjuredSettings();
};

