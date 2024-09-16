#include "IGS_BlackmarketManagerBaseComponent.h"

UIGS_BlackmarketManagerBaseComponent::UIGS_BlackmarketManagerBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UIGS_BlackmarketManagerBaseComponent::IsManagerInitialized() const {
    return false;
}

TArray<UMETA_Weapon*> UIGS_BlackmarketManagerBaseComponent::GetWeaponsMarketPool() const {
    return {};
}

UMETA_Weapon* UIGS_BlackmarketManagerBaseComponent::GetWeaponByTagAndSkinTag(FGameplayTag inWeaponTag, FGameplayTag inSkinTag) const {
    return nullptr;
}

UMETA_Weapon* UIGS_BlackmarketManagerBaseComponent::GetWeaponByTag(FGameplayTag inWeaponTag) const {
    return nullptr;
}

TArray<UMETA_Equipment*> UIGS_BlackmarketManagerBaseComponent::GetEquipmentMarketPool() const {
    return {};
}

UMETA_Equipment* UIGS_BlackmarketManagerBaseComponent::GetEquipmentByTag(FGameplayTag inEquipmentTag) const {
    return nullptr;
}

TArray<UMETA_Character*> UIGS_BlackmarketManagerBaseComponent::GetCharactersMarketPool() const {
    return {};
}

UMETA_Character* UIGS_BlackmarketManagerBaseComponent::GetCharacterByTag(FGameplayTag inCharacterTag) const {
    return nullptr;
}

bool UIGS_BlackmarketManagerBaseComponent::BuyItem_Implementation(FGameplayTag itemTag, FGameplayTag screenTag, FGameplayTag SkinTag) {
    return false;
}

