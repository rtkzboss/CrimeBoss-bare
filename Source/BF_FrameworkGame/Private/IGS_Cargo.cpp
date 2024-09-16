#include "IGS_Cargo.h"

AIGS_Cargo::AIGS_Cargo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).PrimaryActorTick.bCanEverTick = true;
}

