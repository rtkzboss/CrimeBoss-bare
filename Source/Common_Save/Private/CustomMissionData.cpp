#include "CustomMissionData.h"
#include "EIGS_MissionStartupSource.h"
#include "EIGS_QPModeSource.h"
#include "IGS_EquipmentInventoryObject.h"
#include "IGS_SpecificSpecialLoot.h"
#include "META_PerkDataToFPS.h"
#include "GameFramework/OnlineReplStructs.h"
#include "GameplayTagContainer.h"
#include "EIGS_AITiers.h"
#include "EIGS_ChainType.h"
#include "EIGS_FPSDifficulty.h"
#include "EIGS_GangsterVariationType.h"
#include "EIGS_HeistersBackupVariationType.h"
#include "EIGS_HubDistrict.h"
#include "EIGS_MusicMissionState.h"
#include "EIGS_SWATVariationType.h"
#include "EIGS_TeamSideEnum.h"
#include "EIGS_TileEnviroment.h"
#include "EMETA_CharacterState.h"
#include "EMETA_RespectLvl.h"
#include "Templates/SubclassOf.h"

FCustomMissionData::FCustomMissionData() {
    (*this).MissionData.MissionTag = FGameplayTag();
    (*this).MissionData.MapName = TEXT("");
    (*this).MissionData.MissionScenario = FGameplayTag();
    (*this).MissionData.TileEnvironment = EIGS_TileEnviroment::None;
    (*this).MissionData.HubDistrict = EIGS_HubDistrict::Downtown;
    (*this).MissionData.HubVariant = EIGS_HubBackdropTypes::AllRandom;
    (*this).MissionData.LightingScenario = EIGS_LightingScenarioType::Sunset;
    (*this).MissionData.ScenarioDifficulty = EIGS_ScenarioDifficulty::SD_MediumForce;
    (*this).MissionData.FPSDifficulty = EIGS_FPSDifficulty::FD_Normal;
    (*this).MissionData.Heat = EMETA_Heat::Medium;
    (*this).MissionData.WantedBadges = 0;
    (*this).MissionData.IntelLevel = -1;
    (*this).MissionData.BonusObjectiveID = FGameplayTag();
    (*this).MissionData.SupportsCleanExecution = false;
    (*this).MissionData.StartMusic = EIGS_MusicMissionState::None;
    (*this).MissionData.StartupSource = EIGS_MissionStartupSource::INVALID;
    (*this).MissionData.MissionSubtype = TEXT("");
    (*this).MissionData.QPModeSource = EIGS_QPModeSource::INVALID;
    (*this).MissionData.MissionName = FText::GetEmpty();
    (*this).MissionData.ObjectiveValue = 0;
    (*this).MissionData.TotalMissionValue = 0;
    (*this).MissionData.TotalLootbagCount = -1;
    (*this).MissionData.SpecificLootTypes = FGameplayTagContainer();
    (*this).MissionData.SpecialLoot.Loot = TArray<FIGS_SpecificSpecialLoot>{};
    (*this).MissionData.SpecialLoot.Money = 0;
    (*this).MissionData.SpecialLoot.bIsFilled = false;
    (*this).MissionData.Respect = EMETA_RespectLvl::Connected;
    (*this).MissionData.IsChainMission = false;
    (*this).MissionData.ChainType = EIGS_ChainType::Unknown;
    (*this).MissionData.PrimaryEnemyVariation = EIGS_GangsterVariationType::US_None;
    (*this).MissionData.PrimaryEnemyTier = EIGS_AITiers::AT_Tier1;
    (*this).MissionData.SecondaryEnemyVariation = EIGS_GangsterVariationType::US_Sicarios;
    (*this).MissionData.SecondaryEnemyTier = EIGS_AITiers::AT_Tier2;
    (*this).MissionData.SWATVariation = EIGS_SWATVariationType::US_SWAT;
    (*this).MissionData.SWATTier = EIGS_AITiers::AT_Tier2;
    (*this).MissionData.AllyVariation = EIGS_HeistersBackupVariationType::US_None;
    (*this).MissionData.AllyTier = EIGS_AITiers::AT_Tier2;
    (*this).MissionData.ExpectedPlayerCount = -1;
    (*this).MissionData.MetaBonuses.ArmyPerkData = TArray<FMETA_PerkDataToFPS>{};
    (*this).MissionData.ObjectivePercentage = 50;
    (*this).MissionData.NeedObjectiveCompletion = false;
    (*this).MissionData.bDownedCharctersSurvive = false;
    (*this).MissionData.CiviliansAmountOverride = -1;
    (*this).MissionData.bIsDEBUG = false;
    (*this).MissionData.bIsFilled = false;
    (*this).CommonMissionData.ID = nullptr;
    (*this).CommonMissionData.MissionTagID = FGameplayTag();
    (*this).CommonMissionData.Map = NAME_None;
    (*this).CommonMissionData.Scenarios = FGameplayTagContainer();
    (*this).CommonMissionData.MenuCategory = EIGS_MenuCategory::UNKNOWN;
    (*this).CommonMissionData.Name = FText::GetEmpty();
    (*this).CommonMissionData.IsHubGeneratorMission = false;
    (*this).CommonMissionData.DistrictVariant = 0;
    (*this).CommonMissionData.ForceCharacter = EIGS_CharacterID::Char_Gen_Start;
    (*this).DistrictVariant = EIGS_HubBackdropTypes::AllRandom;
    (*this).Scenario = FGameplayTag();
    (*this).LightingScenario = EIGS_LightingScenarioType::Midday;
    (*this).Seed = TEXT("");
    (*this).DebugOptions = TEXT("");
    (*this).SelectedCharacter.TagID = FGameplayTag();
    (*this).SelectedCharacter.CharacterID = EIGS_CharacterID::Char_Unknown;
    (*this).SelectedCharacter.UniqGenericId = -1;
    (*this).SelectedCharacter.GenericVariantID = -1;
    (*this).SelectedCharacter.CharacterName = FText::GetEmpty();
    (*this).SelectedCharacter.bIsMaxLeveled = false;
    (*this).SelectedCharacter.HeisterNumber = -1;
    (*this).SelectedCharacter.PlayerId = -1;
    (*this).SelectedCharacter.ProgressionLevel = 1;
    auto gen = TBaseStructure<FUniqueNetIdRepl>::Get()->FindPropertyByName("ReplicationBytes");
    (*gen->ContainerPtrToValuePtr<TArray<uint8>>(&(*this).SelectedCharacter.UniquePlayerId, 0)) = TArray<uint8>{};
    (*this).SelectedCharacter.Loadout.PrimaryWeapon = nullptr;
    (*this).SelectedCharacter.Loadout.PrimaryWeaponSkin = FGameplayTag();
    (*this).SelectedCharacter.Loadout.SecondaryWeapon = nullptr;
    (*this).SelectedCharacter.Loadout.SecondaryWeaponSkin = FGameplayTag();
    (*this).SelectedCharacter.Loadout.MeleeWeapon = nullptr;
    (*this).SelectedCharacter.Loadout.MeleeWeaponSkin = FGameplayTag();
    (*this).SelectedCharacter.Loadout.Equipment = TArray<TSubclassOf<UIGS_EquipmentInventoryObject>>{};
    (*this).SelectedCharacter.Loadout.Perks = TArray<FMETA_PerkDataToFPS>{};
    (*this).SelectedCharacter.Loadout.Ability1ChargesLeft = -1;
    (*this).SelectedCharacter.Loadout.CharacterSkinID = FGameplayTag();
    (*this).SelectedCharacter.Experience = 0;
    (*this).SelectedCharacter.Injuries = 0;
    (*this).SelectedCharacter.CharacterState = EMETA_CharacterState::None;
    (*this).SelectedCharacter.IsBot = false;
    (*this).SelectedCharacter.bUseCustomLoadout = false;
    (*this).SelectedCharacter.bComesFromMeta = false;
    (*this).SelectedCharacter.MissionStats.Kills = -1;
    (*this).SelectedCharacter.MissionStats.Accuracy = -1.000000000e+00f;
    (*this).SelectedCharacter.MissionStats.RevivesLeft = -1.000000000e+00f;
    (*this).SelectedCharacter.MissionStats.CollectedMoney = 0.000000000e+00f;
    (*this).SelectedCharacter.KilledByTeamSide = EIGS_TeamSideEnum::TS_Unknown;
    (*this).SelectedCharacter.KilledByGangsterVariation = EIGS_GangsterVariationType::US_None;
    (*this).SelectedCharacter.PlayerRespect = EMETA_RespectLvl::Low;
    (*this).SelectedCharacter.MutableVariationIndex = -1;
    (*this).SelectedCharacter.MissionCutPercentWithModifiers = 0;
    (*this).SelectedCharacter.CachedPlayerName = FText::GetEmpty();
    (*this).AmountOfBots = 0;
    (*this).SpecificBotIDs = TArray<EIGS_CharacterID>{};
    (*this).Heat = EMETA_Heat::INVALID;
    (*this).MissionType = EIGS_MenuCategory::UNKNOWN;
    (*this).MissionDifficulty = EIGS_ScenarioDifficulty::SD_Unknown;
}
