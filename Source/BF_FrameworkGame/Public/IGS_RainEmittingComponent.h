#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "IGS_RainEmittingComponent.generated.h"

class UParticleSystem;
class UParticleSystemComponent;

UCLASS(ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_RainEmittingComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* WorldRainEffectParticleSystem;
    
private:
    UPROPERTY(Instanced, Transient)
    UParticleSystemComponent* m_ParticleComponent;
    
public:
    UIGS_RainEmittingComponent(const FObjectInitializer& ObjectInitializer);

};

