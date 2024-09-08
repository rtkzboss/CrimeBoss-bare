#pragma once
#include "CoreMinimal.h"
#include "EIGS_TeamSideEnum.h"
#include "EIGS_GRWaitType.h"
#include "IGS_GeneralReactionSpecHolder.h"
#include "IGS_GeneralReactionsDef.h"
#include "IGS_GeneralReactionTeamHolder.generated.h"

USTRUCT()
struct BF_FRAMEWORKGAME_API FIGS_GeneralReactionTeamHolder {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, EditFixedSize)
    TMap<EIGS_GRWaitType, FIGS_GeneralReactionsDef> Defaults;
    
    UPROPERTY(EditAnywhere)
    TMap<EIGS_TeamSideEnum, FIGS_GeneralReactionSpecHolder> TeamOverrides;
    
    FIGS_GeneralReactionTeamHolder();
};

