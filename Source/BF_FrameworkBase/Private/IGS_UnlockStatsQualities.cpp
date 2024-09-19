#include "IGS_UnlockStatsQualities.h"

FIGS_UnlockStatsQualities::FIGS_UnlockStatsQualities() {
    (*this).Qualities = TMap<EMETA_ItemQuality, FIGS_UnlockStatsLevels>{};
}
