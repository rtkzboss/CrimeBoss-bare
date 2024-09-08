#pragma once
#include "CoreMinimal.h"
#include "IGS_HitInfo.h"
#include "IGS_DelayedDamageData.generated.h"

USTRUCT()
struct BF_FRAMEWORKGAME_API FIGS_DelayedDamageData {
    GENERATED_BODY()
public:
    UPROPERTY()
    float HealthChanged;
    
    UPROPERTY()
    float ShieldChanged;
    
    UPROPERTY()
    FIGS_HitInfo HitInfo;
    
    UPROPERTY()
    float ApplicationTime;
    
    FIGS_DelayedDamageData();
};

