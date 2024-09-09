#pragma once
#include "CoreMinimal.h"
#include "EIGS_InputAction.h"
#include "CommonButtonBase.h"
#include "UObject/NoExportTypes.h"
#include "Layout/Geometry.h"
#include "Input/Events.h"
#include "Styling/SlateColor.h"
#include "Components/SlateWrapperTypes.h"
#include "Components/Button.h"
#include "IGS_GenericButtonEventBlueprintSignatureDelegate.h"
#include "IGS_GenericButton.generated.h"

class UBorder;
class UIGS_WidgetInputKeyIcon;
class UImage;
class UMaterialInstanceDynamic;
class UNamedSlot;
class UTextBlock;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_GenericButton : public UCommonButtonBase {
    GENERATED_BODY()
public:
    UIGS_GenericButton();

    UFUNCTION(BlueprintCallable)
    void SimulateClick();
    
    UFUNCTION(BlueprintCallable)
    void SetSelected(bool inSelected);
    
    UFUNCTION(BlueprintCallable)
    void SetHasContent(bool inHasContent);
    
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
    UFUNCTION(BlueprintCallable)
    void InitInputActionIcon();
    
private:
    UFUNCTION()
    void HandleHoldTick();
    
    UFUNCTION()
    void HandleHoldFinished();
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HoldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 HoldTicksPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor ProgressColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateColor TextColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsHoldable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool HasContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverrideInputActionsByDevice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_InputAction BoundInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_InputAction KeyboardMouseInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_InputAction GamepadInputAction;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnButtonClickedEvent OnHoldFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FIGS_GenericButtonEventBlueprintSignature OnReleasedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FIGS_GenericButtonEventBlueprintSignature OnClickedEvent;
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, meta=(BindWidget))
    UBorder* HoldBorder;
    
    UPROPERTY(BlueprintReadWrite)
    UMaterialInstanceDynamic* ProgressMaterial;
    
    UPROPERTY(BlueprintReadOnly, Instanced, meta=(BindWidget))
    UImage* Progress;
    
    UPROPERTY(BlueprintReadOnly, Instanced, meta=(BindWidget))
    UNamedSlot* ContentSlot;
    
    UPROPERTY(BlueprintReadOnly, Instanced, meta=(BindWidget))
    UTextBlock* ButtonText;
    
    UPROPERTY(BlueprintReadOnly, Instanced, meta=(BindWidget))
    UIGS_WidgetInputKeyIcon* InputKeyIcon;
    
};

