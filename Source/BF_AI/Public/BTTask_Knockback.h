#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GameplayTagContainer.h"
#include "BTTask_Knockback.generated.h"

UCLASS()
class BF_AI_API UBTTask_Knockback : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_Knockback();

protected:
    UPROPERTY(EditAnywhere)
    bool bKnockbackFromLocation;

    UPROPERTY(EditAnywhere)
    bool bKnockbackFromActor;

    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector Actor;

    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector Location;

    UPROPERTY(EditAnywhere)
    FGameplayTag Forward;

    UPROPERTY(EditAnywhere)
    FGameplayTag Backward;

    UPROPERTY(EditAnywhere)
    FGameplayTag Left;

    UPROPERTY(EditAnywhere)
    FGameplayTag Right;

};
