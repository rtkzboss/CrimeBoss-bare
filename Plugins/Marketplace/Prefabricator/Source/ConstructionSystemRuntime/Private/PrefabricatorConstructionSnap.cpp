#include "PrefabricatorConstructionSnap.h"
#include "PrefabricatorConstructionSnapComponent.h"

APrefabricatorConstructionSnap::APrefabricatorConstructionSnap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UPrefabricatorConstructionSnapComponent>(TEXT("SnapComponent"));
    (*this).ConstructionSnapComponent = gen;
    (*this).bRelevantForLevelBounds = false;
    (*this).SetCanBeDamaged(false);
    (*this).RootComponent = gen;
}

