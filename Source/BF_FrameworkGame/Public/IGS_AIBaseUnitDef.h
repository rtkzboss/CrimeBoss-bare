#pragma once
#include "CoreMinimal.h"
#include "IGS_AILoadoutHolder.h"
#include "IGS_AIUnitBaseDataDefaults.h"
#include "IGS_AIBaseUnitDef.generated.h"

USTRUCT()
struct BF_FRAMEWORKGAME_API FIGS_AIBaseUnitDef {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FIGS_AIUnitBaseDataDefaults Stats;

    UPROPERTY(EditDefaultsOnly)
    FIGS_AILoadoutHolder Loadout;

    FIGS_AIBaseUnitDef();
};
