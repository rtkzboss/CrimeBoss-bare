#include "IGS_FirstPersonCarryablesAnimDatabase.h"

FIGS_FirstPersonCarryablesAnimDatabase::FIGS_FirstPersonCarryablesAnimDatabase() {
    (*this).ID = FSoftObjectPath();
    (*this).CarryableItemThrow = nullptr;
    (*this).CarryableItemThrowLow = nullptr;
    (*this).CarryableItemObjectThrow = nullptr;
    (*this).CarryableItemObjectThrowLow = nullptr;
}
