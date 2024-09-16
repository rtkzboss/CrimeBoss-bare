#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_AIWeaponDef.h"
#include "IGS_AIMeleeDef.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AIMeleeDef : public FIGS_AIWeaponDef {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float ActivationRange;

    UPROPERTY(EditAnywhere)
    FFloatInterval Cooldown;

    FIGS_AIMeleeDef();
};
