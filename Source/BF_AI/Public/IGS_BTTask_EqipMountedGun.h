#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTTask_EqipMountedGun.generated.h"

UCLASS()
class BF_AI_API UIGS_BTTask_EqipMountedGun : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BestMountedGunKey;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector MountedGunKey;
    
public:
    UIGS_BTTask_EqipMountedGun();

};

