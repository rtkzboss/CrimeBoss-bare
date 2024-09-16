#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_OffenceStrikes.generated.h"

UCLASS()
class BF_AI_API UBTDecorator_OffenceStrikes : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_OffenceStrikes();

protected:
    UPROPERTY(EditAnywhere)
    int32 DesiredStrikes;

    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector OffenceDataKey;

};
