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

    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSpinBox* InvertVerticalLookSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSlider* ControllerSensitivitySlider;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ControllerSensitivityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSlider* ControllerLeftDeadzoneSlider;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSlider* ControllerRightDeadzoneSlider;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DeadzoneMultiplier;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSlider* ControllerADSMultiplierSlider;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSpinBox* ControllerLinearExpoSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSpinBox* ControllerVibrationIntensitySpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSpinBox* ControllerUseOverReloadPrioSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSpinBox* ControllerSwitchPingAndDropItemSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSlider* ControllerAimAssistIntensitySlider;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSpinBox* InvertMouseSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSlider* MouseSensitivitySlider;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MouseSensitivityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSpinBox* SprintToggleSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSpinBox* CrouchToggleSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSpinBox* AimToggleSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSpinBox* SprintInterruptReloadToggleSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSpinBox* MagCheckInterruptSprintToggleSpinBox;
    
};

