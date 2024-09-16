#include "IGS_UnlockRewardRanges.h"
#include "UObject/NoExportTypes.h"

FIGS_UnlockRewardRanges::FIGS_UnlockRewardRanges() {
    auto gen = TBaseStructure<FInt32Range>::Get()->FindPropertyByName("LowerBound");
    auto gen2 = TBaseStructure<FInt32RangeBound>::Get()->FindPropertyByName("Type");
    (*gen2->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type>>(&(*gen->ContainerPtrToValuePtr<FInt32RangeBound>(&(*this).LevelRange, 0)), 0)) = ERangeBoundTypes::Inclusive;
    auto gen3 = TBaseStructure<FInt32RangeBound>::Get()->FindPropertyByName("Value");
    (*gen3->ContainerPtrToValuePtr<int32>(&(*gen->ContainerPtrToValuePtr<FInt32RangeBound>(&(*this).LevelRange, 0)), 0)) = 1;
    auto gen4 = TBaseStructure<FInt32Range>::Get()->FindPropertyByName("UpperBound");
    (*gen2->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type>>(&(*gen4->ContainerPtrToValuePtr<FInt32RangeBound>(&(*this).LevelRange, 0)), 0)) = ERangeBoundTypes::Inclusive;
    (*gen3->ContainerPtrToValuePtr<int32>(&(*gen4->ContainerPtrToValuePtr<FInt32RangeBound>(&(*this).LevelRange, 0)), 0)) = 1;
    (*this).RewardCategoryMap = {};
    auto gen5 = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags");
    (*gen5->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).AvailableItems, 0)) = {};
    auto gen6 = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags");
    (*gen6->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).AvailableItems, 0)) = {};
    (*this).ForcedPool = {};
}
