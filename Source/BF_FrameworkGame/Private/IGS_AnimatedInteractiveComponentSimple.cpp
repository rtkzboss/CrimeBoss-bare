#include "IGS_AnimatedInteractiveComponentSimple.h"

UIGS_AnimatedInteractiveComponentSimple::UIGS_AnimatedInteractiveComponentSimple(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).ObjectMontageToPlay = FSoftObjectPath();
    (*this).bUncrouchBeforeUse = true;
}

