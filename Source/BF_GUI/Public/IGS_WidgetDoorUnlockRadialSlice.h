#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "IGS_WidgetRadialSliceBase.h"
#include "Templates/SubclassOf.h"
#include "IGS_WidgetDoorUnlockRadialSlice.generated.h"

class UIGS_GUIController;
class UIGS_InventoryObjectFramework;
class UImage;
class UTexture2D;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_WidgetDoorUnlockRadialSlice : public UIGS_WidgetRadialSliceBase {
    GENERATED_BODY()
public:
    UIGS_WidgetDoorUnlockRadialSlice();

    UFUNCTION(BlueprintImplementableEvent)
    void SetUnlockMethod_Internal(FGameplayTag inMethod);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetImageInternal(const TSoftObjectPtr<UTexture2D>& inTexture);
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor WieldedColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor WieldedHoverColor;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayTag UnlockMethod;
    
    UPROPERTY(BlueprintReadOnly)
    TSubclassOf<UIGS_InventoryObjectFramework> RequiredItem;
    
    UPROPERTY(BlueprintReadWrite)
    FName UnlockName;
    
    UPROPERTY(BlueprintReadWrite)
    bool bCanBeUsed;
    
    UPROPERTY(Instanced)
    UIGS_GUIController* GUIController;
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UImage* SliceImage;
    
};

