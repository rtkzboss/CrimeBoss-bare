#pragma once
#include "CoreMinimal.h"
#include "IGS_AIModifiableFloatDataDef.h"
#include "IGS_AIUnitBaseDataModifiers.generated.h"

USTRUCT()
struct BF_FRAMEWORKGAME_API FIGS_AIUnitBaseDataModifiers {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FIGS_AIModifiableFloatDataDef HP;

    UPROPERTY(EditAnywhere)
    FIGS_AIModifiableFloatDataDef Shield;

    UPROPERTY(EditAnywhere)
    FIGS_AIModifiableFloatDataDef WeaponDamage;

    UPROPERTY(EditAnywhere)
    FIGS_AIModifiableFloatDataDef MeleeDamage;

    UPROPERTY(EditAnywhere)
    FIGS_AIModifiableFloatDataDef WeaponDispersion;

    UPROPERTY(EditAnywhere)
    FIGS_AIModifiableFloatDataDef MovementSpeed;

    UPROPERTY(EditAnywhere)
    FIGS_AIModifiableFloatDataDef CoverStickiness;

    UPROPERTY(EditAnywhere)
    FIGS_AIModifiableFloatDataDef ReactionIntensity;

    FIGS_AIUnitBaseDataModifiers();
};
