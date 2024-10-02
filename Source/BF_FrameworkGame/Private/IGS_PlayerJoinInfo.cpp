#include "IGS_PlayerJoinInfo.h"
#include "IGS_EquipmentInventoryObject.h"
#include "META_PerkDataToFPS.h"
#include "GameFramework/OnlineReplStructs.h"
#include "GameplayTagContainer.h"
#include "EIGS_GangsterVariationType.h"
#include "EIGS_TeamSideEnum.h"
#include "EMETA_CharacterState.h"
#include "EMETA_RespectLvl.h"
#include "Templates/SubclassOf.h"

FIGS_PlayerJoinInfo::FIGS_PlayerJoinInfo() {
    (*this).PlayerName = TEXT("");
    (*this).CurrentPlayerPawn = nullptr;
    (*this).PlayerState = nullptr;
    (*this).HeisterNumber = -1;
    (*this).InitialJoiningHeisterNumber = -1;
    (*this).IsBot = false;
    (*this).WasBotRightBefore = false;
    (*this).IsDisconnected = false;
    (*this).IsDead = false;
    (*this).WasDeadRightBefore = false;
    (*this).IsOccupied = false;
    (*this).PreviouslyUsed = false;
    (*this).BotSwitchedAfterDeath = false;
    (*this).HeisterDataID = -1;
    (*this).bCachedMaxLevel = false;
    (*this).CachedCharID = EIGS_CharacterID::Char_Unknown;
    (*this).UniqueId = -1;
    (*this).CachedGenericID = -1;
    (*this).CachedHeisterData.TagID = FGameplayTag();
    (*this).CachedHeisterData.CharacterID = EIGS_CharacterID::Char_Unknown;
    (*this).CachedHeisterData.UniqGenericId = -1;
    (*this).CachedHeisterData.GenericVariantID = -1;
    (*this).CachedHeisterData.CharacterName = FText::GetEmpty();
    (*this).CachedHeisterData.bIsMaxLeveled = false;
    (*this).CachedHeisterData.HeisterNumber = -1;
    (*this).CachedHeisterData.PlayerId = -1;
    (*this).CachedHeisterData.ProgressionLevel = 1;
    auto gen = TBaseStructure<FUniqueNetIdRepl>::Get()->FindPropertyByName("ReplicationBytes");
    (*gen->ContainerPtrToValuePtr<TArray<uint8>>(&(*this).CachedHeisterData.UniquePlayerId, 0)) = TArray<uint8>{};
    (*this).CachedHeisterData.Loadout.PrimaryWeapon = nullptr;
    (*this).CachedHeisterData.Loadout.PrimaryWeaponSkin = FGameplayTag();
    (*this).CachedHeisterData.Loadout.SecondaryWeapon = nullptr;
    (*this).CachedHeisterData.Loadout.SecondaryWeaponSkin = FGameplayTag();
    (*this).CachedHeisterData.Loadout.MeleeWeapon = nullptr;
    (*this).CachedHeisterData.Loadout.MeleeWeaponSkin = FGameplayTag();
    (*this).CachedHeisterData.Loadout.Equipment = TArray<TSubclassOf<UIGS_EquipmentInventoryObject>>{};
    (*this).CachedHeisterData.Loadout.Perks = TArray<FMETA_PerkDataToFPS>{};
    (*this).CachedHeisterData.Loadout.Ability1ChargesLeft = -1;
    (*this).CachedHeisterData.Loadout.CharacterSkinID = FGameplayTag();
    (*this).CachedHeisterData.Experience = 0;
    (*this).CachedHeisterData.Injuries = 0;
    (*this).CachedHeisterData.CharacterState = EMETA_CharacterState::None;
    (*this).CachedHeisterData.IsBot = false;
    (*this).CachedHeisterData.bUseCustomLoadout = false;
    (*this).CachedHeisterData.bComesFromMeta = false;
    (*this).CachedHeisterData.MissionStats.Kills = -1;
    (*this).CachedHeisterData.MissionStats.Accuracy = -1.000000000e+00f;
    (*this).CachedHeisterData.MissionStats.RevivesLeft = -1.000000000e+00f;
    (*this).CachedHeisterData.MissionStats.CollectedMoney = 0.000000000e+00f;
    (*this).CachedHeisterData.KilledByTeamSide = EIGS_TeamSideEnum::TS_Unknown;
    (*this).CachedHeisterData.KilledByGangsterVariation = EIGS_GangsterVariationType::US_None;
    (*this).CachedHeisterData.PlayerRespect = EMETA_RespectLvl::Low;
    (*this).CachedHeisterData.MutableVariationIndex = -1;
    (*this).CachedHeisterData.MissionCutPercentWithModifiers = 0;
    (*this).CachedHeisterData.CachedPlayerName = FText::GetEmpty();
}
