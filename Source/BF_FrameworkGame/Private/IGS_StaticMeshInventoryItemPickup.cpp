#include "IGS_StaticMeshInventoryItemPickup.h"
#include "Components/StaticMeshComponent.h"

AIGS_StaticMeshInventoryItemPickup::AIGS_StaticMeshInventoryItemPickup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UStaticMeshComponent>(TEXT("RootComp"))) {
    auto gen = Cast<UStaticMeshComponent>(GetDefaultSubobjectByName(TEXT("RootComp")));
    (*this).PickupStaticMeshComp = gen;
    (*this).DefaultMesh = FSoftObjectPath();
    (*this).bIsShineEnabled = true;
    (*this).bTakeMeshFromDatabase = true;
    (*this).PickupMeshComp = gen;
    (*this).SceneRoot = gen;
    (*this).RootComponent = gen;
}

void AIGS_StaticMeshInventoryItemPickup::SetIsShineEnabled(bool inEnabled) {
}

