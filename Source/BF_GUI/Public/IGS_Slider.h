#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Input/Events.h"
#include "Types/SlateEnums.h"
#include "Layout/Geometry.h"
#include "Styling/SlateTypes.h"
#include "Components/Widget.h"
#include "OnIGSSliderControllerCaptureBeginEventDelegate.h"
#include "OnIGSSliderControllerCaptureEndEventDelegate.h"
#include "OnIGSSliderFloatValueChangedEventDelegate.h"
#include "OnIGSSliderKeyDownEventDelegate.h"
#include "OnIGSSliderMouseCaptureBeginEventDelegate.h"
#include "OnIGSSliderMouseCaptureEndEventDelegate.h"
#include "IGS_Slider.generated.h"

UCLASS()
class BF_GUI_API UIGS_Slider : public UWidget {
    GENERATED_BODY()
public:
    UIGS_Slider();

    UFUNCTION(BlueprintCallable)
    void SetValue(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetStepSize(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSliderHandleColor(FLinearColor InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSliderBarColor(FLinearColor InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMinValue(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxValue(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetLocked(bool InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetIndentHandle(bool InValue);
    
    UFUNCTION(BlueprintCallable)
    void ScrollRight();
    
    UFUNCTION(BlueprintCallable)
    void ScrollLeft();
    
    UFUNCTION(BlueprintPure)
    float SanitizeValue(float InValue) const;
    
    UFUNCTION(BlueprintPure)
    float GetValue() const;
    
    UFUNCTION(BlueprintPure)
    float GetNormalizedValue() const;
    
    UFUNCTION(BlueprintCallable)
    bool AnalogValueChange(const FGeometry& InGeometry, const FAnalogInputEvent& InAnalogEvent);
    
    UPROPERTY(EditAnywhere)
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UseInteger;
    
    UPROPERTY()
    UWidget::FGetFloat ValueDelegate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSliderStyle WidgetStyle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EOrientation> Orientation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor SliderBarColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor SliderHandleColor;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool IndentHandle;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool Locked;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool MouseUsesStep;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool RequiresControllerLock;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StepSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AnalogInputDelay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SlideIncreaseSpeed;
    
    UPROPERTY()
    float CurrentAnalogInputDelay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsFocusable;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LeftThumbstickThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IncreaseSpeedOverTime;
    
    UPROPERTY(BlueprintAssignable)
    FOnIGSSliderMouseCaptureBeginEvent OnMouseCaptureBegin;
    
    UPROPERTY(BlueprintAssignable)
    FOnIGSSliderMouseCaptureEndEvent OnMouseCaptureEnd;
    
    UPROPERTY(BlueprintAssignable)
    FOnIGSSliderControllerCaptureBeginEvent OnControllerCaptureBegin;
    
    UPROPERTY(BlueprintAssignable)
    FOnIGSSliderControllerCaptureEndEvent OnControllerCaptureEnd;
    
    UPROPERTY(BlueprintAssignable)
    FOnIGSSliderFloatValueChangedEvent OnValueChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnIGSSliderKeyDownEvent OnKeyDown;
    
};

