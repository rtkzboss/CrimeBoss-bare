#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EIGS_WeaponVisibilityType.h"
#include "IGS_AIBaseSniperTierData.generated.h"

USTRUCT()
struct BF_FRAMEWORKGAME_API FIGS_AIBaseSniperTierData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float HitChance;

    UPROPERTY(EditAnywhere)
    FFloatInterval HiddenTimeInterval;

    UPROPERTY(EditAnywhere)
    float CompromisedRange;

    UPROPERTY(EditAnywhere)
    EIGS_WeaponVisibilityType WeaponVisibilityType;

    FIGS_AIBaseSniperTierData();
};
