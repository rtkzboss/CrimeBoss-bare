#include "IGS_WeaponPickupActor.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

AIGS_WeaponPickupActor::AIGS_WeaponPickupActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USkeletalMeshComponentBudgeted>(TEXT("RootComp"))) {
    auto gen = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SightModMesh"));
    auto gen2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VisibilityModMesh"));
    auto gen3 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BarrelModMesh"));
    auto gen4 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GripModMesh"));
    auto gen5 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MagazineModMesh"));
    auto gen6 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StockModMesh"));
    (*this).WeaponSkin = FSoftObjectPath();
    auto gen7 = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen7->ContainerPtrToValuePtr<FName>(&(*this).WeaponSkinTag, 0)) = TEXT("ID.Skins.Weapons.Default.Base");
    (*this).DefaultMesh = FSoftObjectPath();
    auto gen8 = Cast<USkeletalMeshComponentBudgeted>(GetDefaultSubobjectByName(TEXT("RootComp")));
    (*this).WeaponPickupSkelMeshComp = gen8;
    (*this).SightModMesh = gen;
    (*this).VisibilityModMesh = gen2;
    (*this).BarrelModMesh = gen3;
    (*this).GripModMesh = gen4;
    (*this).MagazineModMesh = gen5;
    (*this).StockModMesh = gen6;
    (*this).WeaponModsArray = {gen, gen2, gen3, gen4, gen6, gen5};
    (*this).mR_IsVisible = true;
    (*this).IsPickableByAI = true;
    (*this).PickupMeshComp = gen8;
    (*this).SceneRoot = gen8;
    (*this).RootComponent = gen8;
    if (gen) gen->SetupAttachment(gen8);
    if (gen2) gen2->SetupAttachment(gen8);
    if (gen3) gen3->SetupAttachment(gen8);
    if (gen4) gen4->SetupAttachment(gen8);
    if (gen5) gen5->SetupAttachment(gen8);
    if (gen6) gen6->SetupAttachment(gen8);
}

void AIGS_WeaponPickupActor::Setup(const TSubclassOf<UMETA_WeaponInventoryObject>& inItemClass, const TSoftObjectPtr<UIGS_WeaponSkinData> inSkin) {
}

void AIGS_WeaponPickupActor::OnRep_WeaponSkin() {
}

void AIGS_WeaponPickupActor::OnRep_WeaponClass() {
}

void AIGS_WeaponPickupActor::OnRep_UniversalData() {
}

void AIGS_WeaponPickupActor::OnRep_IsVisible() {
}

bool AIGS_WeaponPickupActor::DoesItemHaveProperty(EIGS_ItemPropertyFlags inItemFlag) {
    return false;
}

void AIGS_WeaponPickupActor::ApplyUniversalData_Implementation(FIGS_InventoryObjectUniversalData inUniversalData) {
}

void AIGS_WeaponPickupActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(AIGS_WeaponPickupActor, R_WeaponClassToAdd);
    DOREPLIFETIME(AIGS_WeaponPickupActor, R_UniversalData);
    DOREPLIFETIME(AIGS_WeaponPickupActor, WeaponSkin);
    DOREPLIFETIME(AIGS_WeaponPickupActor, mR_IsVisible);
}

