#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectTypes.h"
#include "IGS_SpeedMultiplier.generated.h"

class UObject;

USTRUCT()
struct BF_FRAMEWORKBASE_API FIGS_SpeedMultiplier {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    UObject* Owner;
    
    UPROPERTY(VisibleAnywhere)
    FActiveGameplayEffectHandle ActiveGEHandle;
    
    FIGS_SpeedMultiplier();
};

