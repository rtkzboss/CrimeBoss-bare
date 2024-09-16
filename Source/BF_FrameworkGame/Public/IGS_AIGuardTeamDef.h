#pragma once
#include "CoreMinimal.h"
#include "EIGS_SecurityVariationType.h"
#include "IGS_AIBaseTeamDef.h"
#include "IGS_AIGuardBaseDataDefaults.h"
#include "IGS_AIGuardTierDef.h"
#include "IGS_AIGuardTeamDef.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AIGuardTeamDef : public FIGS_AIBaseTeamDef {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<EIGS_SecurityVariationType, FIGS_AIGuardTierDef> Variations;

    UPROPERTY(EditAnywhere)
    FIGS_AIGuardBaseDataDefaults DefaultStats;

    FIGS_AIGuardTeamDef();
};
