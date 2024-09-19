#include "IGS_SaveData_Account.h"
#include "IGS_EquipmentInventoryObject.h"
#include "META_PerkDataToFPS.h"
#include "GameFramework/OnlineReplStructs.h"
#include "EIGS_GangsterVariationType.h"
#include "EIGS_TeamSideEnum.h"
#include "EMETA_BonusType.h"
#include "EMETA_CharacterState.h"
#include "EMETA_RespectLvl.h"
#include "IGS_UnlockedRewardHistoryItem.h"
#include "Templates/SubclassOf.h"

FIGS_SaveData_Account::FIGS_SaveData_Account() {
    (*this).AccountName = FText::FromString(TEXT("Default Account Name"));
    (*this).bDebug = false;
    (*this).bReadEULA = false;
    (*this).bReadSaveWarning = false;
    (*this).bFirstCrimeTime = true;
    (*this).bCheckedVeteranPlayer = false;
    (*this).bIsVeteranPlayer = false;
    (*this).bSeenProgressionReset = false;
    (*this).bWantedProgressionResetCompensation = false;
    (*this).NewsInfoSaveData.PatchNotesVersionsSeen = TMap<FString, bool>{};
    (*this).UnlockedCharactersAccWide = TArray<FIGS_UnlockedCharacterSaveData>{};
    (*this).HiredCharactersInLastCampaign = TSet<EIGS_CharacterID>{};
    (*this).UnlockedUniqueCharactersLevel = TMap<EIGS_CharacterID, int32>{};
    (*this).CharacterPlotlineProgress = TMap<FGameplayTag, FIGS_CharacterMissionProgress>{};
    (*this).TimePlayed = 0.000000000e+00f;
    (*this).QuickPlayPreferences.PlayerHeisterData.TagID = FGameplayTag();
    (*this).QuickPlayPreferences.PlayerHeisterData.CharacterID = EIGS_CharacterID::Char_Unknown;
    (*this).QuickPlayPreferences.PlayerHeisterData.UniqGenericId = -1;
    (*this).QuickPlayPreferences.PlayerHeisterData.GenericVariantID = -1;
    (*this).QuickPlayPreferences.PlayerHeisterData.CharacterName = FText::GetEmpty();
    (*this).QuickPlayPreferences.PlayerHeisterData.bIsMaxLeveled = false;
    (*this).QuickPlayPreferences.PlayerHeisterData.HeisterNumber = -1;
    (*this).QuickPlayPreferences.PlayerHeisterData.PlayerId = -1;
    (*this).QuickPlayPreferences.PlayerHeisterData.ProgressionLevel = 1;
    auto gen = TBaseStructure<FUniqueNetIdRepl>::Get()->FindPropertyByName("ReplicationBytes");
    (*gen->ContainerPtrToValuePtr<TArray<uint8>>(&(*this).QuickPlayPreferences.PlayerHeisterData.UniquePlayerId, 0)) = TArray<uint8>{};
    (*this).QuickPlayPreferences.PlayerHeisterData.Loadout.PrimaryWeapon = nullptr;
    (*this).QuickPlayPreferences.PlayerHeisterData.Loadout.PrimaryWeaponSkin = FGameplayTag();
    (*this).QuickPlayPreferences.PlayerHeisterData.Loadout.SecondaryWeapon = nullptr;
    (*this).QuickPlayPreferences.PlayerHeisterData.Loadout.SecondaryWeaponSkin = FGameplayTag();
    (*this).QuickPlayPreferences.PlayerHeisterData.Loadout.Equipment = TArray<TSubclassOf<UIGS_EquipmentInventoryObject>>{};
    (*this).QuickPlayPreferences.PlayerHeisterData.Loadout.Perks = TArray<FMETA_PerkDataToFPS>{};
    (*this).QuickPlayPreferences.PlayerHeisterData.Loadout.Ability1ChargesLeft = -1;
    (*this).QuickPlayPreferences.PlayerHeisterData.Loadout.CharacterSkinID = FGameplayTag();
    (*this).QuickPlayPreferences.PlayerHeisterData.Experience = 0;
    (*this).QuickPlayPreferences.PlayerHeisterData.Injuries = 0;
    (*this).QuickPlayPreferences.PlayerHeisterData.CharacterState = EMETA_CharacterState::None;
    (*this).QuickPlayPreferences.PlayerHeisterData.IsBot = false;
    (*this).QuickPlayPreferences.PlayerHeisterData.bUseCustomLoadout = false;
    (*this).QuickPlayPreferences.PlayerHeisterData.bComesFromMeta = false;
    (*this).QuickPlayPreferences.PlayerHeisterData.MissionStats.Kills = -1;
    (*this).QuickPlayPreferences.PlayerHeisterData.MissionStats.Accuracy = -1.000000000e+00f;
    (*this).QuickPlayPreferences.PlayerHeisterData.MissionStats.RevivesLeft = -1.000000000e+00f;
    (*this).QuickPlayPreferences.PlayerHeisterData.MissionStats.CollectedMoney = 0.000000000e+00f;
    (*this).QuickPlayPreferences.PlayerHeisterData.KilledByTeamSide = EIGS_TeamSideEnum::TS_Unknown;
    (*this).QuickPlayPreferences.PlayerHeisterData.KilledByGangsterVariation = EIGS_GangsterVariationType::US_None;
    (*this).QuickPlayPreferences.PlayerHeisterData.PlayerRespect = EMETA_RespectLvl::Low;
    (*this).QuickPlayPreferences.PlayerHeisterData.MutableVariationIndex = -1;
    (*this).QuickPlayPreferences.PlayerHeisterData.MissionCutPercentWithModifiers = 0;
    (*this).QuickPlayPreferences.PlayerHeisterData.CachedPlayerName = FText::GetEmpty();
    (*this).QuickPlayPreferences.bKeepCustomizedLoadout = false;
    (*this).MetaPersistentData = TMap<FGameplayTag, int32>{};
    (*this).PendingUnlockRewards = TArray<FGameplayTag>{};
    (*this).BossLevelData.CurrentBossLevel = 0;
    (*this).BossLevelData.MaxBossPointsToNextLevel = 0;
    (*this).BossLevelData.AccumulatedBossPointsToNextLevel = 0.000000000e+00f;
    (*this).BossLevelData.BonusesLvls = TMap<EMETA_BonusType, int32>{};
    (*this).BossLevelData.PreparedBonuses = TArray<EMETA_BonusType>{};
    (*this).BossLevelData.RemainingLvlUps = 0;
    (*this).BossLevelData.LastSeenLvlUpScreen = 1;
    (*this).Statistic.Singleplayer = TMap<FGameplayTag, float>{};
    (*this).CityMapData.LastPlayerTileGroupIndex = 0;
    (*this).CityMapData.LastPlayerInitialTileGroup = TArray<FGameplayTag>{};
    (*this).MetaPersistentAssetData = FGameplayTagContainer();
    (*this).MetaMenuActiveTags = FGameplayTagContainer();
    (*this).CurrentChainMissionID = nullptr;
    (*this).Achievements = TArray<FIGS_AchievementSaveData>{};
    (*this).PreviousSession.SessionId = TEXT("");
    (*this).PreviousSession.MissionID.A = 0;
    (*this).PreviousSession.MissionID.B = 0;
    (*this).PreviousSession.MissionID.C = 0;
    (*this).PreviousSession.MissionID.D = 0;
    (*this).CompletedTutorialTags = FGameplayTagContainer();
    (*this).UserAnalyticsID = TEXT("");
    (*this).UserCountry = TEXT("");
    (*this).UserRegion = TEXT("");
    (*this).UserCity = TEXT("");
    (*this).SaveDataVersion.JsonVersion = 0;
    (*this).SaveDataVersion.RevisionCreated = TEXT("");
    (*this).SaveDataVersion.RevisionSaved = TEXT("");
    (*this).SaveDataVersion.SnapshotRevision = TEXT("");
    (*this).bUserShouldAdvertise = true;
    (*this).ActiveCampaign.CampaignMode = FGameplayTag();
    (*this).ActiveCampaign.Difficulty = EIGS_UserDifficulty::UD_Unknown;
    (*this).UnlockedItemIDs = TMap<EIGS_UnlockCategory, FGameplayTagContainer>{};
    (*this).PendingUnlockedItemIDs = TMap<EIGS_UnlockCategory, FGameplayTagContainer>{};
    (*this).Progression.ProgressLevel = 0;
    (*this).Progression.ProgressToNextLevel = 0.000000000e+00f;
    (*this).Progression.PendingUnlockedLevelUps = 0;
    (*this).Progression.PendingUnlockedItems = TArray<FGameplayTag>{};
    (*this).Progression.UnlockedRewardsHistory = TArray<FIGS_UnlockedRewardHistoryItem>{};
    (*this).Challenges.ChallengesInProgress = TMap<FGameplayTag, int32>{};
    (*this).Challenges.CompletedChallenges = TMap<FGameplayTag, int32>{};
    (*this).CompletedCampaignCounts = TMap<EIGS_UserDifficulty, int32>{};
}
