#include "CommonHeisterData.h"

FCommonHeisterData::FCommonHeisterData() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).TagID, 0)) = NAME_None;
    (*this).CharacterID = EIGS_CharacterID::Char_Unknown;
    (*this).UniqGenericId = -1;
    (*this).GenericVariantID = -1;
    (*this).CharacterName = FText::GetEmpty();
    (*this).bIsMaxLeveled = false;
    (*this).HeisterNumber = -1;
    (*this).PlayerId = -1;
    (*this).ProgressionLevel = 1;
    auto gen2 = TBaseStructure<FUniqueNetIdRepl>::Get()->FindPropertyByName("ReplicationBytes");
    (*gen2->ContainerPtrToValuePtr<TArray<uint8>>(&(*this).UniquePlayerId, 0)) = {};
    (*this).Loadout.PrimaryWeapon = nullptr;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).Loadout.PrimaryWeaponSkin, 0)) = NAME_None;
    (*this).Loadout.SecondaryWeapon = nullptr;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).Loadout.SecondaryWeaponSkin, 0)) = NAME_None;
    (*this).Loadout.Equipment = {};
    (*this).Loadout.Perks = {};
    (*this).Loadout.Ability1ChargesLeft = -1;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).Loadout.CharacterSkinID, 0)) = NAME_None;
    (*this).Experience = 0;
    (*this).Injuries = 0;
    (*this).CharacterState = EMETA_CharacterState::None;
    (*this).IsBot = false;
    (*this).bUseCustomLoadout = false;
    (*this).bComesFromMeta = false;
    (*this).MissionStats.Kills = -1;
    (*this).MissionStats.Accuracy = -1.000000000e+00f;
    (*this).MissionStats.RevivesLeft = -1.000000000e+00f;
    (*this).MissionStats.CollectedMoney = 0.000000000e+00f;
    (*this).KilledByTeamSide = EIGS_TeamSideEnum::TS_Unknown;
    (*this).KilledByGangsterVariation = EIGS_GangsterVariationType::US_None;
    (*this).PlayerRespect = EMETA_RespectLvl::Low;
    (*this).MutableVariationIndex = -1;
    (*this).MissionCutPercentWithModifiers = 0;
    (*this).CachedPlayerName = FText::GetEmpty();
}
