#pragma once
#include "CoreMinimal.h"
#include "IGS_InterestPointHolder.h"
#include "GameplayTagContainer.h"
#include "IGS_AICommand.h"
#include "IGS_AICommandPlayAnimation.generated.h"

UCLASS()
class BF_AI_API UIGS_AICommandPlayAnimation : public UIGS_AICommand {
    GENERATED_BODY()
public:
    UIGS_AICommandPlayAnimation();

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag AnimationTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AnimationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIGS_InterestPointHolder LookAt;
    
};

