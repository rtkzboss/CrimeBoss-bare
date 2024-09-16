#include "PrefabricatorConstructionSnap.h"
#include "PrefabricatorConstructionSnapComponent.h"

APrefabricatorConstructionSnap::APrefabricatorConstructionSnap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UPrefabricatorConstructionSnapComponent>(TEXT("SnapComponent"));
    (*this).ConstructionSnapComponent = gen;
    (*this).bRelevantForLevelBounds = false;
    auto gen2 = AActor::StaticClass()->FindPropertyByName("bCanBeDamaged");
    CastField<FBoolProperty>(gen2)->SetPropertyValue(&(*gen2->ContainerPtrToValuePtr<uint8>(&(*this), 0)), false);
    (*this).RootComponent = gen;
}

