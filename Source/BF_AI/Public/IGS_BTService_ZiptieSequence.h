#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTService_ZiptieSequence.generated.h"

UCLASS()
class BF_AI_API UIGS_BTService_ZiptieSequence : public UBTService {
    GENERATED_BODY()
public:
    UIGS_BTService_ZiptieSequence();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector CivToZiptieKey;
    
};

