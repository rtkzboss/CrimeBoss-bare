#include "IGS_CoverPointActor.h"
#include "IGS_CoverPointComponent.h"
#include "IGS_CoverPointComponentsManager.h"
#include "Components/SceneComponent.h"

AIGS_CoverPointActor::AIGS_CoverPointActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UIGS_CoverPointComponent>(TEXT("CoverPointComponent"));
    auto gen2 = CreateDefaultSubobject<UIGS_CoverPointComponentsManager>(TEXT("CoverPointComponentsManager"));
    auto gen3 = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    (*this).CoverPointComponent = gen;
    (*this).CoverPointComponentsManager = gen2;
    (*this).RootComponent = gen3;
    if (gen) gen->SetupAttachment(gen3);
}

UCoverPoint* AIGS_CoverPointActor::GetCoverPoint() const {
    return nullptr;
}

