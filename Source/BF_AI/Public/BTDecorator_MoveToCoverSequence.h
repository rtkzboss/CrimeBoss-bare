#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_MoveToCoverSequence.generated.h"

UCLASS()
class BF_AI_API UBTDecorator_MoveToCoverSequence : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_MoveToCoverSequence();

    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector ReactToThreathKey;

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector UpdateCoverKey;

    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BestCoverKey;

    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector CoverKey;

    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector MoveToPositionKey;

    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector IsDodgingKey;

    UPROPERTY(EditAnywhere)
    float m_RefreshTimeStartMin;

    UPROPERTY(EditAnywhere)
    float m_RefreshTimeStartMax;

    UPROPERTY(EditAnywhere)
    float m_RefreshTimeMin;

    UPROPERTY(EditAnywhere)
    float m_RefreshTimeMax;

    UPROPERTY(EditAnywhere)
    bool m_CancelOnThreathReaction;

    UPROPERTY(EditAnywhere)
    float m_ReactionDefaultTime;

};
