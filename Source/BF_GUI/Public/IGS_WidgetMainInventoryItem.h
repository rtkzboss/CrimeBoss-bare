#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "IGS_WidgetMainInventoryItem.generated.h"

class AIGS_PlayerControllerRoot;
class UIGS_InventoryObjectFramework;
class UIGS_ListInventory;
class UImage;
class UTextBlock;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_WidgetMainInventoryItem : public UUserWidget {
    GENERATED_BODY()
public:
    UIGS_WidgetMainInventoryItem();

    UFUNCTION(BlueprintCallable)
    void TemporaryOnClickItem();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetupInventory(UIGS_ListInventory* inInventory);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetItemWielded(bool inIsWielded) const;
    
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TWeakObjectPtr<UIGS_InventoryObjectFramework> Item;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 ItemSlotID;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UImage* ItemImage;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UTextBlock* WieldedText;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UTextBlock* StackSizeText;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TWeakObjectPtr<AIGS_PlayerControllerRoot> OwningPlayer;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    TWeakObjectPtr<UIGS_ListInventory> OwningPlayerInventory;
    
};

