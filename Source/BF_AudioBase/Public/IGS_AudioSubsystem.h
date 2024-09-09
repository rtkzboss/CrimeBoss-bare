#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "IGS_AudioSubsystem.generated.h"

class UIGS_AkVoiceInputComponent;
class UIGS_AudioSubsystemDataAsset;
class UIGS_PersistentAkComponent;

UCLASS()
class BF_AUDIOBASE_API UIGS_AudioSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGS_AudioSubsystem();

private:
    UFUNCTION()
    void OnControllerHeadphonesConnectionChanged(bool inIsConnected);
    
    UPROPERTY(Instanced)
    UIGS_PersistentAkComponent* PersistenAudioAkComponent;
    
    UPROPERTY(Instanced)
    UIGS_AkVoiceInputComponent* VoiceInputComponent;
    
    UPROPERTY()
    UIGS_AudioSubsystemDataAsset* Data;
    
};

