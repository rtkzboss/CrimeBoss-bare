#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTTask_DisruptGadget.generated.h"

UCLASS()
class BF_AI_API UIGS_BTTask_DisruptGadget : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector DisruptingGadget;
    
public:
    UIGS_BTTask_DisruptGadget();

};

