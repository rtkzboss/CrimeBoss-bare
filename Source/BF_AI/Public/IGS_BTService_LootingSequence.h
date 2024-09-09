#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTService_LootingSequence.generated.h"

UCLASS()
class BF_AI_API UIGS_BTService_LootingSequence : public UBTService {
    GENERATED_BODY()
public:
    UIGS_BTService_LootingSequence();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BestLootingCollection;
    
};

