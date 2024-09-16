#include "IGS_LootBagPickup.h"
#include "Components/SkeletalMeshComponent.h"

AIGS_LootBagPickup::AIGS_LootBagPickup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USkeletalMeshComponent>(TEXT("RootComp"))) {
    (*this).PlacedInLevelItemType = EIGS_ItemType::Item_UNKNOWN;
    auto gen = Cast<USkeletalMeshComponent>(GetDefaultSubobjectByName(TEXT("RootComp")));
    (*this).SkeletalMesh = gen;
    (*this).IsPickableByAI = true;
    (*this).PickupMeshComp = gen;
    (*this).SceneRoot = gen;
    (*this).RootComponent = gen;
}


void AIGS_LootBagPickup::NotifyPickup(AIGS_GameCharacterFramework* inCharacter) {
}

void AIGS_LootBagPickup::NotifyCatchInAir(AIGS_GameCharacterFramework* inCharacter) {
}

void AIGS_LootBagPickup::Multicast_LootBagGrabbed_Implementation() {
}

EIGS_ItemType AIGS_LootBagPickup::GetItemType() const {
    return EIGS_ItemType::Item_Weapon;
}

TArray<FIGS_LootBagSingleItem> AIGS_LootBagPickup::GetItems() {
    return {};
}



