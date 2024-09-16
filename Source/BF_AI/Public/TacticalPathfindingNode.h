#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_TacticalPathfindingEdge.h"
#include "TacticalPathfindingNode.generated.h"

UCLASS(Abstract)
class BF_AI_API UTacticalPathfindingNode : public UObject {
    GENERATED_BODY()
public:
    UTacticalPathfindingNode();

    UPROPERTY()
    TMap<UTacticalPathfindingNode*, FIGS_TacticalPathfindingEdge> Edges;

};
