#include "IGS_CoverPose.h"

FIGS_CoverPose::FIGS_CoverPose() {
    (*this).ShootRanges = TArray<FIGS_ListWrapper>{FIGS_ListWrapper{}};
    (*this).LeftSideStepShootRanges = TArray<FIGS_ListWrapper>{FIGS_ListWrapper{}};
    (*this).RightSideStepShootRanges = TArray<FIGS_ListWrapper>{FIGS_ListWrapper{}};
}
