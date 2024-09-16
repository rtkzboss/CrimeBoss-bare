#include "IGS_GlobalGASActor.h"
#include "IGS_GetActorByGameplayTagComponent.h"
#include "IGS_GlobalGASComponent.h"

AIGS_GlobalGASActor::AIGS_GlobalGASActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UIGS_GlobalGASComponent>(TEXT("GlobalGASComponent"));
    auto gen2 = CreateDefaultSubobject<UIGS_GetActorByGameplayTagComponent>(TEXT("GetActorByGameplayTagComponent"));
    (*this).GlobalGASComponent = gen;
    (*this).GetActorByGameplayTagComponent = gen2;
}

AIGS_GlobalGASActor* AIGS_GlobalGASActor::GetGlobalGASActor(UObject* inWCO) {
    return nullptr;
}

