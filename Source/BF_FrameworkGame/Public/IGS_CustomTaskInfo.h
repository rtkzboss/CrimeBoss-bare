#pragma once
#include "CoreMinimal.h"
#include "EIGS_ObjectiveComponentType.h"
#include "IGS_CustomTaskInfo.generated.h"

USTRUCT()
struct BF_FRAMEWORKGAME_API FIGS_CustomTaskInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    EIGS_ObjectiveComponentType ObjectiveCompType;
    
    FIGS_CustomTaskInfo();
};

