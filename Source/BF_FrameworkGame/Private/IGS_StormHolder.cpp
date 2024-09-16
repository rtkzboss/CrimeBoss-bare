#include "IGS_StormHolder.h"
#include "UObject/NoExportTypes.h"

FIGS_StormHolder::FIGS_StormHolder() {
    auto gen = TBaseStructure<FInt32Range>::Get()->FindPropertyByName("LowerBound");
    auto gen2 = TBaseStructure<FInt32RangeBound>::Get()->FindPropertyByName("Type");
    (*gen2->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type>>(&(*gen->ContainerPtrToValuePtr<FInt32RangeBound>(&(*this).WaveSize, 0)), 0)) = ERangeBoundTypes::Inclusive;
    auto gen3 = TBaseStructure<FInt32RangeBound>::Get()->FindPropertyByName("Value");
    (*gen3->ContainerPtrToValuePtr<int32>(&(*gen->ContainerPtrToValuePtr<FInt32RangeBound>(&(*this).WaveSize, 0)), 0)) = 3;
    auto gen4 = TBaseStructure<FInt32Range>::Get()->FindPropertyByName("UpperBound");
    (*gen2->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type>>(&(*gen4->ContainerPtrToValuePtr<FInt32RangeBound>(&(*this).WaveSize, 0)), 0)) = ERangeBoundTypes::Inclusive;
    (*gen3->ContainerPtrToValuePtr<int32>(&(*gen4->ContainerPtrToValuePtr<FInt32RangeBound>(&(*this).WaveSize, 0)), 0)) = 5;
    auto gen5 = TBaseStructure<FFloatRange>::Get()->FindPropertyByName("LowerBound");
    auto gen6 = TBaseStructure<FFloatRangeBound>::Get()->FindPropertyByName("Type");
    (*gen6->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type>>(&(*gen5->ContainerPtrToValuePtr<FFloatRangeBound>(&(*this).WaveSpawnTimer, 0)), 0)) = ERangeBoundTypes::Inclusive;
    auto gen7 = TBaseStructure<FFloatRangeBound>::Get()->FindPropertyByName("Value");
    (*gen7->ContainerPtrToValuePtr<float>(&(*gen5->ContainerPtrToValuePtr<FFloatRangeBound>(&(*this).WaveSpawnTimer, 0)), 0)) = 1.500000000e+01f;
    auto gen8 = TBaseStructure<FFloatRange>::Get()->FindPropertyByName("UpperBound");
    (*gen6->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type>>(&(*gen8->ContainerPtrToValuePtr<FFloatRangeBound>(&(*this).WaveSpawnTimer, 0)), 0)) = ERangeBoundTypes::Inclusive;
    (*gen7->ContainerPtrToValuePtr<float>(&(*gen8->ContainerPtrToValuePtr<FFloatRangeBound>(&(*this).WaveSpawnTimer, 0)), 0)) = 1.500000000e+01f;
    (*this).SquadSize = 4;
    (*this).EnemyTypes = 0;
    (*this).SpecialTypesChances = {};
}
