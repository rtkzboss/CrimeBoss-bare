#include "HoudiniAssetActor.h"
#include "HoudiniAssetComponent.h"

AHoudiniAssetActor::AHoudiniAssetActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UHoudiniAssetComponent>(TEXT("HoudiniAssetComponent"));
    (*this).HoudiniAssetComponent = gen;
    auto gen2 = AActor::StaticClass()->FindPropertyByName("bCanBeDamaged");
    CastField<FBoolProperty>(gen2)->SetPropertyValue(&(*gen2->ContainerPtrToValuePtr<uint8>(&(*this), 0)), false);
    (*this).RootComponent = gen;
}

