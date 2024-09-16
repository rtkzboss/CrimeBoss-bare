#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_DialogueAsyncActionInterface.h"
#include "BTTask_ReactToOffence.generated.h"

UCLASS()
class BF_AI_API UBTTask_ReactToOffence : public UBTTaskNode, public IIGS_DialogueAsyncActionInterface {
    GENERATED_BODY()
public:
    UBTTask_ReactToOffence();

    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector OffenceDataKey;


    // Fix for true pure virtual functions not being implemented
};
