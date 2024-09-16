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
    UIGS_SubMenuSoundSettings();

    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetFocusableSlider* MasterVolumeSpinBox;

    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetFocusableSlider* SFXVolumeSpinBox;

    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetFocusableSlider* MusicVolumeSpinBox;

    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetFocusableSlider* DialogueVolumeSpinBox;

    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetFocusableSlider* ControllerSpeakerVolumeSpinBox;

    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetFocusableSpinBox* OutputDeviceSpinBox;

    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetFocusableSpinBox* AudioMixSpinBox;

    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetFocusableSpinBox* SoundEnabledSpinBox;

    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetFocusableSpinBox* SoundInBackgroundEnabledSpinBox;

    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetFocusableSpinBox* StreamerModSpinBox;

    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetFocusableSpinBox* RadioDialoguesOutputSpinBox;

    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetFocusableSlider* VoiceChatVolumeSpinBox;

    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetFocusableSpinBox* VoiceChatEnabledSpinBox;

    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetFocusableSpinBox* InputDeviceSpinBox;

};
