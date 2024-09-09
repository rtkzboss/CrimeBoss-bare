#pragma once
#include "CoreMinimal.h"
#include "IGS_BTTask_SquadBase.h"
#include "IGS_BTTask_SquadSwatBase.generated.h"

class UIGS_RoomPathfindingComponent;
class UIGS_SquadAggroComponent;
class UIGS_SquadSpeedSynchronizationComponent;

UCLASS()
class BF_AI_API UIGS_BTTask_SquadSwatBase : public UIGS_BTTask_SquadBase {
    GENERATED_BODY()
public:
    UIGS_BTTask_SquadSwatBase();

protected:
    UPROPERTY(Instanced, VisibleAnywhere)
    UIGS_RoomPathfindingComponent* RoomPathfindingComponent;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UIGS_SquadSpeedSynchronizationComponent* SpeedSyncroComponent;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UIGS_SquadAggroComponent* SquadAggroComponent;
    
};

