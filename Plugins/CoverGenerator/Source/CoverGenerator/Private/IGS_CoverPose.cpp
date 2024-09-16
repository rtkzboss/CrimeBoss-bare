#include "IGS_CoverPose.h"

FIGS_CoverPose::FIGS_CoverPose() {
    (*this).ShootRanges = {FIGS_ListWrapper{}};
    (*this).LeftSideStepShootRanges = {FIGS_ListWrapper{}};
    (*this).RightSideStepShootRanges = {FIGS_ListWrapper{}};
}
