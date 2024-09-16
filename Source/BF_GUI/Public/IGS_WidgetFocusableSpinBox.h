#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "IGS_WidgetFocusableSpinBoxBlueprintEventSignature.h"
#include "IGS_WidgetFocusableSpinBox.generated.h"

class UIGS_WidgetButton;
class UTextBlock;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_WidgetFocusableSpinBox : public UUserWidget {
    GENERATED_BODY()
public:
    UIGS_WidgetFocusableSpinBox();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void UpdateText() const;

public:
    UFUNCTION(BlueprintCallable)
    void SetUseEnumMode(bool inUseEnumMode);

    UFUNCTION(BlueprintCallable)
    void SetStepSizeValue(int32 InValue);

    UFUNCTION(BlueprintCallable)
    void SetMinValue(int32 InValue);

    UFUNCTION(BlueprintCallable)
    void SetMaxValue(int32 InValue);

    UFUNCTION(BlueprintCallable)
    void SetEnumNames(const TArray<FText>& inEnumNames);

    UFUNCTION(BlueprintCallable)
    void SetCurrentValue(int32 InValue);

protected:
    UFUNCTION(BlueprintCallable)
    void ScrollRight();

    UFUNCTION(BlueprintCallable)
    void ScrollLeft();

private:
    UFUNCTION(BlueprintCallable)
    void ProcessSettingFontColor(FLinearColor InColor);

protected:
    UFUNCTION()
    void OnValueIncreased(int32 InValue);

    UFUNCTION()
    void OnValueDecreased(int32 InValue);

    UFUNCTION()
    void OnValueChanged(int32 InValue);

public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateVisuals();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnRefreshSpinBox();

public:
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UTextBlock* SpinBoxName;

    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UTextBlock* SpinBoxText;

    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetButton* LeftButton;

    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetButton* RightButton;

    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetButton* ClickDetector;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText SpinBoxNameText;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MinValue;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 CurrentValue;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxValue;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 StepSizeValue;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LeftThumbstickThreshold;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AnalogInputDelay;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool UseEnumMode;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FText> EnumNames;

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
    FIGS_WidgetFocusableSpinBoxBlueprintEventSignature OnValueDecreasedEvent;

    UPROPERTY(BlueprintAssignable)
    FIGS_WidgetFocusableSpinBoxBlueprintEventSignature OnValueIncreasedEvent;

    UPROPERTY(BlueprintAssignable)
    FIGS_WidgetFocusableSpinBoxBlueprintEventSignature OnValueChangedEvent;

protected:
    UPROPERTY(BlueprintReadOnly)
    int32 HoveredCount;

};
