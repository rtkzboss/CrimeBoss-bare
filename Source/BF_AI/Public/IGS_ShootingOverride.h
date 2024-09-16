#pragma once
#include "CoreMinimal.h"
#include "IGS_InterestPointHolder.h"
#include "EIGS_ShootingOverrideType.h"
#include "IGS_ShootingOverride.generated.h"

USTRUCT(BlueprintType)
struct FIGS_ShootingOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool Active;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FIGS_InterestPointHolder Target;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EIGS_ShootingOverrideType ShootingType;

    BF_AI_API FIGS_ShootingOverride();
};
