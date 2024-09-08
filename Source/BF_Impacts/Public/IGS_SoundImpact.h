#pragma once
#include "CoreMinimal.h"
#include "IGS_ImpactBase.h"
#include "IGS_SoundImpact.generated.h"

class UAkAudioEvent;
class UAkComponent;

UCLASS()
class BF_IMPACTS_API AIGS_SoundImpact : public AIGS_ImpactBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, Transient)
    UAkComponent* AkComponent;
    
    UPROPERTY(Transient)
    UAkAudioEvent* AkAudioEvent;
    
public:
    AIGS_SoundImpact(const FObjectInitializer& ObjectInitializer);

};

