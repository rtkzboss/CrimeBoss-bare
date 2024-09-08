#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_NeighborData.generated.h"

class AActor;
class AIGS_RoomBase;

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_NeighborData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    AActor* Entrance;
    
    UPROPERTY(VisibleAnywhere)
    FVector EntrancePoint;
    
    UPROPERTY(VisibleAnywhere)
    AIGS_RoomBase* NeighborRoom;
    
    FIGS_NeighborData();
};

