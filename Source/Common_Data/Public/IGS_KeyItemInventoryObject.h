#pragma once
#include "CoreMinimal.h"
#include "EIGS_RoomType.h"
#include "IGS_InventoryObjectFramework.h"
#include "IGS_KeyItemInventoryObject.generated.h"

UCLASS(Abstract)
class COMMON_DATA_API UIGS_KeyItemInventoryObject : public UIGS_InventoryObjectFramework {
    GENERATED_BODY()
public:
    UIGS_KeyItemInventoryObject();

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EIGS_RoomType KeyRoomType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 UniqueId;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText UniqueName;
    
};

