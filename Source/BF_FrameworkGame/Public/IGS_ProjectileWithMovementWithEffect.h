#pragma once
#include "CoreMinimal.h"
#include "IGS_ProjectileWithMovement.h"
#include "IGS_ProjectileWithMovementWithEffect.generated.h"

class UAudioComponent;
class UParticleSystemComponent;

UCLASS(Abstract)
class BF_FRAMEWORKGAME_API AIGS_ProjectileWithMovementWithEffect : public AIGS_ProjectileWithMovement {
    GENERATED_BODY()
public:
    AIGS_ProjectileWithMovementWithEffect(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnParticleMovementFinished(UParticleSystemComponent* inParticleSystemComponent);

protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UParticleSystemComponent* ParticleSystemMovement;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UAudioComponent* AudioComponentMovement;

};
