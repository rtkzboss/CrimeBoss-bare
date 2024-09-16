#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTService_WantsUseMountedGun.generated.h"

UCLASS()
class BF_AI_API UIGS_BTService_WantsUseMountedGun : public UBTService {
    GENERATED_BODY()
public:
    UIGS_BTService_WantsUseMountedGun();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector MountedGunKey;

};
