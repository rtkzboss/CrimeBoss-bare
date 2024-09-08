#pragma once
#include "CoreMinimal.h"
#include "IGS_HolsterAnimationInfo.generated.h"

USTRUCT(BlueprintType)
struct FIGS_HolsterAnimationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float CurrentHolster;
    
    BF_ANIMATIONS_API FIGS_HolsterAnimationInfo();
};

