#pragma once
#include "CoreMinimal.h"
#include "IGS_TrafficDirectionState.generated.h"

USTRUCT()
struct BF_FRAMEWORKGAME_API FIGS_TrafficDirectionState {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool IsLocked;
    
    UPROPERTY()
    bool Reversed;
    
    FIGS_TrafficDirectionState();
};

