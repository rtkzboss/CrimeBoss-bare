#include "IGS_MutableProfile.h"

FIGS_MutableProfile::FIGS_MutableProfile() {
    (*this).ID = FSoftObjectPath();
    (*this).MutableProfiles = {};
}
