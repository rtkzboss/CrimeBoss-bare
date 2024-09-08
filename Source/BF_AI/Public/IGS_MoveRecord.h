#pragma once
#include "CoreMinimal.h"
#include "IGS_MoveRecord.generated.h"

class AIGS_SquadFramework;

USTRUCT(BlueprintType)
struct BF_AI_API FIGS_MoveRecord {
    GENERATED_BODY()
public:
    UPROPERTY()
    AIGS_SquadFramework* Squad;
    
    UPROPERTY(VisibleAnywhere)
    float NextAllowMoveTime;
    
    FIGS_MoveRecord();
};

