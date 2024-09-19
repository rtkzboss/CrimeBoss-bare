#include "META_TurfHistory.h"

FMETA_TurfHistory::FMETA_TurfHistory() {
    (*this).GangTurfHistory = TMap<EMETA_Gang, FMETA_GangTurfHistory>{};
}
