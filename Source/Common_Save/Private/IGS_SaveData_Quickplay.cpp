#include "IGS_SaveData_Quickplay.h"
#include "EIGS_QPModeSource.h"
#include "IGS_ChainContractID.h"
#include "IGS_ContractID.h"
#include "IGS_EquipmentInventoryObject.h"
#include "META_AmbushMissionSave.h"
#include "META_BaseMissionSave.h"
#include "META_HordeModeMissionSave.h"
#include "META_MoneyMakingMissionSave.h"
#include "META_PerkData.h"
#include "META_StoryMissionSave.h"
#include "META_TradeDealSellMissionSave.h"
#include "META_TradeMissionSave.h"
#include "META_TurfWarMissionSave.h"
#include "META_WeaponInventoryObject.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "EIGS_ChainType.h"
#include "EIGS_UserDifficulty.h"
#include "EMETA_ItemQuality.h"
#include "META_CharacterSkinSaveData.h"
#include "META_EquipmentSaveData.h"
#include "META_MissionID.h"
#include "META_PerkSaveData.h"
#include "META_TileSaveData.h"
#include "META_WeaponSaveData.h"
#include "META_WeaponSkinSaveData.h"
#include "IGS_Quick_ActiveChainContractData.h"
#include "IGS_Quick_ChainResultsSaveData.h"
#include "META_HeisterSaveData.h"
#include "META_StatisticNoteSaveData.h"
#include "Templates/SubclassOf.h"

FIGS_SaveData_Quickplay::FIGS_SaveData_Quickplay() {
    (*this).SaveSlot = TEXT("");
    (*this).bIsFilled = false;
    (*this).BlackmarketManagerData.bInited = false;
    (*this).BlackmarketManagerData.Heisters = TArray<FMETA_HeisterSaveData>{};
    (*this).BlackmarketManagerData.Weapons = TArray<FMETA_WeaponSaveData>{};
    (*this).BlackmarketManagerData.WeaponSkins = TArray<FMETA_WeaponSkinSaveData>{};
    (*this).BlackmarketManagerData.Equipment = TArray<FMETA_EquipmentSaveData>{};
    (*this).BlackmarketManagerData.Perks = TArray<FMETA_PerkSaveData>{};
    (*this).BlackmarketManagerData.BossCharacterSkins = TArray<FMETA_CharacterSkinSaveData>{};
    (*this).BlackmarketManagerData.UnseenUnlockedCharacterTagIDs = TArray<FGameplayTag>{};
    (*this).BlackmarketManagerData.UnseenUnlockedWeaponTagIDs = TArray<FGameplayTag>{};
    (*this).BlackmarketManagerData.UnseenUnlockedEquipmentTagIDs = TArray<FGameplayTag>{};
    (*this).CrewManagerData.bInited = false;
    (*this).CrewManagerData.Heisters = TArray<FMETA_HeisterSaveData>{};
    (*this).CrewManagerData.BossCharacter.Loadout.PrimaryWeapon = nullptr;
    (*this).CrewManagerData.BossCharacter.Loadout.PrimaryWeaponSaveData.Amount = 0;
    (*this).CrewManagerData.BossCharacter.Loadout.PrimaryWeaponSaveData.AdditionalPercentageOfWeaponPrice = 0;
    (*this).CrewManagerData.BossCharacter.Loadout.PrimaryWeaponSaveData.SuccessfulMissions = 0;
    (*this).CrewManagerData.BossCharacter.Loadout.PrimaryWeaponSaveData.DaysInShop = 0;
    (*this).CrewManagerData.BossCharacter.Loadout.PrimaryWeaponSaveData.WeaponSkin = FGameplayTag();
    (*this).CrewManagerData.BossCharacter.Loadout.PrimaryWeaponSaveData.TargetWeaponsForUpgrade = TArray<UClass*>{};
    (*this).CrewManagerData.BossCharacter.Loadout.PrimaryWeaponSaveData.TargetQualityToUpdateWeapon = EMETA_ItemQuality::None;
    (*this).CrewManagerData.BossCharacter.Loadout.PrimaryWeaponSaveData.itemTag = FGameplayTag();
    (*this).CrewManagerData.BossCharacter.Loadout.PrimaryWeaponSaveData.Price = 0;
    (*this).CrewManagerData.BossCharacter.Loadout.PrimaryWeaponSaveData.RelativePrice = 0.000000000e+00f;
    (*this).CrewManagerData.BossCharacter.Loadout.PrimaryWeaponSaveData.IsUnseenInShop = false;
    (*this).CrewManagerData.BossCharacter.Loadout.PrimaryPersonalWeapons = TArray<TSubclassOf<UMETA_WeaponInventoryObject>>{};
    (*this).CrewManagerData.BossCharacter.Loadout.SecondaryWeapon = nullptr;
    (*this).CrewManagerData.BossCharacter.Loadout.SecondaryWeaponSaveData.Amount = 0;
    (*this).CrewManagerData.BossCharacter.Loadout.SecondaryWeaponSaveData.AdditionalPercentageOfWeaponPrice = 0;
    (*this).CrewManagerData.BossCharacter.Loadout.SecondaryWeaponSaveData.SuccessfulMissions = 0;
    (*this).CrewManagerData.BossCharacter.Loadout.SecondaryWeaponSaveData.DaysInShop = 0;
    (*this).CrewManagerData.BossCharacter.Loadout.SecondaryWeaponSaveData.WeaponSkin = FGameplayTag();
    (*this).CrewManagerData.BossCharacter.Loadout.SecondaryWeaponSaveData.TargetWeaponsForUpgrade = TArray<UClass*>{};
    (*this).CrewManagerData.BossCharacter.Loadout.SecondaryWeaponSaveData.TargetQualityToUpdateWeapon = EMETA_ItemQuality::None;
    (*this).CrewManagerData.BossCharacter.Loadout.SecondaryWeaponSaveData.itemTag = FGameplayTag();
    (*this).CrewManagerData.BossCharacter.Loadout.SecondaryWeaponSaveData.Price = 0;
    (*this).CrewManagerData.BossCharacter.Loadout.SecondaryWeaponSaveData.RelativePrice = 0.000000000e+00f;
    (*this).CrewManagerData.BossCharacter.Loadout.SecondaryWeaponSaveData.IsUnseenInShop = false;
    (*this).CrewManagerData.BossCharacter.Loadout.SecondaryPersonalWeapons = TArray<TSubclassOf<UMETA_WeaponInventoryObject>>{};
    (*this).CrewManagerData.BossCharacter.Loadout.MeleeWeapon = nullptr;
    (*this).CrewManagerData.BossCharacter.Loadout.MeleeWeaponSaveData.Amount = 0;
    (*this).CrewManagerData.BossCharacter.Loadout.MeleeWeaponSaveData.AdditionalPercentageOfWeaponPrice = 0;
    (*this).CrewManagerData.BossCharacter.Loadout.MeleeWeaponSaveData.SuccessfulMissions = 0;
    (*this).CrewManagerData.BossCharacter.Loadout.MeleeWeaponSaveData.DaysInShop = 0;
    (*this).CrewManagerData.BossCharacter.Loadout.MeleeWeaponSaveData.WeaponSkin = FGameplayTag();
    (*this).CrewManagerData.BossCharacter.Loadout.MeleeWeaponSaveData.TargetWeaponsForUpgrade = TArray<UClass*>{};
    (*this).CrewManagerData.BossCharacter.Loadout.MeleeWeaponSaveData.TargetQualityToUpdateWeapon = EMETA_ItemQuality::None;
    (*this).CrewManagerData.BossCharacter.Loadout.MeleeWeaponSaveData.itemTag = FGameplayTag();
    (*this).CrewManagerData.BossCharacter.Loadout.MeleeWeaponSaveData.Price = 0;
    (*this).CrewManagerData.BossCharacter.Loadout.MeleeWeaponSaveData.RelativePrice = 0.000000000e+00f;
    (*this).CrewManagerData.BossCharacter.Loadout.MeleeWeaponSaveData.IsUnseenInShop = false;
    (*this).CrewManagerData.BossCharacter.Loadout.MeleePersonalWeapons = TArray<TSubclassOf<UMETA_WeaponInventoryObject>>{};
    (*this).CrewManagerData.BossCharacter.Loadout.Equipment = TArray<TSubclassOf<UIGS_EquipmentInventoryObject>>{};
    (*this).CrewManagerData.BossCharacter.Loadout.SelectedEquipment.EquipmentID = nullptr;
    (*this).CrewManagerData.BossCharacter.Loadout.SelectedEquipment.itemTag = FGameplayTag();
    (*this).CrewManagerData.BossCharacter.Loadout.SelectedEquipment.Price = 0;
    (*this).CrewManagerData.BossCharacter.Loadout.SelectedEquipment.RelativePrice = 0.000000000e+00f;
    (*this).CrewManagerData.BossCharacter.Loadout.SelectedEquipment.IsUnseenInShop = false;
    (*this).CrewManagerData.BossCharacter.Loadout.CharacterSkin = FGameplayTag();
    (*this).CrewManagerData.BossCharacter.Perks = TArray<FMETA_PerkData>{};
    (*this).StashManagerData.bInited = false;
    (*this).StashManagerData.PrimaryWeapons = TArray<FMETA_WeaponSaveData>{};
    (*this).StashManagerData.SecondaryWeapons = TArray<FMETA_WeaponSaveData>{};
    (*this).StashManagerData.MeleeWeapons = TArray<FMETA_WeaponSaveData>{};
    (*this).StashManagerData.WeaponSkins = TArray<FMETA_WeaponSkinSaveData>{};
    (*this).StashManagerData.Equipment = TArray<FMETA_EquipmentSaveData>{};
    (*this).StashManagerData.Perks = TArray<FMETA_PerkSaveData>{};
    (*this).StashManagerData.BossCharacterSkins = TArray<FMETA_CharacterSkinSaveData>{};
    (*this).CityMapManagerData.TilesSaveData = TMap<FGameplayTag, FMETA_TileSaveData>{};
    (*this).CityMapManagerData.BaseStrengthOfTiles = TMap<FGameplayTag, int32>{};
    (*this).CityMapManagerData.LastDayOfTilesIncomeRefresh = 0;
    (*this).StatisticsManagerData.Statistic = TMap<int32, FMETA_StatisticNoteSaveData>{};
    (*this).FinanceManagerData.bInited = false;
    (*this).FinanceManagerData.Balance = 0;
    (*this).ContractManagerData.AvailableContracts = TArray<TSubclassOf<UIGS_ContractID>>{};
    (*this).ContractManagerData.ActiveContractMissions.MoneyMakingMissions = TArray<FMETA_MoneyMakingMissionSave>{};
    (*this).ContractManagerData.ActiveContractMissions.AmbushMissions = TArray<FMETA_AmbushMissionSave>{};
    (*this).ContractManagerData.ActiveContractMissions.StoryMissions = TArray<FMETA_StoryMissionSave>{};
    (*this).ContractManagerData.ActiveContractMissions.TradeMissions = TArray<FMETA_TradeMissionSave>{};
    (*this).ContractManagerData.ActiveContractMissions.TradeDealSellMissions = TArray<FMETA_TradeDealSellMissionSave>{};
    (*this).ContractManagerData.ActiveContractMissions.CinematicMissions = TArray<FMETA_BaseMissionSave>{};
    (*this).ContractManagerData.ActiveContractMissions.TurfWarMissions = TArray<FMETA_TurfWarMissionSave>{};
    (*this).ContractManagerData.ActiveContractMissions.OtherMissions = TArray<TSubclassOf<UMETA_MissionID>>{};
    (*this).ChainContractManagerData.ActiveChainsData = TArray<FIGS_Quick_ActiveChainContractData>{};
    (*this).ChainContractManagerData.ActiveChainType = EIGS_ChainType::UrbanLegend;
    (*this).ChainContractManagerData.LastUsedGenericID = 0;
    (*this).ChainContractManagerData.ChainContractResults = TMap<TSubclassOf<UIGS_ChainContractID>, FIGS_Quick_ChainResultsSaveData>{};
    (*this).ChainContractManagerData.WasPlayingChainMission = false;
    (*this).JobManagerData.CurrentJob = nullptr;
    (*this).JobManagerData.Opportunities.MoneyMakingMissions = TArray<FMETA_MoneyMakingMissionSave>{};
    (*this).JobManagerData.Opportunities.AmbushMissions = TArray<FMETA_AmbushMissionSave>{};
    (*this).JobManagerData.Opportunities.StoryMissions = TArray<FMETA_StoryMissionSave>{};
    (*this).JobManagerData.Opportunities.TradeMissions = TArray<FMETA_TradeMissionSave>{};
    (*this).JobManagerData.Opportunities.TradeDealSellMissions = TArray<FMETA_TradeDealSellMissionSave>{};
    (*this).JobManagerData.Opportunities.CinematicMissions = TArray<FMETA_BaseMissionSave>{};
    (*this).JobManagerData.Opportunities.TurfWarMissions = TArray<FMETA_TurfWarMissionSave>{};
    (*this).JobManagerData.Opportunities.OtherMissions = TArray<TSubclassOf<UMETA_MissionID>>{};
    (*this).JobManagerData.LastSelectedDifficulties = TMap<EIGS_QPModeSource, EIGS_UserDifficulty>{};
    (*this).JobManagerData.LastPlayedMission.MoneyMakingMissions = TArray<FMETA_MoneyMakingMissionSave>{};
    (*this).JobManagerData.LastPlayedMission.AmbushMissions = TArray<FMETA_AmbushMissionSave>{};
    (*this).JobManagerData.LastPlayedMission.StoryMissions = TArray<FMETA_StoryMissionSave>{};
    (*this).JobManagerData.LastPlayedMission.TradeMissions = TArray<FMETA_TradeMissionSave>{};
    (*this).JobManagerData.LastPlayedMission.TradeDealSellMissions = TArray<FMETA_TradeDealSellMissionSave>{};
    (*this).JobManagerData.LastPlayedMission.CinematicMissions = TArray<FMETA_BaseMissionSave>{};
    (*this).JobManagerData.LastPlayedMission.TurfWarMissions = TArray<FMETA_TurfWarMissionSave>{};
    (*this).JobManagerData.LastPlayedMission.OtherMissions = TArray<TSubclassOf<UMETA_MissionID>>{};
    (*this).JobManagerData.FinishedMissionsIDs = TArray<FGuid>{};
    (*this).JobManagerData.HordeModeMissions = TArray<FMETA_HordeModeMissionSave>{};
    (*this).JobManagerData.bLastPlayedWasChain = false;
    (*this).PlayerManagerData.RespectPoints = 0;
    (*this).PlayerManagerData.TotalScorePoints = 0;
    (*this).EntitlementItemsData.IDs = FGameplayTagContainer();
    (*this).SaveDataVersion.JsonVersion = 0;
    (*this).SaveDataVersion.RevisionCreated = TEXT("");
    (*this).SaveDataVersion.RevisionSaved = TEXT("");
    (*this).SaveDataVersion.SnapshotRevision = TEXT("");
    (*this).WantsToGoOffline = false;
}
