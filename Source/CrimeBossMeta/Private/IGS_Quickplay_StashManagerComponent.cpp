#include "IGS_Quickplay_StashManagerComponent.h"

UIGS_Quickplay_StashManagerComponent::UIGS_Quickplay_StashManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UIGS_Quickplay_StashManagerComponent::SortSavedWeaponsIntoPools(const TArray<UMETA_Weapon*> inWeapons) {
}

void UIGS_Quickplay_StashManagerComponent::SetWeaponSkin(UMETA_Weapon* inWeapon, FGameplayTag inSkinTag) {
}

void UIGS_Quickplay_StashManagerComponent::RemoveItems(FGameplayTagContainer inItemTags) {
}

void UIGS_Quickplay_StashManagerComponent::RemoveItem(FGameplayTag inItemTag) {
}

bool UIGS_Quickplay_StashManagerComponent::IsWeaponSubvariant(FGameplayTag inItemTag) const {
    return false;
}

bool UIGS_Quickplay_StashManagerComponent::IsItemOwned(FGameplayTag inItemTag) const {
    return false;
}

bool UIGS_Quickplay_StashManagerComponent::IsBaseWeaponDLC(FGameplayTag inItemTag) const {
    return false;
}

TArray<UMETA_WeaponSkin*> UIGS_Quickplay_StashManagerComponent::GetWeaponSkinsForWeapon(const UMETA_Weapon* inWeapon, FGameplayTag inItemTag) const {
    return {};
}

TArray<UMETA_WeaponSkin*> UIGS_Quickplay_StashManagerComponent::GetWeaponSkins() const {
    return {};
}

UMETA_WeaponSkin* UIGS_Quickplay_StashManagerComponent::GetWeaponSkinByTag(FGameplayTag inItemTag) const {
    return nullptr;
}

TArray<UMETA_Weapon*> UIGS_Quickplay_StashManagerComponent::GetWeapons() const {
    return {};
}

UMETA_Weapon* UIGS_Quickplay_StashManagerComponent::GetWeaponByTag(FGameplayTag inItemTag) const {
    return nullptr;
}

TArray<UMETA_Weapon*> UIGS_Quickplay_StashManagerComponent::GetSecondaryWeapons() const {
    return {};
}

TArray<UMETA_Weapon*> UIGS_Quickplay_StashManagerComponent::GetPrimaryWeapons() const {
    return {};
}

TArray<UMETA_Perk*> UIGS_Quickplay_StashManagerComponent::GetPerks() const {
    return {};
}

UMETA_Perk* UIGS_Quickplay_StashManagerComponent::GetPerkByTag(FGameplayTag inItemTag) const {
    return nullptr;
}

TArray<UMETA_Weapon*> UIGS_Quickplay_StashManagerComponent::GetMeleeWeapons() const {
    return {};
}

UMETA_BaseObject* UIGS_Quickplay_StashManagerComponent::GetItemByTag(FGameplayTag inItemTag) const {
    return nullptr;
}

UMETA_Equipment* UIGS_Quickplay_StashManagerComponent::GetEquipmentByTag(FGameplayTag inItemTag) const {
    return nullptr;
}

TArray<UMETA_Equipment*> UIGS_Quickplay_StashManagerComponent::GetEquipment() const {
    return {};
}

TArray<UMETA_CharacterSkin*> UIGS_Quickplay_StashManagerComponent::GetBossCharacterSkins() const {
    return {};
}

UMETA_CharacterSkin* UIGS_Quickplay_StashManagerComponent::GetBossCharacterSkinByTag(FGameplayTag inItemTag) const {
    return nullptr;
}

void UIGS_Quickplay_StashManagerComponent::AddItems(FGameplayTagContainer inItemTags) {
}

void UIGS_Quickplay_StashManagerComponent::AddItem(FGameplayTag inItem) {
}

