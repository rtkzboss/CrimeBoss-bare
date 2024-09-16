#include "IGS_SuspicionEventActor.h"

AIGS_SuspicionEventActor::AIGS_SuspicionEventActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).PrimaryActorTick.bCanEverTick = true;
    (*this).PrimaryActorTick.bStartWithTickEnabled = false;
}

