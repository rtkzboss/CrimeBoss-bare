#include "IGS_AreaOfOperations.h"

FIGS_AreaOfOperations::FIGS_AreaOfOperations() {
    (*this).AreaOfOperation = TArray<AIGS_RoomBase*>{};
    (*this).AllowedPath = TArray<AIGS_RoomBase*>{};
    (*this).LastStartingRoom = nullptr;
    (*this).LastDepth = 0;
    (*this).Enabled = false;
}
