#include "META_BossEliminationRewardData.h"

FMETA_BossEliminationRewardData::FMETA_BossEliminationRewardData() {
    (*this).RewardType = EMETA_BossEliminationReward::None;
    (*this).Value = 0.000000000e+00f;
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).LootItem, 0)) = NAME_None;
    (*this).WeaponQuality = EMETA_ItemQuality::None;
    (*this).WeaponSkinTags = {};
    (*this).Weapon = nullptr;
    (*this).Heister = EIGS_CharacterID::Char_Gen_Start;
    (*this).HeisterQuality = EMETA_ItemQuality::None;
}
