#include "IGS_TrafficLoop.h"

FIGS_TrafficLoop::FIGS_TrafficLoop() {
    (*this).Segments = TArray<FIGS_TrafficLoopSegment>{};
    (*this).Lenght = 0.000000000e+00f;
}
