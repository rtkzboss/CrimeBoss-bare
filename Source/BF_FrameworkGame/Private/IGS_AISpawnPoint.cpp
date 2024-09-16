#include "IGS_AISpawnPoint.h"
#include "GameFramework/Actor.h"

AIGS_AISpawnPoint::AIGS_AISpawnPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).IsActive = true;
    (*this).AutomaticStartDelay = 2.000000030e-01f;
    (*this).TeamSideOverride = EIGS_TeamSideEnum::TS_Unknown;
    (*this).GoToScope = 255;
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).SpawnAnimTag, 0)) = TEXT("Anim.Spawn.None");
    (*this).SquadID = -1;
    (*this).CanBeSeen = true;
    (*this).PrimaryActorTick.bCanEverTick = true;
    (*this).PrimaryActorTick.bStartWithTickEnabled = false;
    auto gen2 = AActor::StaticClass()->FindPropertyByName("bHidden");
    CastField<FBoolProperty>(gen2)->SetPropertyValue(&(*gen2->ContainerPtrToValuePtr<uint8>(&(*this), 0)), true);
}

void AIGS_AISpawnPoint::SpawnUnitParametrized(EIGS_TeamSideEnum inTeamSide, uint8 inUnitVariation, EIGS_UnitSpecialization inUnitSpecialization) {
}

void AIGS_AISpawnPoint::SpawnUnit() {
}


