#pragma once
#include "CoreMinimal.h"
#include "IGS_FrameworkGameDevSettings_Base.h"
#include "IGS_FrameworkGameDevSettings_Audio.generated.h"

class UAkAudioEvent;
class UAkRtpc;
class UAkSwitchValue;

UCLASS(BlueprintType, Config=Inherit)
class BF_FRAMEWORKGAME_API UIGS_FrameworkGameDevSettings_Audio : public UIGS_FrameworkGameDevSettings_Base {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> ShootStartAudioEvent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> ShootStopAudioEvent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> ShootBurst2AudioEvent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> ShootBurst3AudioEvent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> ShootSingleAudioEvent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> ShootEmptyAudioEvent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UAkSwitchValue> NormalStateAkSwitch;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UAkSwitchValue> SuppressedStateAkSwitch;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UAkSwitchValue> NormalFireModeStateAkSwitch;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UAkSwitchValue> ExtraFireModeStateAkSwitch;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UAkRtpc> WeaponFireRateRtpc;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UAkRtpc> WeaponRoundsLeftRtpc;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UAkRtpc> WeaponAimDownSightRtpc;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> WeaponAimSightsAudioEvent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> WeaponAimHipAudioEvent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UAkSwitchValue> IndoorsVolumeAkSwitch;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UAkSwitchValue> OutdoorsVolumeAkSwitch;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> PingGenericAudioEvent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> PingDangerousAudioEvent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> KeycardDrop;
    
    UIGS_FrameworkGameDevSettings_Audio();

};

