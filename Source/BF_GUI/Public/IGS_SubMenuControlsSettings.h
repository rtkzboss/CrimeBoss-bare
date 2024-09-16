#pragma once
#include "CoreMinimal.h"
#include "IGS_WidgetSubMenuSettingsBase.h"
#include "IGS_SubMenuControlsSettings.generated.h"

class UIGS_WidgetFocusableSlider;
class UIGS_WidgetFocusableSpinBox;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_SubMenuControlsSettings : public UIGS_WidgetSubMenuSettingsBase {
    GENERATED_BODY()
public:
    UIGS_SubMenuControlsSettings();

    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetFocusableSpinBox* InvertVerticalLookSpinBox;

    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetFocusableSlider* ControllerSensitivitySlider;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ControllerSensitivityMultiplier;

    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetFocusableSlider* ControllerLeftDeadzoneSlider;

    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetFocusableSlider* ControllerRightDeadzoneSlider;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DeadzoneMultiplier;

    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetFocusableSlider* ControllerADSMultiplierSlider;

    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetFocusableSpinBox* ControllerLinearExpoSpinBox;

    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetFocusableSpinBox* ControllerVibrationIntensitySpinBox;

    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetFocusableSpinBox* ControllerUseOverReloadPrioSpinBox;

    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetFocusableSpinBox* ControllerSwitchPingAndDropItemSpinBox;

    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetFocusableSlider* ControllerAimAssistIntensitySlider;

    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetFocusableSpinBox* InvertMouseSpinBox;

    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetFocusableSlider* MouseSensitivitySlider;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MouseSensitivityMultiplier;

    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetFocusableSpinBox* SprintToggleSpinBox;

    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetFocusableSpinBox* CrouchToggleSpinBox;

    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetFocusableSpinBox* AimToggleSpinBox;

    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetFocusableSpinBox* SprintInterruptReloadToggleSpinBox;

    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetFocusableSpinBox* MagCheckInterruptSprintToggleSpinBox;

};
