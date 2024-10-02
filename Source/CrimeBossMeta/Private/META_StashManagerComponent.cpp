#include "META_StashManagerComponent.h"
#include "Templates/SubclassOf.h"

UMETA_StashManagerComponent::UMETA_StashManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).PrimaryComponentTick.bCanEverTick = true;
}

bool UMETA_StashManagerComponent::TryGetValidParentLootTag(FGameplayTag inLootTag, FGameplayTag& outMetaTag) {
    return false;
}

void UMETA_StashManagerComponent::SetCashForPartner(EMETA_Partner Partner, int32 inCash) {
}

bool UMETA_StashManagerComponent::RemoveEquipmentFromStashByObject(UMETA_Equipment* inEquipment) {
    return false;
}


void UMETA_StashManagerComponent::GetWarehouseAttackLosses(int32& outRemovedMoney, TMap<FGameplayTag, int32>& outRemovedLoot) const {
}

TMap<FGameplayTag, int32> UMETA_StashManagerComponent::GetSortedLoot(bool inAscSort) {
    return {};
}

void UMETA_StashManagerComponent::GetPlayersArmyTier_Implementation(EMETA_ArmyTier& ArmyTier) const {
}

FMETA_PartnerInfo UMETA_StashManagerComponent::GetPartnerInfo(EMETA_Partner Partner, bool& bSuccess) {
    return FMETA_PartnerInfo{};
}

TArray<FGameplayTag> UMETA_StashManagerComponent::GetParentLootTagsByOperator(EMETA_ConditionOperator inOperator, int32 InValue) {
    return {};
}

FGameplayTagContainer UMETA_StashManagerComponent::GetOwnedItems(TArray<UMETA_Weapon*>& outWeapons, TArray<UMETA_Equipment*>& outEquipment) {
    return FGameplayTagContainer();
}

TArray<FGameplayTag> UMETA_StashManagerComponent::GetLootTagsByOperator(EMETA_ConditionOperator inOperator, int32 InValue) {
    return {};
}

FGameplayTagContainer UMETA_StashManagerComponent::GetEquippedItems(TArray<UMETA_Weapon*>& outWeapons, TArray<UMETA_Equipment*>& outEquipment) {
    return FGameplayTagContainer();
}

void UMETA_StashManagerComponent::ChangeLootByValue(FGameplayTag inLootTag, int32 InValue, bool inRawValue) {
}

void UMETA_StashManagerComponent::ChangeCashForPartner(EMETA_Partner Partner, int32 ByValue) {
}

void UMETA_StashManagerComponent::AddEquipmentToStashByObject(UMETA_Equipment* inEquipment) {
}

UMETA_Equipment* UMETA_StashManagerComponent::AddEquipmentToStashByID(TSubclassOf<UIGS_EquipmentInventoryObject> inEquipmentId) {
    return nullptr;
}

