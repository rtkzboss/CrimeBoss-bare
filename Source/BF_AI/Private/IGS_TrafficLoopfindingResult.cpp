#include "IGS_TrafficLoopfindingResult.h"

FIGS_TrafficLoopfindingResult::FIGS_TrafficLoopfindingResult() {
    (*this).ClassicLoops = TArray<FIGS_TrafficLoop>{};
    (*this).ReversedLoops = TArray<FIGS_TrafficLoop>{};
}
