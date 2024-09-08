#pragma once
#include "CoreMinimal.h"
#include "IGS_TrafficLoopSegment.h"
#include "IGS_TrafficLoop.generated.h"

USTRUCT(BlueprintType)
struct BF_AI_API FIGS_TrafficLoop {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TArray<FIGS_TrafficLoopSegment> Segments;
    
    UPROPERTY(VisibleAnywhere)
    float Lenght;
    
    FIGS_TrafficLoop();
};

