#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTService_UseMountedGun.generated.h"

UCLASS()
class BF_AI_API UIGS_BTService_UseMountedGun : public UBTService {
    GENERATED_BODY()
public:
    UIGS_BTService_UseMountedGun();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector MountedGunKey;
    
};

