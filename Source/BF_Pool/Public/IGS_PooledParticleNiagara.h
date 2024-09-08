#pragma once
#include "CoreMinimal.h"
#include "IGS_PoolableBaseActor.h"
#include "IGS_PooledParticleNiagara.generated.h"

class UNiagaraComponent;
class UNiagaraSystem;

UCLASS(Config=Inherit)
class BF_POOL_API AIGS_PooledParticleNiagara : public AIGS_PoolableBaseActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, Transient, VisibleAnywhere)
    UNiagaraComponent* NiagaraComponent;
    
    AIGS_PooledParticleNiagara(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetTemplate(UNiagaraSystem* inNewTemplate) const;
    
protected:
    UFUNCTION()
    void OnNiagaraSystemFinished(UNiagaraComponent* FinishedComponent);
    
};

