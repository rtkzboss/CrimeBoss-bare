#pragma once
#include "CoreMinimal.h"
#include "IGS_TacticalPathfindingEdge.generated.h"

class UTacticalPathfindingNode;

USTRUCT()
struct BF_AI_API FIGS_TacticalPathfindingEdge {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<UTacticalPathfindingNode*> TresspasingNodes;
    
    FIGS_TacticalPathfindingEdge();
};

