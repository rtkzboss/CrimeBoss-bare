#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "Templates/SubclassOf.h"
#include "IGS_WidgetPingRadialMenu.generated.h"

class AIGS_PlayerControllerRoot;
class UCanvasPanel;
class UIGS_GUIController;
class UIGS_WidgetPingRadialSlice;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_WidgetPingRadialMenu : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    TArray<UIGS_WidgetPingRadialSlice*> RadialMenuSlices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<UIGS_WidgetPingRadialSlice>> PingCommandWidgetClasses;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxItemCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MinimalItemCountRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RadiusIncreasePerItem;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ClampRadiusPercentage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EffectiveRadiusPercentage;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float CurrentRadius;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float CurrentSliceAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AnalogDeadzone;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UCanvasPanel* RadialMenuCanvasPanel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D SliceSlotSize;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UIGS_WidgetPingRadialSlice* CurrentlyHoveredSlice;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TWeakObjectPtr<AIGS_PlayerControllerRoot> OwningPlayer;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    TWeakObjectPtr<UIGS_GUIController> GUIController;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector2D AnalogMousePos;
    
public:
    UIGS_WidgetPingRadialMenu();

};

