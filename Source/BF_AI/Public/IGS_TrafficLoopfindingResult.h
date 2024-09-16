#pragma once
#include "CoreMinimal.h"
#include "IGS_TrafficLoop.h"
#include "IGS_TrafficLoopfindingResult.generated.h"

USTRUCT(BlueprintType)
struct BF_AI_API FIGS_TrafficLoopfindingResult {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TArray<FIGS_TrafficLoop> ClassicLoops;

    UPROPERTY(VisibleAnywhere)
    TArray<FIGS_TrafficLoop> ReversedLoops;

    FIGS_TrafficLoopfindingResult();
};
