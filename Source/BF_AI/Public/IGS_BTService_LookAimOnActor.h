#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTService_LookAimOnActor.generated.h"

UCLASS()
class BF_AI_API UIGS_BTService_LookAimOnActor : public UBTService {
    GENERATED_BODY()
public:
    UIGS_BTService_LookAimOnActor();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector ActorKey;
    
};

