#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/KismetTextLibrary.h"
#include "Styling/SlateTypes.h"
#include "Blueprint/UserWidget.h"
#include "IGS_WidgetFocusableSliderBlueprintEventSignatureDelegate.h"
#include "IGS_WidgetFocusableSlider.generated.h"

class UIGS_WidgetButtonInternal;
class UIGS_WidgetEditableNumberBox;
class USlider;
class UTextBlock;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_WidgetFocusableSlider : public UUserWidget {
    GENERATED_BODY()
public:
    UIGS_WidgetFocusableSlider();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void UpdateText() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetStepSizeValue(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSpinBoxNameText(FText inSpinBoxNameText);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetSliderStyle(FSliderStyle inNewStyle);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetMinValue(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxValue(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentValue(float InValue);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ScrollRight();
    
    UFUNCTION(BlueprintCallable)
    void ScrollLeft();
    
    UFUNCTION(BlueprintPure)
    float SanitizeValue(float InValue) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void ProcessSettingFontColor(FLinearColor InColor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnValueChanged(float InValue);
    
public:
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UTextBlock* SliderName;
    
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetEditableNumberBox* SliderText;
    
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetButtonInternal* ClickDetector;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText SpinBoxNameText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CurrentValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StepSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LeftThumbstickThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AnalogInputDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ERoundingMode> RoundingMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MinimumFractionalDigits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaximumFractionalDigits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor FontColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor DisabledFontColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor BackgroundColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor DisabledBackgroundColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor NormalButtonColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor HoveredButtonColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor PressedButtonColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor SelectedButtonColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor DisabledButtonColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor NormalImageTint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor HoveredImageTint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor PressedImageTint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor SelectedImageTint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor DisabledImageTint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor NormalBorderTint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor HoveredBorderTint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor PressedBorderTint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor SelectedBorderTint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor DisabledBorderTint;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_WidgetFocusableSliderBlueprintEventSignature OnValueDecreasedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_WidgetFocusableSliderBlueprintEventSignature OnValueIncreasedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_WidgetFocusableSliderBlueprintEventSignature OnValueChangedEvent;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsInFocusPath;
    
protected:
    UPROPERTY(Instanced, VisibleAnywhere, meta=(BindWidget))
    USlider* ValueSlider;
    
};

