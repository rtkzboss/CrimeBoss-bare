#pragma once
#include "CoreMinimal.h"
#include "IGS_WidgetSubMenuSettingsBase.h"
#include "IGS_SubMenuSoundSettings.generated.h"

class UIGS_WidgetFocusableSlider;
class UIGS_WidgetFocusableSpinBox;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_SubMenuSoundSettings : public UIGS_WidgetSubMenuSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSlider* MasterVolumeSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSlider* SFXVolumeSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSlider* MusicVolumeSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSlider* DialogueVolumeSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSlider* ControllerSpeakerVolumeSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSpinBox* OutputDeviceSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSpinBox* AudioMixSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSpinBox* SoundEnabledSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSpinBox* SoundInBackgroundEnabledSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSpinBox* StreamerModSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSpinBox* RadioDialoguesOutputSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSlider* VoiceChatVolumeSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSpinBox* VoiceChatEnabledSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSpinBox* InputDeviceSpinBox;
    
    UIGS_SubMenuSoundSettings();

};

