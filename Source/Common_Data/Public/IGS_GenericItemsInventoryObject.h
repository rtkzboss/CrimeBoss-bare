#pragma once
#include "CoreMinimal.h"
#include "EIGS_ItemWeight.h"
#include "IGS_InventoryObjectFramework.h"
#include "IGS_GenericItemsInventoryObject.generated.h"

UCLASS(Abstract)
class COMMON_DATA_API UIGS_GenericItemsInventoryObject : public UIGS_InventoryObjectFramework {
    GENERATED_BODY()
public:
    UIGS_GenericItemsInventoryObject();

    UFUNCTION(BlueprintPure)
    static int32 GetItemWeightValue(EIGS_ItemWeight inWeight);
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EIGS_ItemWeight LootWeight;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 UniversalID;
    
};

