#pragma once
#include "CoreMinimal.h"
#include "IGS_ReactionAnimData.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FIGS_ReactionAnimData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAnimMontage* Anim;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* OptionalOutAnim;
    
    BF_ANIMATIONS_API FIGS_ReactionAnimData();
};

