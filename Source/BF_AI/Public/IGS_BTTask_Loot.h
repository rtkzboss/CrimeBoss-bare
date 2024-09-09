#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTTask_Loot.generated.h"

UCLASS()
class BF_AI_API UIGS_BTTask_Loot : public UBTTaskNode {
    GENERATED_BODY()
public:
    UIGS_BTTask_Loot();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BestLootingCollection;
    
};

