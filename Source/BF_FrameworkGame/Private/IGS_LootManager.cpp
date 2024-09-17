#include "IGS_LootManager.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

UIGS_LootManager::UIGS_LootManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).LootWeightMultiplier = 1.000000000e+00f;
    (*this).SetIsReplicated(true);
}

float UIGS_LootManager::UpdateLootWeightMultiplier(UObject* inWCO) {
    return 0.000000000e+00f;
}

TMap<FGameplayTag, float> UIGS_LootManager::SortLootByTag(TArray<TSubclassOf<UIGS_InventoryObjectFramework>> inLoot) {
    return {};
}

void UIGS_LootManager::SetMissionBagsInWeight(int32 inRequiredBags) {
}

void UIGS_LootManager::SendNewValueToHeisterData(AIGS_GameCharacterFramework* inOwningPawn, float inValueToAdd, bool inIsBonus) const {
}

void UIGS_LootManager::ResetCollectedLoot() {
}

void UIGS_LootManager::RegisterLootItem(TSubclassOf<UIGS_LootItemInventoryObject> inLootItem) {
}

void UIGS_LootManager::RegisterLootCollection(AIGS_LootCollectionBase* inLootCollection) {
}

void UIGS_LootManager::RegisterLootCarryable(TSubclassOf<UIGS_CarryableInventoryObject> inCarryable) {
}

void UIGS_LootManager::OnRep_SecuredLoot(float inOldSecuredLootValue) {
}

void UIGS_LootManager::OnRep_SecuredBonusLoot(float inOldSecuredBonusLootValue) {
}

void UIGS_LootManager::OnPocketLootWeightChanged() {
}

bool UIGS_LootManager::IsObjectiveLootCollected() {
    return false;
}

float UIGS_LootManager::GetValuePercentage(float InValue) {
    return 0.000000000e+00f;
}

float UIGS_LootManager::GetThrowableItemSize(EIGS_LootSize inWeight) const {
    return 0.000000000e+00f;
}

UIGS_LootManager* UIGS_LootManager::GetLootManager(const UObject* inWCO) {
    return nullptr;
}

float UIGS_LootManager::GetItemValueFromClass(TSubclassOf<UIGS_LootItemInventoryObject> inItemClass) {
    return 0.000000000e+00f;
}

FGameplayTag UIGS_LootManager::GetItemTypeFromClass(TSubclassOf<UIGS_LootItemInventoryObject> inItemClass) {
    return FGameplayTag();
}

float UIGS_LootManager::GetItemSize(EIGS_ItemWeight inWeight) const {
    return 0.000000000e+00f;
}

void UIGS_LootManager::ForceSetMissionBagsInWeight(int32 inRequiredBags) {
}

void UIGS_LootManager::DisableLootVoiceLines(UObject* inWCO, bool bDisable) {
}

float UIGS_LootManager::CalculateSpecialLootItemValue(FGameplayTag inItemTag, float inItemWeight) {
    return 0.000000000e+00f;
}

void UIGS_LootManager::CalculateNewLootValue(TSubclassOf<UIGS_InventoryObjectFramework> inInventoryObject, AIGS_GameCharacterFramework* OwningPawn) {
}

void UIGS_LootManager::CalculateNewBonusLootValue(TSubclassOf<UIGS_InventoryObjectFramework> inInventoryObject, AIGS_GameCharacterFramework* OwningPawn) {
}

float UIGS_LootManager::CalculateLootItemValue(float inWeight, FGameplayTag inItemTag, bool inbNewItem, AIGS_GameCharacterFramework* OwningPawn) {
    return 0.000000000e+00f;
}

float UIGS_LootManager::CalculateBonusLootItemValue(float inWeight, FGameplayTag inItemTag, bool inbNewItem) {
    return 0.000000000e+00f;
}

void UIGS_LootManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(UIGS_LootManager, TotalObjectiveValueSpawned);
    DOREPLIFETIME(UIGS_LootManager, NeededObjectiveWeight);
    DOREPLIFETIME(UIGS_LootManager, SecuredLootValue);
    DOREPLIFETIME(UIGS_LootManager, SecuredBonusLootValue);
    DOREPLIFETIME(UIGS_LootManager, LootWeightMultiplier);
}

