#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AI/Navigation/NavAgentInterface.h"
#include "IGS_NavHintGoal.generated.h"

class AAIController;

UCLASS(NotPlaceable, Transient)
class BF_AI_API AIGS_NavHintGoal : public AActor, public INavAgentInterface {
    GENERATED_BODY()
public:
    AIGS_NavHintGoal(const FObjectInitializer& ObjectInitializer);

private:
    UPROPERTY(Transient)
    AAIController* Querier;

    UPROPERTY(Transient)
    AActor* GoalActor;


    // Fix for true pure virtual functions not being implemented
};
