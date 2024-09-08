#pragma once
#include "CoreMinimal.h"
#include "EIGS_TeamSideEnum.h"
#include "IGS_KillTaskInfo.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_KillTaskInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    EIGS_TeamSideEnum TrackedTeamSide;
    
    FIGS_KillTaskInfo();
};

