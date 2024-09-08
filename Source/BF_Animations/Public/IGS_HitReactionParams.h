#pragma once
#include "CoreMinimal.h"
#include "IGS_HitReactionParams.generated.h"

USTRUCT()
struct FIGS_HitReactionParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float AnimationHitReactionDuration;
    
    BF_ANIMATIONS_API FIGS_HitReactionParams();
};

