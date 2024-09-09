#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_WidgetRadialSliceBase.h"
#include "IGS_WidgetWeaponRadialSlice.generated.h"

class UIGS_InventoryObjectFramework;
class UIGS_ListInventory;
class UImage;
class UTextBlock;
class UTexture2D;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_WidgetWeaponRadialSlice : public UIGS_WidgetRadialSliceBase {
    GENERATED_BODY()
public:
    UIGS_WidgetWeaponRadialSlice();

    UFUNCTION(BlueprintImplementableEvent)
    void SetImageInternal(const TSoftObjectPtr<UTexture2D>& inTexture);
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor WieldedColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor WieldedHoverColor;
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UImage* SliceImage;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UTextBlock* SlotBindText;
    
    UPROPERTY(BlueprintReadOnly)
    FText WeaponName;
    
    UPROPERTY(BlueprintReadOnly)
    UIGS_InventoryObjectFramework* WieldableInventoryObject;
    
    UPROPERTY(BlueprintReadWrite)
    UTexture2D* WieldableIconTexture;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 RootSlotID;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bIsWielded;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 SlotBind;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    TWeakObjectPtr<UIGS_ListInventory> OwningPlayerInventory;
    
};

