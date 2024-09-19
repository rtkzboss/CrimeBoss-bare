#include "IGS_LootItemBaseComponent.h"

UIGS_LootItemBaseComponent::UIGS_LootItemBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).SetIsReplicatedByDefault(true);
    (*this).bCanEverAffectNavigation = false;
}

FIGS_LootItemsData UIGS_LootItemBaseComponent::GetLootItemData() {
    return FIGS_LootItemsData{};
}

