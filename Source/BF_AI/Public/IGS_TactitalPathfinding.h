#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "IGS_TactitalPathfinding.generated.h"

class UTacticalPathfindingFilterBase;
class UTacticalPathfindingNode;
class UTacticalPathfindingNodeRoom;

UCLASS()
class BF_AI_API UIGS_TactitalPathfinding : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UIGS_TactitalPathfinding();

protected:
    UFUNCTION()
    void OnPopulationFinished();

    UPROPERTY()
    TArray<UTacticalPathfindingNode*> m_Nodes;

    UPROPERTY()
    TArray<UTacticalPathfindingNodeRoom*> m_RoomNodes;

    UPROPERTY()
    TArray<UTacticalPathfindingNode*> m_TmpPath;

    UPROPERTY()
    TMap<uint8, UTacticalPathfindingFilterBase*> m_FiltersCache;

};
