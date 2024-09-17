#include "IGS_PlayerStateData.h"
#include "GameFramework/OnlineReplStructs.h"
#include "GameplayTagContainer.h"
#include "EIGS_CharacterID.h"
#include "EIGS_GangsterVariationType.h"
#include "EIGS_TeamSideEnum.h"
#include "EMETA_CharacterState.h"
#include "EMETA_RespectLvl.h"

FIGS_PlayerStateData::FIGS_PlayerStateData() {
    (*this).HeisterDataHolder.TagID = FGameplayTag();
    (*this).HeisterDataHolder.CharacterID = EIGS_CharacterID::Char_Unknown;
    (*this).HeisterDataHolder.UniqGenericId = -1;
    (*this).HeisterDataHolder.GenericVariantID = -1;
    (*this).HeisterDataHolder.CharacterName = FText::GetEmpty();
    (*this).HeisterDataHolder.bIsMaxLeveled = false;
    (*this).HeisterDataHolder.HeisterNumber = -1;
    (*this).HeisterDataHolder.PlayerId = -1;
    (*this).HeisterDataHolder.ProgressionLevel = 1;
    auto gen = TBaseStructure<FUniqueNetIdRepl>::Get()->FindPropertyByName("ReplicationBytes");
    (*gen->ContainerPtrToValuePtr<TArray<uint8>>(&(*this).HeisterDataHolder.UniquePlayerId, 0)) = {};
    (*this).HeisterDataHolder.Loadout.PrimaryWeapon = nullptr;
    (*this).HeisterDataHolder.Loadout.PrimaryWeaponSkin = FGameplayTag();
    (*this).HeisterDataHolder.Loadout.SecondaryWeapon = nullptr;
    (*this).HeisterDataHolder.Loadout.SecondaryWeaponSkin = FGameplayTag();
    (*this).HeisterDataHolder.Loadout.Equipment = {};
    (*this).HeisterDataHolder.Loadout.Perks = {};
    (*this).HeisterDataHolder.Loadout.Ability1ChargesLeft = -1;
    (*this).HeisterDataHolder.Loadout.CharacterSkinID = FGameplayTag();
    (*this).HeisterDataHolder.Experience = 0;
    (*this).HeisterDataHolder.Injuries = 0;
    (*this).HeisterDataHolder.CharacterState = EMETA_CharacterState::None;
    (*this).HeisterDataHolder.IsBot = false;
    (*this).HeisterDataHolder.bUseCustomLoadout = false;
    (*this).HeisterDataHolder.bComesFromMeta = false;
    (*this).HeisterDataHolder.MissionStats.Kills = -1;
    (*this).HeisterDataHolder.MissionStats.Accuracy = -1.000000000e+00f;
    (*this).HeisterDataHolder.MissionStats.RevivesLeft = -1.000000000e+00f;
    (*this).HeisterDataHolder.MissionStats.CollectedMoney = 0.000000000e+00f;
    (*this).HeisterDataHolder.KilledByTeamSide = EIGS_TeamSideEnum::TS_Unknown;
    (*this).HeisterDataHolder.KilledByGangsterVariation = EIGS_GangsterVariationType::US_None;
    (*this).HeisterDataHolder.PlayerRespect = EMETA_RespectLvl::Low;
    (*this).HeisterDataHolder.MutableVariationIndex = -1;
    (*this).HeisterDataHolder.MissionCutPercentWithModifiers = 0;
    (*this).HeisterDataHolder.CachedPlayerName = FText::GetEmpty();
    (*this).StorePlatform = EIGS_StorePlatform::None;
    (*this).HordeModeTokens = 0;
}
