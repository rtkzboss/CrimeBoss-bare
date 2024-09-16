#include "IGS_SoundImpact.h"
#include "AkComponent.h"

AIGS_SoundImpact::AIGS_SoundImpact(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UAkComponent>(TEXT("AkAudioComponent"));
    (*this).AkComponent = gen;
    (*this).RootComponent = gen;
}

