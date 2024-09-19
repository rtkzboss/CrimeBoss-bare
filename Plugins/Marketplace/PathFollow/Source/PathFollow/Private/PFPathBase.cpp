#include "PFPathBase.h"
#include "PFPathComponent.h"

APFPathBase::APFPathBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UPFPathComponent>(TEXT("PathToFollow"));
    (*this).PathToFollow = gen;
    (*this).SetHidden(true);
    (*this).RootComponent = gen;
}

