#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTService_FocusOnOffence.generated.h"

UCLASS()
class BF_AI_API UIGS_BTService_FocusOnOffence : public UBTService {
    GENERATED_BODY()
public:
    UIGS_BTService_FocusOnOffence();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector OffenceDataKey;
    
};

