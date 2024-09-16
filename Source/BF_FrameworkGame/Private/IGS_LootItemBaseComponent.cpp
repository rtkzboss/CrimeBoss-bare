#include "IGS_LootItemBaseComponent.h"
#include "Components/ActorComponent.h"

UIGS_LootItemBaseComponent::UIGS_LootItemBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = UActorComponent::StaticClass()->FindPropertyByName("bReplicates");
    CastField<FBoolProperty>(gen)->SetPropertyValue(&(*gen->ContainerPtrToValuePtr<uint8>(&(*this), 0)), true);
    (*this).bCanEverAffectNavigation = false;
}

FIGS_LootItemsData UIGS_LootItemBaseComponent::GetLootItemData() {
    return FIGS_LootItemsData{};
}

