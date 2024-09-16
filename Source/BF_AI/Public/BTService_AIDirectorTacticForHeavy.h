#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTService_AIDirectorTacticForHeavy.generated.h"

UCLASS()
class BF_AI_API UBTService_AIDirectorTacticForHeavy : public UBTService {
    GENERATED_BODY()
public:
    UBTService_AIDirectorTacticForHeavy();

    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector WaveManagerTacticKey;

};
