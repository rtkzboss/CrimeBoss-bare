#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTService_EvaluateDisruptingGadgets.generated.h"

class UEnvQuery;

UCLASS()
class BF_AI_API UIGS_BTService_EvaluateDisruptingGadgets : public UBTService {
    GENERATED_BODY()
public:
    UIGS_BTService_EvaluateDisruptingGadgets();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BestGadget;

    UPROPERTY(EditAnywhere)
    UEnvQuery* QueryTemplate;

};
