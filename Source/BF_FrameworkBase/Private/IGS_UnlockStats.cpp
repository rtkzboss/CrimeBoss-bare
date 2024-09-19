#include "IGS_UnlockStats.h"

FIGS_UnlockStats::FIGS_UnlockStats() {
    (*this).ItemStats = TMap<FGameplayTag, FIGS_UnlockStatsLevels>{};
    (*this).CategoryStats = TMap<EIGS_UnlockCategory, FIGS_UnlockStatsQualities>{};
}
