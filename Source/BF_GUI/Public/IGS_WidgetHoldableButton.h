#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Layout/Geometry.h"
#include "Input/Events.h"
#include "Styling/SlateColor.h"
#include "Components/SlateWrapperTypes.h"
#include "Components/Button.h"
#include "IGS_WidgetButtonSimple.h"
#include "IGS_WidgetHoldableButton.generated.h"

class UBorder;
class UIGS_WidgetInputKeyIcon;
class UImage;
class UMaterialInstanceDynamic;
class UTextBlock;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_WidgetHoldableButton : public UIGS_WidgetButtonSimple {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HoldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 HoldTicksPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor ProgressColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateColor TextColor;
    
    UPROPERTY(BlueprintAssignable)
    FOnButtonClickedEvent OnHoldFinished;
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UBorder* HoldBorder;
    
    UPROPERTY(BlueprintReadWrite)
    UMaterialInstanceDynamic* ProgressMaterial;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UImage* Progress;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UTextBlock* ButtonText;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UIGS_WidgetInputKeyIcon* InputKeyIcon;
    
public:
    UIGS_WidgetHoldableButton();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnHoldTick_Internal(float InProgress);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHoldStarted_Internal();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnHoldStarted();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnHoldFinished_Internal();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHoldCancelled_Internal();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnHoldCancelled();
    
private:
    UFUNCTION()
    FEventReply OnHoldBorderMouseButtonUp(FGeometry InMyGeometry, const FPointerEvent& InMouseEvent);
    
    UFUNCTION()
    FEventReply OnHoldBorderMouseButtonDown(FGeometry Geometry, const FPointerEvent& PointerEvent);
    
protected:
    UFUNCTION()
    void NativePreConstruct();
    
private:
    UFUNCTION()
    void HandleHoldTick();
    
    UFUNCTION()
    void HandleHoldFinished();
    
};

