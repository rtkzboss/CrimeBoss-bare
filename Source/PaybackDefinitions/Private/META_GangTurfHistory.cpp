#include "META_GangTurfHistory.h"

FMETA_GangTurfHistory::FMETA_GangTurfHistory() {
    (*this).CapturedTerritory = TMap<EMETA_Gang, int32>{};
    (*this).LostTerritory = TMap<EMETA_Gang, int32>{};
}
