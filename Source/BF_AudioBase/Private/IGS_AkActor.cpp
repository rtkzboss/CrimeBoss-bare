#include "IGS_AkActor.h"
#include "AkComponent.h"
#include "IGS_SignificanceComponent.h"

AIGS_AkActor::AIGS_AkActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UIGS_SignificanceComponent>(TEXT("SignificanceComponent"));
    auto gen2 = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    (*this).SignificanceComponent = gen;
    (*this).AkComponent = gen2;
    (*this).RootComponent = gen2;
}


UAkComponent* AIGS_AkActor::GetAkComponent() const {
    return nullptr;
}

