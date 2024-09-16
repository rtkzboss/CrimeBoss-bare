#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTService_CopSolveDesiredWeapon.generated.h"

UCLASS()
class BF_AI_API UIGS_BTService_CopSolveDesiredWeapon : public UBTService {
    GENERATED_BODY()
public:
    UIGS_BTService_CopSolveDesiredWeapon();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector MeleeTypeKey;

    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector DesiredWeaponKey;

};
