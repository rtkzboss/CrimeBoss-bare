#pragma once
#include "CoreMinimal.h"
#include "IGS_TPP_TransitionsAnimationsDefinition.generated.h"

class UBlendSpaceBase;

USTRUCT(BlueprintType)
struct BF_ANIMATIONS_API FIGS_TPP_TransitionsAnimationsDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UBlendSpaceBase* TransitionToWalkL;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UBlendSpaceBase* TransitionToWalkCrouchL;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UBlendSpaceBase* TransitionToWalkR;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UBlendSpaceBase* TransitionToWalkCrouchR;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UBlendSpaceBase* TransitionToIdleL;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UBlendSpaceBase* TransitionToIdleR;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UBlendSpaceBase* TransitionToIdleL_Crouch;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UBlendSpaceBase* TransitionToIdleR_Crouch;
    
    FIGS_TPP_TransitionsAnimationsDefinition();
};

