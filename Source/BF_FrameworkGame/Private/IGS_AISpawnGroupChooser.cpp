#include "IGS_AISpawnGroupChooser.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"

AIGS_AISpawnGroupChooser::AIGS_AISpawnGroupChooser(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    (*this).AutomaticStart = true;
    auto gen2 = TBaseStructure<FInt32Range>::Get()->FindPropertyByName("LowerBound");
    auto gen3 = TBaseStructure<FInt32RangeBound>::Get()->FindPropertyByName("Type");
    (*gen3->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type>>(&(*gen2->ContainerPtrToValuePtr<FInt32RangeBound>(&(*this).EasyAmount, 0)), 0)) = ERangeBoundTypes::Inclusive;
    auto gen4 = TBaseStructure<FInt32Range>::Get()->FindPropertyByName("UpperBound");
    (*gen3->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type>>(&(*gen4->ContainerPtrToValuePtr<FInt32RangeBound>(&(*this).EasyAmount, 0)), 0)) = ERangeBoundTypes::Inclusive;
    (*gen3->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type>>(&(*gen2->ContainerPtrToValuePtr<FInt32RangeBound>(&(*this).MediumAmount, 0)), 0)) = ERangeBoundTypes::Inclusive;
    (*gen3->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type>>(&(*gen4->ContainerPtrToValuePtr<FInt32RangeBound>(&(*this).MediumAmount, 0)), 0)) = ERangeBoundTypes::Inclusive;
    (*gen3->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type>>(&(*gen2->ContainerPtrToValuePtr<FInt32RangeBound>(&(*this).HardAmount, 0)), 0)) = ERangeBoundTypes::Inclusive;
    (*gen3->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type>>(&(*gen4->ContainerPtrToValuePtr<FInt32RangeBound>(&(*this).HardAmount, 0)), 0)) = ERangeBoundTypes::Inclusive;
    (*this).RootComponent = gen;
}

void AIGS_AISpawnGroupChooser::SpawnGroup() {
}

