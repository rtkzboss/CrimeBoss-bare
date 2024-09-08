#pragma once
#include "CoreMinimal.h"
#include "IGS_TrafficLoopSegment.generated.h"

class UIGS_TrafficPathComponent;

USTRUCT()
struct BF_AI_API FIGS_TrafficLoopSegment {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced, VisibleAnywhere)
    UIGS_TrafficPathComponent* Segment;
    
    UPROPERTY(VisibleAnywhere)
    bool Reversed;
    
    FIGS_TrafficLoopSegment();
};

