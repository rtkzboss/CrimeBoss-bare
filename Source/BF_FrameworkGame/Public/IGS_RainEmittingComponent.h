#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "IGS_RainEmittingComponent.generated.h"

class UParticleSystem;
class UParticleSystemComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_RainEmittingComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UIGS_RainEmittingComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* WorldRainEffectParticleSystem;
    
private:
    UPROPERTY(Instanced, Transient)
    UParticleSystemComponent* m_ParticleComponent;
    
};

