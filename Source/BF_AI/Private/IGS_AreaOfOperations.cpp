#include "IGS_AreaOfOperations.h"

FIGS_AreaOfOperations::FIGS_AreaOfOperations() {
    (*this).AreaOfOperation = {};
    (*this).AllowedPath = {};
    (*this).LastStartingRoom = nullptr;
    (*this).LastDepth = 0;
    (*this).Enabled = false;
}
