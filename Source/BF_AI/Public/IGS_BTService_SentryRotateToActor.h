#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTService_SentryRotateToActor.generated.h"

UCLASS()
class BF_AI_API UIGS_BTService_SentryRotateToActor : public UBTService {
    GENERATED_BODY()
public:
    UIGS_BTService_SentryRotateToActor();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector TargetActor;

};
