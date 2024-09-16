#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTService_FocusOnActor.generated.h"

UCLASS()
class BF_AI_API UIGS_BTService_FocusOnActor : public UBTService {
    GENERATED_BODY()
public:
    UIGS_BTService_FocusOnActor();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector ActorKey;

};
