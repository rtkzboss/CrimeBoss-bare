#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "IGS_WidgetGridContainerSlot.generated.h"

class UIGS_WidgetGridContainer;
class UImage;
class USizeBox;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_WidgetGridContainerSlot : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor NormalColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor NormalOccupiedColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor HoverColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor HoverOccupiedColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor DropOkColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor DropErrorColor;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 ContainerSlotRow;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 ContainerSlotColumn;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 ContainerSlotId;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 ItemRootSlotId;
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    USizeBox* SlotSizeBox;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UImage* SlotImage;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    TWeakObjectPtr<UIGS_WidgetGridContainer> OwningContainer;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bIsOccupied;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bIsMouseOver;
    
public:
    UIGS_WidgetGridContainerSlot();

    UFUNCTION(BlueprintCallable)
    void SetIsOccupied(bool inOccupied);
    
    UFUNCTION(BlueprintPure)
    bool GetIsOccupied() const;
    
};

