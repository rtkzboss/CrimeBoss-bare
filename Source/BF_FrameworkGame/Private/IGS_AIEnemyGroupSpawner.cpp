#include "IGS_AIEnemyGroupSpawner.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "IGS_AISpawnerData.h"

AIGS_AIEnemyGroupSpawner::AIGS_AIEnemyGroupSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    (*this).TeamSide = EIGS_TeamSideEnum::TS_Unknown;
    (*this).AllowedSpecialTypes = 157;
    (*this).IsActive = true;
    (*this).AutomaticStart = true;
    (*this).AutomaticStartDelay = 2.000000030e-01f;
    auto gen2 = TBaseStructure<FInt32Range>::Get()->FindPropertyByName("LowerBound");
    auto gen3 = TBaseStructure<FInt32RangeBound>::Get()->FindPropertyByName("Type");
    (*gen3->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type>>(&(*gen2->ContainerPtrToValuePtr<FInt32RangeBound>(&(*this).EasyAmount, 0)), 0)) = ERangeBoundTypes::Open;
    auto gen4 = TBaseStructure<FInt32Range>::Get()->FindPropertyByName("UpperBound");
    (*gen3->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type>>(&(*gen4->ContainerPtrToValuePtr<FInt32RangeBound>(&(*this).EasyAmount, 0)), 0)) = ERangeBoundTypes::Open;
    (*gen3->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type>>(&(*gen2->ContainerPtrToValuePtr<FInt32RangeBound>(&(*this).MediumAmount, 0)), 0)) = ERangeBoundTypes::Open;
    (*gen3->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type>>(&(*gen4->ContainerPtrToValuePtr<FInt32RangeBound>(&(*this).MediumAmount, 0)), 0)) = ERangeBoundTypes::Open;
    (*gen3->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type>>(&(*gen2->ContainerPtrToValuePtr<FInt32RangeBound>(&(*this).HardAmount, 0)), 0)) = ERangeBoundTypes::Open;
    (*gen3->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type>>(&(*gen4->ContainerPtrToValuePtr<FInt32RangeBound>(&(*this).HardAmount, 0)), 0)) = ERangeBoundTypes::Open;
    (*this).CoolDownTime = 4.000000000e+00f;
    static ConstructorHelpers::FObjectFinder<UIGS_AISpawnerData> gen5(TEXT("/Game/00_Main/Core/AI/Spawning/DA_AISpawnerData.DA_AISpawnerData"));
    (*this).AISpawnerData = gen5.Object;
    (*this).PrimaryActorTick.bCanEverTick = true;
    (*this).PrimaryActorTick.bStartWithTickEnabled = false;
    (*this).RootComponent = gen;
}

void AIGS_AIEnemyGroupSpawner::SpawnGroupParametrizedWithSpecializations(EIGS_TeamSideEnum inTeamSide, uint8 inUnitVariation, const TArray<EIGS_UnitSpecialization>& inUnitSpecializations) {
}

void AIGS_AIEnemyGroupSpawner::SpawnGroupParametrized(EIGS_TeamSideEnum inTeamSide, uint8 inUnitVariation) {
}

void AIGS_AIEnemyGroupSpawner::SpawnGroup() {
}

void AIGS_AIEnemyGroupSpawner::OverwriteSpawnAmount(const int32 inEasyMin, const int32 inEasyMax, const int32 inMediumMin, const int32 inMediumMax, const int32 inHardMin, const int32 inHardMax) {
}

