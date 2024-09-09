#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTService_ShoutAtSequence.generated.h"

UCLASS()
class BF_AI_API UIGS_BTService_ShoutAtSequence : public UBTService {
    GENERATED_BODY()
public:
    UIGS_BTService_ShoutAtSequence();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector CharacterToShoutKey;
    
};

