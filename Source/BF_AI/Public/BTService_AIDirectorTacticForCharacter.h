#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTService_AIDirectorTacticForCharacter.generated.h"

UCLASS()
class BF_AI_API UBTService_AIDirectorTacticForCharacter : public UBTService {
    GENERATED_BODY()
public:
    UBTService_AIDirectorTacticForCharacter();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector WaveManagerTacticKey;
    
};

