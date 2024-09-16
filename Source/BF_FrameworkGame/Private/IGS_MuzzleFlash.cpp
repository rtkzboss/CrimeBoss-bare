#include "IGS_MuzzleFlash.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/PointLightComponent.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"

AIGS_MuzzleFlash::AIGS_MuzzleFlash(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
    auto gen2 = CreateDefaultSubobject<UNiagaraComponent>(TEXT("MuzzleFlash Niagara Particle"));
    auto gen3 = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("MuzzleFlash Particle"));
    auto gen4 = CreateDefaultSubobject<UNiagaraComponent>(TEXT("MuzzleFlash Niagara Tortilla Particle"));
    auto gen5 = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("MuzzleFlash Tortilla Particle"));
    auto gen6 = CreateDefaultSubobject<UPointLightComponent>(TEXT("MuzzleFlash Light 3PV"));
    auto gen7 = CreateDefaultSubobject<UPointLightComponent>(TEXT("MuzzleFlash Light FPV"));
    (*this).MuzzleFlashRootComponent = gen;
    (*this).ParticleNiagaraComponent = gen2;
    (*this).ParticleComponent = gen3;
    (*this).ParticleNiagaraTortillaComponent = gen4;
    (*this).ParticleTortillaComponent = gen5;
    (*this).LightComponent3PV = gen6;
    (*this).LightComponentFPV = gen7;
    (*this).StartAfterProjectileCount = 6;
    (*this).MuzzleLightStopTime = 3.500000015e-02f;
    (*this).MuzzleStopTime = 2.500000000e-01f;
    (*this).FadeInSpeed = 1.000000000e+00f;
    (*this).FadeOutSpeed = 1.000000000e+00f;
    (*this).PrimaryActorTick.bCanEverTick = true;
    (*this).PrimaryActorTick.bStartWithTickEnabled = false;
    (*this).RootComponent = gen;
    if (gen2) gen2->SetupAttachment(gen);
    if (gen3) gen3->SetupAttachment(gen);
    if (gen4) gen4->SetupAttachment(gen);
    if (gen5) gen5->SetupAttachment(gen);
    if (gen6) gen6->SetupAttachment(gen);
    if (gen7) gen7->SetupAttachment(gen);
}

void AIGS_MuzzleFlash::StopMuzzleFlash_Implementation() {
}

void AIGS_MuzzleFlash::StartMuzzleFlash_Implementation() {
}

