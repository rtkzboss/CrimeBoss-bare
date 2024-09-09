#pragma once
#include "CoreMinimal.h"
#include "IGS_WidgetSubMenuSettingsBase.h"
#include "IGS_SubMenuGameSettings.generated.h"

class UIGS_WidgetFocusableSlider;
class UIGS_WidgetFocusableSpinBox;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_SubMenuGameSettings : public UIGS_WidgetSubMenuSettingsBase {
    GENERATED_BODY()
public:
    UIGS_SubMenuGameSettings();

    UFUNCTION(BlueprintCallable)
    void RefreshMenuBackgroundSpinBox();
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSpinBox* LanguagePickerSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSpinBox* DialoguesLimitSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSpinBox* SubtitlesEnabledSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSpinBox* HitMarkerSettingSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSpinBox* ShowCrosshairSettingSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSpinBox* ShowFPSSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSpinBox* ShowPingSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSpinBox* UseWhiteBakerSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSpinBox* UseAltDollarDragonSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSpinBox* HalloweenModeSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSpinBox* MenuBackgroundsSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSpinBox* ColorVisionDeficiencySpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSlider* ColorVisionDeficiencySeveritySlider;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSlider* HeadBobIntensitySlider;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSpinBox* HeisterColorsInSubtitlesSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSpinBox* PoliceChatterSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSpinBox* TinnitusSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSpinBox* TutorialsDisplayModeSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSpinBox* FriendlyOutlineSpinBox;
    
};

