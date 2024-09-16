#include "META_ConvertersData.h"
#include "Templates/SubclassOf.h"

UMETA_ConvertersData::UMETA_ConvertersData() {
}

FGameplayTagContainer UMETA_ConvertersData::GetCharactersTagFromSaveForCrew(UObject* inWCO, TArray<FMETA_HeisterSaveData>& inUniqueCharacters) {
    return FGameplayTagContainer{};
}

TArray<FMETA_WeaponSaveData> UMETA_ConvertersData::ConvertWeaponsToSave2(TArray<UMETA_Weapon*>& inWeapons) {
    return {};
}

TMap<TSubclassOf<UMETA_WeaponInventoryObject>, FMETA_WeaponSaveDataArray> UMETA_ConvertersData::ConvertWeaponsToSave(TMap<TSubclassOf<UMETA_WeaponInventoryObject>, FMETA_WeaponAmountInfo>& inWeapons) {
    return {};
}

TArray<FMETA_WeaponSkinSaveData> UMETA_ConvertersData::ConvertWeaponSkinsDataToSave(TArray<UMETA_WeaponSkin*>& inWeaponSkinsPool) {
    return {};
}

TArray<UMETA_WeaponSkin*> UMETA_ConvertersData::ConvertWeaponSkinsDataFromSave(UObject* inWCO, TArray<FMETA_WeaponSkinSaveData> inWeaponSkinsSaveData) {
    return {};
}

TArray<UMETA_Weapon*> UMETA_ConvertersData::ConvertWeaponsFromSave2(UObject* inWCO, const TArray<FMETA_WeaponSaveData>& inWeapons) {
    return {};
}

TArray<UMETA_Weapon*> UMETA_ConvertersData::ConvertWeaponsFromSave(UObject* inWCO, const TMap<TSubclassOf<UMETA_WeaponInventoryObject>, FMETA_WeaponSaveData>& inWeapons) {
    return {};
}

TArray<UMETA_Weapon*> UMETA_ConvertersData::ConvertWeaponsArrayFromSave(UObject* inWCO, const TMap<TSubclassOf<UMETA_WeaponInventoryObject>, FMETA_WeaponSaveData>& inWeapons) {
    return {};
}

TArray<UMETA_Character*> UMETA_ConvertersData::ConvertUniqueCharactersFromSaveForBlackmarket(UObject* inWCO, EMETA_RespectLvl inBossRespect, TArray<FMETA_HeisterSaveData>& inUniqueCharacters) {
    return {};
}

TMap<FGameplayTag, FMETA_TileSaveData> UMETA_ConvertersData::ConvertTilesDataToSave(TMap<FGameplayTag, UMapTile*>& inTiles) {
    return {};
}

void UMETA_ConvertersData::ConvertTilesDataFromSave(TMap<FGameplayTag, UMapTile*>& inTiles, TMap<FGameplayTag, FMETA_TileSaveData> inTilesSaveData) {
}

TMap<TSubclassOf<UMETA_WeaponInventoryObject>, FMETA_WeaponAmountInfo> UMETA_ConvertersData::ConvertStashWeaponsFromSave(UObject* inWCO, const TMap<TSubclassOf<UMETA_WeaponInventoryObject>, FMETA_WeaponSaveDataArray>& inWeapons) {
    return {};
}

TArray<FMETA_PerkSaveData> UMETA_ConvertersData::ConvertPerksDataToSave(TArray<UMETA_Perk*>& inPerksPool) {
    return {};
}

TArray<UMETA_Perk*> UMETA_ConvertersData::ConvertPerksDataFromSave(UObject* inWCO, TArray<FMETA_PerkSaveData> inPerksSaveData) {
    return {};
}

FMETA_MissionsSave UMETA_ConvertersData::ConvertMissionsToSave(TArray<UMETA_BaseMission*> inMissions, TArray<UMETA_BaseMission*> inTurfMissions) {
    return FMETA_MissionsSave{};
}

TArray<UMETA_BaseMission*> UMETA_ConvertersData::ConvertMissionsFromSave(const UObject* inWCO, FMETA_MissionsSave& inMissions, TArray<UMETA_BaseMission*>& outTurfWarMissions) {
    return {};
}

void UMETA_ConvertersData::ConvertMissionResultMeta2FPS(EMETA_JobResult MetaResult, ECommonMissionResult& FPSResult) {
}

void UMETA_ConvertersData::ConvertMissionResultFPS2Meta(ECommonMissionResult FPSResult, EMETA_JobResult& MetaResult) {
}

void UMETA_ConvertersData::ConvertLootFromFPS(UObject* inWCO, TArray<TSubclassOf<UIGS_LootItemInventoryObject>>& inLoot, TMap<FGameplayTag, int32>& outMetaLoot, int32& CashLoot) {
}

TMap<TSubclassOf<UMETA_WeaponInventoryObject>, FMETA_WeaponSaveData> UMETA_ConvertersData::ConvertLiveWeaponsToSave(TArray<UMETA_Weapon*>& inWeapons) {
    return {};
}

TMap<TSubclassOf<UIGS_EquipmentInventoryObject>, FMETA_EquipmentSaveData> UMETA_ConvertersData::ConvertLiveEquipmentToSave(TArray<UMETA_Equipment*>& inEquipment) {
    return {};
}

TArray<FMETA_GraphStructSave> UMETA_ConvertersData::ConvertGraphInfoToSave(TArray<FMETA_GraphStruct>& inGraphInfo) {
    return {};
}

TArray<FMETA_GraphStruct> UMETA_ConvertersData::ConvertGraphInfoFromSave(TArray<FMETA_GraphStructSave>& inGraphInfo) {
    return {};
}

TArray<UMETA_Character*> UMETA_ConvertersData::ConvertGenericCharactersFromSave(UObject* inWCO, TArray<FMETA_GenericCharacterSave>& inGenericCharacters) {
    return {};
}

TArray<FMETA_EquipmentSaveData> UMETA_ConvertersData::ConvertEquipmentToSave2(TArray<UMETA_Equipment*>& inEquipment) {
    return {};
}

TArray<FMETA_EquipmentSaveData> UMETA_ConvertersData::ConvertEquipmentToSave(TArray<UMETA_Equipment*>& inEquipment) {
    return {};
}

TArray<UMETA_Equipment*> UMETA_ConvertersData::ConvertEquipmentFromSave2(UObject* inWCO, TMap<TSubclassOf<UIGS_EquipmentInventoryObject>, FMETA_EquipmentSaveData>& inEquipment) {
    return {};
}

TArray<UMETA_Equipment*> UMETA_ConvertersData::ConvertEquipmentFromSave(UObject* inWCO, TArray<FMETA_EquipmentSaveData>& inEquipment) {
    return {};
}

void UMETA_ConvertersData::ConvertCharactersToSave(TArray<UMETA_Character*>& inCharacters, bool inIgnoreUnique, TArray<FMETA_GenericCharacterSave>& outGenericCharacters, TArray<FMETA_HeisterSaveData>& outUniqueCharacters) {
}

TArray<UMETA_Character*> UMETA_ConvertersData::ConvertCharactersFromSaveForCrew(UObject* inWCO, TArray<FMETA_GenericCharacterSave>& inGenericCharacters, TArray<FMETA_HeisterSaveData>& inUniqueCharacters, TArray<FMETA_EquipmentSaveData>& outEquipmentShouldBeAddedToStashByID, TArray<UMETA_Equipment*>& outEquipmentShouldBeAddedToStashByObject) {
    return {};
}

TArray<UMETA_Character*> UMETA_ConvertersData::ConvertCharactersFromSaveForBlackmarket(UObject* inWCO, EMETA_RespectLvl inBossRespect, TArray<FMETA_GenericCharacterSave>& inGenericCharacters, TArray<FMETA_HeisterSaveData>& inUniqueCharacters) {
    return {};
}

void UMETA_ConvertersData::ConvertBossCharacterToSave(const UMETA_BossCharacter* inBossCharacter, FMETA_BossCharacterSave& outBossCharacter) {
}

TArray<FMETA_CharacterSkinSaveData> UMETA_ConvertersData::ConvertBossCharacterSkinsDataToSave(TArray<UMETA_CharacterSkin*>& inBossCharacterSkinsPool) {
    return {};
}

TArray<UMETA_CharacterSkin*> UMETA_ConvertersData::ConvertBossCharacterSkinsDataFromSave(UObject* inWCO, TArray<FMETA_CharacterSkinSaveData> inBossCharacterSkinsSaveData) {
    return {};
}

UMETA_BossCharacter* UMETA_ConvertersData::ConvertBossCharacterFromSave(UObject* inWCO, FMETA_BossCharacterSave& inBossCharacter) {
    return nullptr;
}

