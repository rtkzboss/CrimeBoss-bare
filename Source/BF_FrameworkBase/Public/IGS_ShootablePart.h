#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "ScalableFloat.h"
#include "IGS_ShootablePart.generated.h"

USTRUCT(BlueprintType)
struct FIGS_ShootablePart {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FComponentReference VisibleComponent;

    UPROPERTY(EditAnywhere)
    FComponentReference CollisionComponent;

    UPROPERTY(EditAnywhere)
    FScalableFloat ReducesDamage;

    UPROPERTY(EditAnywhere)
    FScalableFloat DamagePenetration;

    UPROPERTY(EditAnywhere)
    FScalableFloat ChanceToShootOff;

    BF_FRAMEWORKBASE_API FIGS_ShootablePart();
};
