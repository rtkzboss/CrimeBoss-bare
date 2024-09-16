#include "IGS_Quickplay_BlackMarketManagerComponent.h"

UIGS_Quickplay_BlackMarketManagerComponent::UIGS_Quickplay_BlackMarketManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}



UMETA_Perk* UIGS_Quickplay_BlackMarketManagerComponent::UpgradePerk(UMETA_Perk* inPerk, FGameplayTag inScreenTag) {
    return nullptr;
}

void UIGS_Quickplay_BlackMarketManagerComponent::RemoveItem(FGameplayTag inItemTag) {
}


bool UIGS_Quickplay_BlackMarketManagerComponent::IsItemInPool(FGameplayTag inItemTag) const {
    return false;
}

bool UIGS_Quickplay_BlackMarketManagerComponent::HasPerkInPool(FGameplayTag inPerkTag) const {
    return false;
}

TArray<UMETA_WeaponSkin*> UIGS_Quickplay_BlackMarketManagerComponent::GetWeaponSkinsMarketPool() const {
    return {};
}

TArray<UMETA_WeaponSkin*> UIGS_Quickplay_BlackMarketManagerComponent::GetWeaponSkinsForWeapon(FGameplayTag inItemTag) const {
    return {};
}

UMETA_WeaponSkin* UIGS_Quickplay_BlackMarketManagerComponent::GetWeaponSkinByTag(FGameplayTag inItemTag) const {
    return nullptr;
}

TArray<UMETA_Perk*> UIGS_Quickplay_BlackMarketManagerComponent::GetPerksMarketPool() const {
    return {};
}

UMETA_Perk* UIGS_Quickplay_BlackMarketManagerComponent::GetPerkByTag(FGameplayTag inItemTag) const {
    return nullptr;
}

TArray<UMETA_CharacterSkin*> UIGS_Quickplay_BlackMarketManagerComponent::GetBossCharacterSkinsMarketPool() const {
    return {};
}

UMETA_CharacterSkin* UIGS_Quickplay_BlackMarketManagerComponent::GetBossCharacterSkinByTag(FGameplayTag inItemTag) const {
    return nullptr;
}




void UIGS_Quickplay_BlackMarketManagerComponent::AddItemToPool(FGameplayTag inItemTag) {
}

void UIGS_Quickplay_BlackMarketManagerComponent::AddItemsToPool(FGameplayTagContainer inItemTags) {
}

