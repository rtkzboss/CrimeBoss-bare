#include "IGS_CharacterPaperDoll.h"
#include "AkComponent.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "Components/SceneComponent.h"

AIGS_CharacterPaperDoll::AIGS_CharacterPaperDoll(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    auto gen2 = CreateDefaultSubobject<USkeletalMeshComponentBudgeted>(TEXT("BaseMesh"));
    auto gen3 = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    (*this).RootSceneComponent = gen;
    (*this).BaseMesh = gen2;
    (*this).AkComponent = gen3;
    (*this).TeamSide = EIGS_TeamSideEnum::TS_Unknown;
    (*this).HeadComponentReference.ComponentProperty = TEXT("head");
    (*this).BodyComponentReference.ComponentProperty = TEXT("Body");
    (*this).RootComponent = gen;
    if (gen2) gen2->SetupAttachment(gen);
    if (gen3) gen3->SetupAttachment(gen2);
}



void AIGS_CharacterPaperDoll::SaveHeadSnapshot() {
}





USkeletalMeshComponent* AIGS_CharacterPaperDoll::GetHeadComp() {
    return nullptr;
}

USkeletalMeshComponent* AIGS_CharacterPaperDoll::GetBodyComp() {
    return nullptr;
}

