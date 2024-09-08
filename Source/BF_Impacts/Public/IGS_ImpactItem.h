#pragma once
#include "CoreMinimal.h"
#include "IGS_DecalImpactSettings.h"
#include "IGS_ParticleImpactSettings.h"
#include "IGS_SoundImpactSettings.h"
#include "Templates/SubclassOf.h"
#include "IGS_ImpactItem.generated.h"

class UAkAudioEvent;
class UIGS_DecalImpactDataAsset;
class UIGS_ImpactTypeObject;
class UNiagaraSystem;
class UParticleSystem;

USTRUCT()
struct BF_IMPACTS_API FIGS_ImpactItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UIGS_ImpactTypeObject> ID;
    
    UPROPERTY(EditAnywhere)
    FIGS_SoundImpactSettings SoundSettings;
    
    UPROPERTY(EditAnywhere)
    FIGS_ParticleImpactSettings ParticleSettings;
    
    UPROPERTY(EditAnywhere)
    FIGS_DecalImpactSettings DecalSettings;
    
    UPROPERTY(Transient)
    UAkAudioEvent* AkAudioEvent;
    
    UPROPERTY(Transient)
    UParticleSystem* ParticleSystem;
    
    UPROPERTY(Transient)
    UNiagaraSystem* NiagaraSystem;
    
    UPROPERTY(Transient)
    TSubclassOf<UIGS_ImpactTypeObject> ParticleDecalID;
    
    UPROPERTY(Transient)
    UIGS_DecalImpactDataAsset* DecalImpactData;
    
    FIGS_ImpactItem();
};

