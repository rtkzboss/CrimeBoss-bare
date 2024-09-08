#pragma once
#include "CoreMinimal.h"
#include "IGS_ArmsLeaningAnimationOneFrameParams.generated.h"

USTRUCT(BlueprintType)
struct FIGS_ArmsLeaningAnimationOneFrameParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool StartAiming;
    
    UPROPERTY(BlueprintReadOnly)
    bool StopAiming;
    
    UPROPERTY(BlueprintReadOnly)
    bool StartLeaning;
    
    UPROPERTY(BlueprintReadOnly)
    bool StopLeaning;
    
    UPROPERTY(BlueprintReadOnly)
    bool StartCrouching;
    
    UPROPERTY(BlueprintReadOnly)
    bool StopCrouching;
    
    BF_ANIMATIONS_API FIGS_ArmsLeaningAnimationOneFrameParams();
};

