#include "META_BlackmarketManagerComponent.h"
#include "Templates/SubclassOf.h"

UMETA_BlackmarketManagerComponent::UMETA_BlackmarketManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).PrimaryComponentTick.bCanEverTick = true;
}

void UMETA_BlackmarketManagerComponent::SplitItemPool(const TArray<UMETA_BaseObject*>& inItems, TArray<UMETA_Weapon*>& outWeapons, TArray<UMETA_Equipment*>& outEquipment) {
}

void UMETA_BlackmarketManagerComponent::RefreshBlackmarketItems_Implementation(const EMETA_BlackmarketType inMarketType) {
}

void UMETA_BlackmarketManagerComponent::RecalculateCharacterPricesInShop() {
}

void UMETA_BlackmarketManagerComponent::ProcessWeaponEvent() {
}

void UMETA_BlackmarketManagerComponent::ProcessUnseenUnlockedItemsFromQuickplay() {
}

void UMETA_BlackmarketManagerComponent::ProcessHireArmyEvent() {
}

bool UMETA_BlackmarketManagerComponent::IsWeaponEventActive() const {
    return false;
}


bool UMETA_BlackmarketManagerComponent::IsHireArmyEventUnlocked() const {
    return false;
}

bool UMETA_BlackmarketManagerComponent::IsHireArmyEventActive() const {
    return false;
}

bool UMETA_BlackmarketManagerComponent::IsEquipmentEventActive() const {
    return false;
}

bool UMETA_BlackmarketManagerComponent::IsBMLootEventReady_Implementation() const {
    return false;
}

void UMETA_BlackmarketManagerComponent::HandlePurchasedItemRemoval(UMETA_BaseObject* inItem) {
}

int32 UMETA_BlackmarketManagerComponent::GetWeaponsPoolRefreshPrice_Implementation() const {
    return 0;
}

TArray<UMETA_Weapon*> UMETA_BlackmarketManagerComponent::GetWeaponsPoolForBMWeaponEvent() const {
    return {};
}

FGameplayTag UMETA_BlackmarketManagerComponent::GetWeaponEventUnlockTag() const {
    return FGameplayTag();
}

TArray<UMETA_Character*> UMETA_BlackmarketManagerComponent::GetUniqueHeistersPoolForBlackmarket(EMETA_RespectLvl inCurrentBossStatus, int32 inTargetAmountOfUnseenItemsForPurchase) {
    return {};
}

TArray<UMETA_PlotlineAsset*> UMETA_BlackmarketManagerComponent::GetPlotlineAssetsPool() const {
    return {};
}

int32 UMETA_BlackmarketManagerComponent::GetNextUniqueGenericID() {
    return 0;
}

TSet<int32> UMETA_BlackmarketManagerComponent::GetManyUniqueGenericIDs(int32 inAmount) {
    return {};
}

TArray<TSubclassOf<UIGS_EquipmentInventoryObject>> UMETA_BlackmarketManagerComponent::GetLockedEquipmentIDsForCurrentBMEquipmentEvent_Implementation() const {
    return {};
}

FGameplayTag UMETA_BlackmarketManagerComponent::GetHireArmyEventUnlockTag() const {
    return FGameplayTag();
}

FMETA_ArmyTierConfiguration UMETA_BlackmarketManagerComponent::GetHireArmyEventData_Implementation(bool& bActive) const {
    return FMETA_ArmyTierConfiguration{};
}

int32 UMETA_BlackmarketManagerComponent::GetHeistersPoolRefreshPrice_Implementation() const {
    return 0;
}

TArray<UMETA_Equipment*> UMETA_BlackmarketManagerComponent::GetEquipmentPoolForBMEquipmentEvent() const {
    return {};
}

TArray<UMETA_BaseObject*> UMETA_BlackmarketManagerComponent::GetCurrentBlackmarketPool() {
    return {};
}

int32 UMETA_BlackmarketManagerComponent::GetCostOfSoldierForHire(EMETA_RespectLvl inRespect) const {
    return 0;
}

bool UMETA_BlackmarketManagerComponent::GetBPEventWeaponInfoByCurrentBossRespect(FMETA_BMEventWeaponData& outWeaponEventData) {
    return false;
}

bool UMETA_BlackmarketManagerComponent::GetBPEventEquipmentInfoByCurrentBossRespect(FMETA_BMEventEquipmentData& outEquipmentEventData) {
    return false;
}

TMap<FMETA_VendorLootKey, FMETA_BMEventLootData> UMETA_BlackmarketManagerComponent::GetBMEventLootDataForVendors() const {
    return {};
}

TArray<UMETA_BaseObject*> UMETA_BlackmarketManagerComponent::GetBlackmarketPool() {
    return {};
}

int32 UMETA_BlackmarketManagerComponent::GetAmountOfSoldiersCanBeBought_Implementation() {
    return 0;
}

int32 UMETA_BlackmarketManagerComponent::GetAmountOfGeneratedSoldiers() const {
    return 0;
}

bool UMETA_BlackmarketManagerComponent::ForceWeaponsPoolRefresh_Implementation() {
    return false;
}

bool UMETA_BlackmarketManagerComponent::ForceHeistersPoolRefresh_Implementation() {
    return false;
}

UMETA_Weapon* UMETA_BlackmarketManagerComponent::DuplicateBlackmarketWeapon(const UMETA_Weapon* inSourceWeapon) {
    return nullptr;
}

UMETA_Equipment* UMETA_BlackmarketManagerComponent::DuplicateBlackmarketEquipment(const UMETA_Equipment* inSourceEquipment) {
    return nullptr;
}

void UMETA_BlackmarketManagerComponent::Debug_ProcessWeaponEvent() {
}

UMETA_Weapon* UMETA_BlackmarketManagerComponent::CreateBlackmarketWeapon(const FGameplayTag& inWeaponTag) {
    return nullptr;
}

UMETA_Equipment* UMETA_BlackmarketManagerComponent::CreateBlackmarketEquipment(const FGameplayTag& inEquipmentTag) {
    return nullptr;
}

void UMETA_BlackmarketManagerComponent::CheckWeaponEventFinished() {
}

void UMETA_BlackmarketManagerComponent::CheckHireArmyEventFinished() {
}

void UMETA_BlackmarketManagerComponent::CheckEquipmentEventFinished() {
}

bool UMETA_BlackmarketManagerComponent::CanWeaponEventBeTriggered() {
    return false;
}

int32 UMETA_BlackmarketManagerComponent::CalculateWeaponsPoolRefreshStartPrice() {
    return 0;
}

int32 UMETA_BlackmarketManagerComponent::CalculateWeaponsPoolRefreshCost() const {
    return 0;
}

void UMETA_BlackmarketManagerComponent::BuySoldiers_Implementation(int32 inAmount, int32& outAmountOfSoldiersBought) {
}

bool UMETA_BlackmarketManagerComponent::AreCampaignWeaponSkinsEnabled() const {
    return false;
}

void UMETA_BlackmarketManagerComponent::ActivateLootEventByVendor_Implementation(FMETA_VendorLootKey inVendorLootKey) {
}

