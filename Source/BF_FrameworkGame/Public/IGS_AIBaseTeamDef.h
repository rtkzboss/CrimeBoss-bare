#pragma once
#include "CoreMinimal.h"
#include "EIGS_TeamSideEnum.h"
#include "IGS_AIBaseTeamDef.generated.h"

USTRUCT()
struct BF_FRAMEWORKGAME_API FIGS_AIBaseTeamDef {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    EIGS_TeamSideEnum TeamSide;

    FIGS_AIBaseTeamDef();
};
