#include "IGS_QuickPlayPreferencesSaveData.h"
#include "GameFramework/OnlineReplStructs.h"
#include "GameplayTagContainer.h"
#include "EIGS_CharacterID.h"
#include "EIGS_GangsterVariationType.h"
#include "EIGS_TeamSideEnum.h"
#include "EMETA_CharacterState.h"
#include "EMETA_RespectLvl.h"

FIGS_QuickPlayPreferencesSaveData::FIGS_QuickPlayPreferencesSaveData() {
    (*this).PlayerHeisterData.TagID = FGameplayTag();
    (*this).PlayerHeisterData.CharacterID = EIGS_CharacterID::Char_Unknown;
    (*this).PlayerHeisterData.UniqGenericId = -1;
    (*this).PlayerHeisterData.GenericVariantID = -1;
    (*this).PlayerHeisterData.CharacterName = FText::GetEmpty();
    (*this).PlayerHeisterData.bIsMaxLeveled = false;
    (*this).PlayerHeisterData.HeisterNumber = -1;
    (*this).PlayerHeisterData.PlayerId = -1;
    (*this).PlayerHeisterData.ProgressionLevel = 1;
    auto gen = TBaseStructure<FUniqueNetIdRepl>::Get()->FindPropertyByName("ReplicationBytes");
    (*gen->ContainerPtrToValuePtr<TArray<uint8>>(&(*this).PlayerHeisterData.UniquePlayerId, 0)) = {};
    (*this).PlayerHeisterData.Loadout.PrimaryWeapon = nullptr;
    (*this).PlayerHeisterData.Loadout.PrimaryWeaponSkin = FGameplayTag();
    (*this).PlayerHeisterData.Loadout.SecondaryWeapon = nullptr;
    (*this).PlayerHeisterData.Loadout.SecondaryWeaponSkin = FGameplayTag();
    (*this).PlayerHeisterData.Loadout.Equipment = {};
    (*this).PlayerHeisterData.Loadout.Perks = {};
    (*this).PlayerHeisterData.Loadout.Ability1ChargesLeft = -1;
    (*this).PlayerHeisterData.Loadout.CharacterSkinID = FGameplayTag();
    (*this).PlayerHeisterData.Experience = 0;
    (*this).PlayerHeisterData.Injuries = 0;
    (*this).PlayerHeisterData.CharacterState = EMETA_CharacterState::None;
    (*this).PlayerHeisterData.IsBot = false;
    (*this).PlayerHeisterData.bUseCustomLoadout = false;
    (*this).PlayerHeisterData.bComesFromMeta = false;
    (*this).PlayerHeisterData.MissionStats.Kills = -1;
    (*this).PlayerHeisterData.MissionStats.Accuracy = -1.000000000e+00f;
    (*this).PlayerHeisterData.MissionStats.RevivesLeft = -1.000000000e+00f;
    (*this).PlayerHeisterData.MissionStats.CollectedMoney = 0.000000000e+00f;
    (*this).PlayerHeisterData.KilledByTeamSide = EIGS_TeamSideEnum::TS_Unknown;
    (*this).PlayerHeisterData.KilledByGangsterVariation = EIGS_GangsterVariationType::US_None;
    (*this).PlayerHeisterData.PlayerRespect = EMETA_RespectLvl::Low;
    (*this).PlayerHeisterData.MutableVariationIndex = -1;
    (*this).PlayerHeisterData.MissionCutPercentWithModifiers = 0;
    (*this).PlayerHeisterData.CachedPlayerName = FText::GetEmpty();
    (*this).bKeepCustomizedLoadout = false;
}
