#pragma once
#include "CoreMinimal.h"
#include "IGS_ImpactSettings.h"
#include "IGS_ParticleImpactSettings.generated.h"

class UIGS_ImpactTypeObject;
class UNiagaraSystem;
class UParticleSystem;

USTRUCT(BlueprintType)
struct BF_IMPACTS_API FIGS_ParticleImpactSettings : public FIGS_ImpactSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UParticleSystem> ParticleSystemPath;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UNiagaraSystem> NiagaraSystemPath;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UIGS_ImpactTypeObject> ParticleDecalIDSoft;
    
    FIGS_ParticleImpactSettings();
};

