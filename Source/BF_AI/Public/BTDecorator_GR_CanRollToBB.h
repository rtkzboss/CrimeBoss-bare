#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GameplayTagContainer.h"
#include "EIGS_TeamSideEnum.h"
#include "BTDecorator_GR_CanRollToBB.generated.h"

UCLASS()
class BF_AI_API UBTDecorator_GR_CanRollToBB : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_GR_CanRollToBB();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector TargetLocation;

    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector OutAnimTag;

    UPROPERTY(EditAnywhere)
    float DotProductTolerance;

    UPROPERTY(EditAnywhere)
    float IgnoreForwardRollChance;

    UPROPERTY(EditAnywhere)
    FGameplayTag ForwardRollCooldownTag;

    UPROPERTY(EditAnywhere)
    FGameplayTag RollShortForward;

    UPROPERTY(EditAnywhere)
    FGameplayTag RollMediumForward;

    UPROPERTY(EditAnywhere)
    FGameplayTag RollLongForward;

    UPROPERTY(EditAnywhere)
    FGameplayTag DodgeShortLeft;

    UPROPERTY(EditAnywhere)
    FGameplayTag DodgeMediumLeft;

    UPROPERTY(EditAnywhere)
    FGameplayTag DodgeShortRight;

    UPROPERTY(EditAnywhere)
    FGameplayTag DodgeMediumRight;

    UPROPERTY(EditAnywhere)
    TSet<EIGS_TeamSideEnum> TeamSidesWithRoll;

};
