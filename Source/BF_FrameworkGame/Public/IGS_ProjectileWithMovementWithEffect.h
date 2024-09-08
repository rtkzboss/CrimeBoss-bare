#pragma once
#include "CoreMinimal.h"
#include "IGS_ProjectileWithMovement.h"
#include "IGS_ProjectileWithMovementWithEffect.generated.h"

class UAudioComponent;
class UParticleSystemComponent;

UCLASS(Abstract, Config=Inherit)
class BF_FRAMEWORKGAME_API AIGS_ProjectileWithMovementWithEffect : public AIGS_ProjectileWithMovement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UParticleSystemComponent* ParticleSystemMovement;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UAudioComponent* AudioComponentMovement;
    
public:
    AIGS_ProjectileWithMovementWithEffect(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnParticleMovementFinished(UParticleSystemComponent* inParticleSystemComponent);
    
};

