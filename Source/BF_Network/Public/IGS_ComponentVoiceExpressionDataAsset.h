#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EIGS_VoiceExpressionType.h"
#include "IGS_ComponentVoiceExpressionDataAsset.generated.h"

class UAkAudioEvent;
class UAkSwitchValue;
class UPhysicalMaterial;

UCLASS()
class UIGS_ComponentVoiceExpressionDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* PlayVoiceExpressionAkEvent;
    
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* StopVoiceExpressionAkEvent;
    
    UPROPERTY(EditAnywhere)
    UAkSwitchValue* AkSwitchHit;
    
    UPROPERTY(EditAnywhere)
    UAkSwitchValue* AkSwitchDie;
    
    UPROPERTY(EditAnywhere)
    UAkSwitchValue* AkSwitchDeath;
    
    UPROPERTY(EditAnywhere)
    UAkSwitchValue* AkSwitchInstaDeath;
    
    UPROPERTY(EditAnywhere)
    UPhysicalMaterial* HeadshotMaterial;
    
    UPROPERTY(EditAnywhere)
    TMap<EIGS_VoiceExpressionType, float> Cooldowns;
    
    UIGS_ComponentVoiceExpressionDataAsset();

};

