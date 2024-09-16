#include "IGS_FireVolume.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"

AIGS_FireVolume::AIGS_FireVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UBoxComponent>(TEXT("Volume"));
    auto gen2 = CreateDefaultSubobject<UNiagaraComponent>(TEXT("FireNiagaraComponent"));
    auto gen3 = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    (*this).HeatRegenPerSecond = 5.000000000e+00f;
    (*this).MaxHeat = 1.000000000e+02f;
    (*this).bAllowRegen = true;
    (*this).Volume = gen;
    (*this).FireNiagaraComponent = gen2;
    (*this).PrimaryActorTick.bCanEverTick = true;
    (*this).RootComponent = gen3;
    if (gen) gen->SetupAttachment(gen3);
    if (gen2) gen2->SetupAttachment(gen3);
}

