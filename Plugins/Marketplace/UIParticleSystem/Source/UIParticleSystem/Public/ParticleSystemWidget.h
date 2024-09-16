#pragma once
#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "ParticleSystemWidget.generated.h"

class AActor;
class UParticleSystem;
class UParticleSystemComponent;
class UUIParticleComponent;

UCLASS()
class UIPARTICLESYSTEM_API UParticleSystemWidget : public UWidget {
    GENERATED_BODY()
public:
    UParticleSystemWidget();

    UFUNCTION(BlueprintCallable)
    void SetReactivate(bool bActivateAndReset);

    UFUNCTION(BlueprintPure)
    UParticleSystemComponent* GetParticleComponent() const;

    UFUNCTION(BlueprintCallable)
    void ActivateParticles(bool bActive, bool bReset);

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UParticleSystem* ParticleSystemTemplate;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAutoActivate;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bReactivate;

private:
    UPROPERTY(Instanced)
    UUIParticleComponent* WorldParticleComponent;

    UPROPERTY()
    AActor* WorldParticleActor;

};
