#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameUserSettings.h"
#include "IGS_CustomGameUserSettings.generated.h"

class UIGS_ControllerSettings;
class UIGS_CustomGameUserSettings;
class UIGS_GameSettings;
class UIGS_InputBindSettings;
class UIGS_MouseSettings;
class UIGS_RenderingSettings;
class UIGS_SoundSettings;
class UIGS_TogglesSettings;

UCLASS()
class BF_SETTINGS_API UIGS_CustomGameUserSettings : public UGameUserSettings {
    GENERATED_BODY()
public:
    UIGS_CustomGameUserSettings();

    UFUNCTION(BlueprintPure)
    static UIGS_CustomGameUserSettings* Instance();
    
    UPROPERTY()
    UIGS_SoundSettings* SoundSettings;
    
    UPROPERTY()
    UIGS_GameSettings* GameSettings;
    
    UPROPERTY()
    UIGS_RenderingSettings* RenderingSettings;
    
    UPROPERTY()
    UIGS_ControllerSettings* ControllerSettings;
    
    UPROPERTY()
    UIGS_TogglesSettings* TogglesSettings;
    
    UPROPERTY()
    UIGS_MouseSettings* MouseSettings;
    
    UPROPERTY()
    UIGS_InputBindSettings* InputBindSettings;
    
};

