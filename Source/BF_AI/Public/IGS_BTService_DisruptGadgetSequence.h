#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTService_DisruptGadgetSequence.generated.h"

UCLASS()
class BF_AI_API UIGS_BTService_DisruptGadgetSequence : public UBTService {
    GENERATED_BODY()
public:
    UIGS_BTService_DisruptGadgetSequence();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BestGadget;
    
};

