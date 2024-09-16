#include "META_NotificationDatabase.h"
#include "Templates/SubclassOf.h"

UMETA_NotificationDatabase::UMETA_NotificationDatabase() {
}

FMETA_NotificationTableRow UMETA_NotificationDatabase::GetNotificationData(UObject* inWCO, const TSoftObjectPtr<UMETA_NotificationID> inClass, bool& outSucceeded) {
    return FMETA_NotificationTableRow{};
}

UMETA_WeaponNotification* UMETA_NotificationDatabase::CreateWeaponNotificationObject(UObject* inWCO, TSoftObjectPtr<UMETA_NotificationID> inID, UMETA_Weapon* inWeapon) {
    return nullptr;
}

UMETA_TurfNotification* UMETA_NotificationDatabase::CreateTurfNotificationObject(UObject* inWCO, TSoftObjectPtr<UMETA_NotificationID> inID, UMapTile* inMaptile, EMETA_Gang inGang) {
    return nullptr;
}

UMETA_TradeNotification* UMETA_NotificationDatabase::CreateTradeNotificationObject(UObject* inWCO, TSoftObjectPtr<UMETA_NotificationID> inID, EMETA_TradeVendor inVendor, FGameplayTag inLoot, FText inMoney) {
    return nullptr;
}

UMETA_TextNotification* UMETA_NotificationDatabase::CreateTextNotificationObject(UObject* inWCO, TSoftObjectPtr<UMETA_NotificationID> inID, FText inOption) {
    return nullptr;
}

UMETA_TaskNotification* UMETA_NotificationDatabase::CreateTaskNotificationObject(UObject* inWCO, TSoftObjectPtr<UMETA_NotificationID> inID, UMETA_TaskCondition* inTask, UMETA_BaseGoal* inGoal) {
    return nullptr;
}

UMETA_MissionNotification* UMETA_NotificationDatabase::CreateMissionNotificationObject(UObject* inWCO, TSoftObjectPtr<UMETA_NotificationID> inID, UMETA_BaseMission* inMission) {
    return nullptr;
}

UMETA_LootNotification* UMETA_NotificationDatabase::CreateLootNotificationObject(UObject* inWCO, TSoftObjectPtr<UMETA_NotificationID> inID, const FText& inLootCategory, const EMETA_LootPurpose inLootPurpose, const int32 InValue) {
    return nullptr;
}

UMETA_GoalNotification* UMETA_NotificationDatabase::CreateGoalNotificationObject(UObject* inWCO, TSoftObjectPtr<UMETA_NotificationID> inID, UMETA_BaseGoal* inGoal) {
    return nullptr;
}

UMETA_FinancialNotification* UMETA_NotificationDatabase::CreateFinancialNotificationObject(UObject* inWCO, TSoftObjectPtr<UMETA_NotificationID> inID, int32 inMoney, bool inShowAbsolute) {
    return nullptr;
}

UMETA_DetectiveNotification* UMETA_NotificationDatabase::CreateDetectiveNotificationObject(UObject* inWCO, TSoftObjectPtr<UMETA_NotificationID> inID, TSubclassOf<UMETA_DetectiveID> inDetective, EMETA_Gang inGang, UMapTile* inTile) {
    return nullptr;
}

UMETA_CharacterNotification* UMETA_NotificationDatabase::CreateCharacterNotificationObject(UObject* inWCO, TSoftObjectPtr<UMETA_NotificationID> inID, UMETA_Character* inCharacter, FText inOption) {
    return nullptr;
}

UMETA_AssetNotification* UMETA_NotificationDatabase::CreateAssetNotificationObject(UObject* inWCO, TSoftObjectPtr<UMETA_NotificationID> inID, UMETA_PlotlineAsset* InAsset) {
    return nullptr;
}

