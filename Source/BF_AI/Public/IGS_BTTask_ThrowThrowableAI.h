#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GameplayTagContainer.h"
#include "IGS_BTTask_ThrowBase.h"
#include "IGS_BTTask_ThrowThrowableAI.generated.h"

class UIGS_ThrowableInventoryObject;

UCLASS(BlueprintType)
class BF_AI_API UIGS_BTTask_ThrowThrowableAI : public UIGS_BTTask_ThrowBase {
    GENERATED_BODY()
public:
    UIGS_BTTask_ThrowThrowableAI();

    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<UIGS_ThrowableInventoryObject> Throwable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag ThrowTag;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag AfterFireCooldownTag;
    
};

