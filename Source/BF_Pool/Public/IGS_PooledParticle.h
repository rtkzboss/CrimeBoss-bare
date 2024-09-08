#pragma once
#include "CoreMinimal.h"
#include "IGS_PoolableBaseActor.h"
#include "IGS_PooledParticle.generated.h"

class UParticleSystemComponent;

UCLASS()
class BF_POOL_API AIGS_PooledParticle : public AIGS_PoolableBaseActor {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced, Transient, VisibleAnywhere)
    UParticleSystemComponent* ParticleComponent;
    
    AIGS_PooledParticle(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnParticleSystemFinished(UParticleSystemComponent* inParticleComponent);
    
};

