#include "IGS_CarryableBase.h"
#include "IGS_SkinHandlerBase.h"

AIGS_CarryableBase::AIGS_CarryableBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UIGS_SkinHandlerBase>(TEXT("SkinHandler"));
    (*this).SkinHandler = gen;
}

