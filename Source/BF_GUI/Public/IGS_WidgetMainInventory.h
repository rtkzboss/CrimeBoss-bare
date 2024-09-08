#pragma once
#include "CoreMinimal.h"
#include "IGS_ListItemHolder.h"
#include "Blueprint/UserWidget.h"
#include "EIGS_SlotHighlight.h"
#include "Templates/SubclassOf.h"
#include "IGS_WidgetMainInventory.generated.h"

class UIGS_ListInventory;
class UIGS_WidgetDragItem;
class UIGS_WidgetMainInventoryItem;
class UScrollBox;
class UWidgetSwitcher;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_WidgetMainInventory : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UScrollBox* WeaponsScrollBox;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UScrollBox* GadgetsScrollBox;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UScrollBox* ItemsScrollBox;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UScrollBox* LootScrollBox;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UIGS_WidgetMainInventoryItem> WidgetMainInventoryItemClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UIGS_WidgetDragItem> WidgetDragItemClass;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UIGS_ListInventory* OwningInventory;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UWidgetSwitcher* InventoryCategorySwitcher;
    
public:
    UIGS_WidgetMainInventory();

    UFUNCTION(BlueprintCallable)
    void Setup(UIGS_ListInventory* inOwningContainer);
    
    UFUNCTION(BlueprintCallable)
    void SetHighlightItem(int32 inSlotId, EIGS_SlotHighlight inHighlight);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSlotBind(int32 inSlotNumber);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRefreshSlotBinds();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnItemWielded(const FIGS_ListItemHolder& inItem);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnItemRemoved(const FIGS_ListItemHolder& inItem);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnItemAdded(const FIGS_ListItemHolder& inItem);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnContainerItemsUpdated(const TArray<FIGS_ListItemHolder>& inItems);
    
public:
    UFUNCTION()
    void InitItem(FIGS_ListItemHolder inHolder);
    
    UFUNCTION(BlueprintPure)
    UIGS_ListInventory* GetOwningContainer() const;
    
};

