#include "IGS_HUDPlayerWieldableData.h"

FIGS_HUDPlayerWieldableData::FIGS_HUDPlayerWieldableData() {
    (*this).WieldableID = FSoftObjectPath();
    (*this).WieldableInstance = nullptr;
    (*this).Slot = EIGS_WieldableSlot::S_UNKNOWN;
}
