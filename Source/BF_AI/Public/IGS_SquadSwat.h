#pragma once
#include "CoreMinimal.h"
#include "IGS_SquadBase.h"
#include "IGS_SquadSwat.generated.h"

class AIGS_DefendPointBase;
class AIGS_RoomBase;
class UIGS_RoomPathfindingComponent;
class UIGS_SquadAggroComponent;
class UIGS_SquadSpeedSynchronizationComponent;

UCLASS(Abstract)
class BF_AI_API AIGS_SquadSwat : public AIGS_SquadBase {
    GENERATED_BODY()
public:
    AIGS_SquadSwat(const FObjectInitializer& ObjectInitializer);

protected:
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UIGS_RoomPathfindingComponent* RoomPathfindingComponent;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UIGS_SquadSpeedSynchronizationComponent* SpeedSynchronizationComponent;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UIGS_SquadAggroComponent* SquadAggroComponent;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<AIGS_RoomBase*> EmptyRoomArray;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    AIGS_DefendPointBase* defendPoint;
    
};

