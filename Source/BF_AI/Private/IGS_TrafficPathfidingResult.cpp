#include "IGS_TrafficPathfidingResult.h"

FIGS_TrafficPathfidingResult::FIGS_TrafficPathfidingResult() {
    (*this).Spawner = nullptr;
    (*this).Path = TArray<UIGS_TrafficPathComponent*>{};
}
