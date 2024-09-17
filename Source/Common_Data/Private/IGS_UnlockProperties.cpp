#include "IGS_UnlockProperties.h"

FIGS_UnlockProperties::FIGS_UnlockProperties() {
    (*this).IsUnlockable = false;
    (*this).RequiredTags = FGameplayTagContainer();
    (*this).RequiredValue = 0.000000000e+00f;
    (*this).ShowIfNotOwned = true;
    (*this).UnlockCoverImage = FSoftObjectPath();
}
