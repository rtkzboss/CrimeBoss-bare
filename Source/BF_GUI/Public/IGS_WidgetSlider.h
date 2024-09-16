#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "IGS_WidgetSliderBlueprintEventSignature.h"
#include "IGS_WidgetSlider.generated.h"

class USlider;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_WidgetSlider : public UUserWidget {
    GENERATED_BODY()
public:
    UIGS_WidgetSlider();

    UFUNCTION(BlueprintCallable)
    void SetValue(float InValue);

    UFUNCTION(BlueprintCallable)
    void SetRange(const FVector2D& InRange);

protected:
    UFUNCTION()
    void OnValueChanged(float InValue);

    UFUNCTION(BlueprintCallable)
    void MouseDragStart();

    UFUNCTION(BlueprintCallable)
    void MouseDragEnd();

public:
    UFUNCTION(BlueprintCallable)
    float GetValue();

    UFUNCTION(BlueprintCallable)
    FVector2D GetRange();

protected:
    UFUNCTION(BlueprintCallable)
    void ControllerDragStart();

    UFUNCTION(BlueprintCallable)
    void ControllerDragEnd();

public:
    UPROPERTY(BlueprintReadWrite, Instanced)
    USlider* Slider;

    UPROPERTY(BlueprintAssignable)
    FIGS_WidgetSliderBlueprintEventSignature OnValueChangedEvent;

};
