#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTService_ApproachWaypointRotation.generated.h"

UCLASS()
class BF_AI_API UIGS_BTService_ApproachWaypointRotation : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector WaypointKey;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector ApproachNotifiedKey;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector OutRotationKey;
    
public:
    UIGS_BTService_ApproachWaypointRotation();

};

