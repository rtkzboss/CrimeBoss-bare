#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTService_EvaluatePickupWeapons.generated.h"

class UEnvQuery;

UCLASS()
class BF_AI_API UIGS_BTService_EvaluatePickupWeapons : public UBTService {
    GENERATED_BODY()
public:
    UIGS_BTService_EvaluatePickupWeapons();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BestWeaponPickup;
    
    UPROPERTY(EditAnywhere)
    UEnvQuery* WeaponPickupEQS;
    
};

