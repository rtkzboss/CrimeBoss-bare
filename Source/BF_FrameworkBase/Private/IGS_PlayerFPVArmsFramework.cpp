#include "IGS_PlayerFPVArmsFramework.h"
#include "Materials/MaterialParameterCollection.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"

AIGS_PlayerFPVArmsFramework::AIGS_PlayerFPVArmsFramework(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ArmsSkeletalMesh"));
    auto gen2 = CreateDefaultSubobject<USceneComponent>(TEXT("ArmsRoot"));
    static ConstructorHelpers::FObjectFinder<UMaterialParameterCollection> gen3(TEXT("/Game/00_Main/MaterialLibrary/Common/MPC_GlobalsCharactersWeapons.MPC_GlobalsCharactersWeapons"));
    (*this).WieldableMPC = gen3.Object;
    (*this).ArmsSkeletalMesh = gen;
    (*this).ArmsRootComponent = gen2;
    (*this).PrimaryActorTick.bCanEverTick = true;
    (*this).RootComponent = gen2;
    if (gen) gen->SetupAttachment(gen2);
}

AIGS_GameCharacterFramework* AIGS_PlayerFPVArmsFramework::GetOwningPlayerCharacter() const {
    return nullptr;
}

USkeletalMeshComponent* AIGS_PlayerFPVArmsFramework::GetArmsSkeletalMesh() const {
    return nullptr;
}

