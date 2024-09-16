#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterfaceExport.h"
#include "IGS_ImpactTypeObject.h"
#include "IGS_ImpactBase.h"
#include "Templates/SubclassOf.h"
#include "IGS_ParticleImpact.generated.h"

class UNiagaraComponent;
class UParticleSystemComponent;
class USceneComponent;

UCLASS()
class BF_IMPACTS_API AIGS_ParticleImpact : public AIGS_ImpactBase, public INiagaraParticleCallbackHandler {
    GENERATED_BODY()
public:
    AIGS_ParticleImpact(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnParticleSystemFinished(UParticleSystemComponent* inParticleComponent);

    UFUNCTION()
    void OnNiagaraSystemFinished(UNiagaraComponent* inNiagaraComponent);

    UPROPERTY(Instanced, VisibleAnywhere)
    USceneComponent* SceneComponent;

    UPROPERTY(Instanced, VisibleAnywhere)
    UParticleSystemComponent* ParticleComponent;

    UPROPERTY(Instanced, VisibleAnywhere)
    UNiagaraComponent* NiagaraComponent;

    UPROPERTY()
    TSubclassOf<UIGS_ImpactTypeObject> ParticleDecalID;


    // Fix for true pure virtual functions not being implemented
};
