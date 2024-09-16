#include "PFPathBase.h"
#include "PFPathComponent.h"

APFPathBase::APFPathBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UPFPathComponent>(TEXT("PathToFollow"));
    (*this).PathToFollow = gen;
    auto gen2 = AActor::StaticClass()->FindPropertyByName("bHidden");
    CastField<FBoolProperty>(gen2)->SetPropertyValue(&(*gen2->ContainerPtrToValuePtr<uint8>(&(*this), 0)), true);
    (*this).RootComponent = gen;
}

