#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_Screen.h"
#include "IGS_ScreenEventDelegate.h"
#include "EIGS_WheelMenuType.h"
#include "IGS_SwitchToWheelTypeRequestDelegate.h"
#include "Templates/SubclassOf.h"
#include "IGS_WidgetRadialMenuBase.generated.h"

class AIGS_PlayerControllerRoot;
class UCanvasPanel;
class UIGS_GUIController;
class UIGS_WidgetRadialSliceBase;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_WidgetRadialMenuBase : public UIGS_Screen {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_WheelMenuType WheelMenuType;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FIGS_ScreenEvent OnWheelClose;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_SwitchToWheelTypeRequest OnSwitchToWheelTypeRequested;
    
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bIsClosed;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    TArray<UIGS_WidgetRadialSliceBase*> RadialMenuSlices;
    
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
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float SliceOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AnalogDeadzone;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UCanvasPanel* RadialMenuCanvasPanel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UIGS_WidgetRadialSliceBase> WidgetRadialSliceClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D SliceSlotSize;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UIGS_WidgetRadialSliceBase* CurrentlyHoveredSlice;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TWeakObjectPtr<AIGS_PlayerControllerRoot> OwningPlayer;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    TWeakObjectPtr<UIGS_GUIController> GUIController;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector2D AnalogMousePos;
    
public:
    UIGS_WidgetRadialMenuBase();

    UFUNCTION(BlueprintCallable)
    void RequestSwitchToWheelType(EIGS_WheelMenuType inType);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSliceHovered(UIGS_WidgetRadialSliceBase* inSlice, int32 inIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClose();
    
    UFUNCTION(BlueprintImplementableEvent)
    void InitWheel();
    
protected:
    UFUNCTION(BlueprintPure)
    int32 GetItemCount();
    
};

