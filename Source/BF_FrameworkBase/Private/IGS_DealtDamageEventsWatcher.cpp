#include "IGS_DealtDamageEventsWatcher.h"

UIGS_DealtDamageEventsWatcher::UIGS_DealtDamageEventsWatcher(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).HeadshotMaterial = FSoftObjectPath();
}

