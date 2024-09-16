#include "PaybackShielderCharacter.h"
#include "IGS_WeakSpotComponent.h"

APaybackShielderCharacter::APaybackShielderCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UIGS_WeakSpotComponent>(TEXT("WeakSpot Component"));
    (*this).m_WeakSpotComponent = gen;
}

