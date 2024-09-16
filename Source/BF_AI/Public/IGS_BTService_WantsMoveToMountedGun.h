#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTService_WantsMoveToMountedGun.generated.h"

UCLASS()
class BF_AI_API UIGS_BTService_WantsMoveToMountedGun : public UBTService {
    GENERATED_BODY()
public:
    UIGS_BTService_WantsMoveToMountedGun();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BestMountedGunKey;

    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector MountedGunKey;

};
