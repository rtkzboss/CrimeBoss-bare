#include "IGS_WaterCannon.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

AIGS_WaterCannon::AIGS_WaterCannon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).TurretID = -1;
    auto gen = Cast<UStaticMeshComponent>(GetDefaultSubobjectByName(TEXT("SightModMesh")));
    auto gen2 = Cast<UStaticMeshComponent>(GetDefaultSubobjectByName(TEXT("DynamicScopeModMesh")));
    auto gen3 = Cast<UStaticMeshComponent>(GetDefaultSubobjectByName(TEXT("VisibilityModMesh")));
    auto gen4 = Cast<UStaticMeshComponent>(GetDefaultSubobjectByName(TEXT("BarrelModMesh")));
    auto gen5 = Cast<UStaticMeshComponent>(GetDefaultSubobjectByName(TEXT("GripModMesh")));
    auto gen6 = Cast<UStaticMeshComponent>(GetDefaultSubobjectByName(TEXT("StockModMesh")));
    auto gen7 = Cast<UStaticMeshComponent>(GetDefaultSubobjectByName(TEXT("MagazineModMesh")));
    auto gen8 = Cast<UStaticMeshComponent>(GetDefaultSubobjectByName(TEXT("SecondMagazineModMesh")));
    (*this).WeaponModsArray = TArray<UStaticMeshComponent*>{gen, gen2, gen3, gen4, gen5, gen6, gen7, gen8};
}

void AIGS_WaterCannon::RemoveUnusedTurrets_MULTICAST_Implementation() {
}

void AIGS_WaterCannon::MakeVisible_MULTICAST_Implementation() {
}

void AIGS_WaterCannon::CheckItemAndMakeVisible_SERVER_Implementation() {
}

void AIGS_WaterCannon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(AIGS_WaterCannon, IsItemInInventory);
}

