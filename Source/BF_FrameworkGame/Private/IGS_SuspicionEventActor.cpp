#include "IGS_SuspicionEventActor.h"

AIGS_SuspicionEventActor::AIGS_SuspicionEventActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).PrimaryActorTick.bStartWithTickEnabled = false;
}

void AIGS_SuspicionEventActor::OnAttachedToActorReleased(TScriptInterface<IIGS_PoolableInterface> inReleasedActor) {
}

void AIGS_SuspicionEventActor::OnAttachedToActorDestroyed(AActor* inDestroyedActor) {
}

