#pragma once
#include "CoreMinimal.h"
#include "EIGS_ObjectiveComponentType.h"
#include "Templates/SubclassOf.h"
#include "IGS_PickupSpawn.generated.h"

class AIGS_PickupActorInventoryItem;
class UIGS_InventoryObjectFramework;

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_PickupSpawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<AIGS_PickupActorInventoryItem> PickupBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UIGS_InventoryObjectFramework> ItemPickup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_ObjectiveComponentType ObjectiveType;
    
    FIGS_PickupSpawn();
};

