#pragma once
#include "CoreMinimal.h"
#include "Blueprint/DragDropOperation.h"
#include "IGS_ContainerItemDragOperation.generated.h"

class UIGS_InventoryObjectFramework;

UCLASS()
class BF_GUI_API UIGS_ContainerItemDragOperation : public UDragDropOperation {
    GENERATED_BODY()
public:
    UIGS_ContainerItemDragOperation();

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 ItemRootSlotId;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 DestionationItemRootSlotId;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 OriginatingSlotId;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 CurrentHoveredSlotId;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 CurrentHoveredRow;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 CurrentHoveredColumn;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 ItemRowSize;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 ItemColumnSize;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 ItemRowOffset;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 ItemColumnOffset;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool CanDropInThisSlot;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool DroppingOutsideInventory;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TWeakObjectPtr<UIGS_InventoryObjectFramework> InventoryItem;

};
