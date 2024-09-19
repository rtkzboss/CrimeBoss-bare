#include "IGS_BagInfo.h"

FIGS_BagInfo::FIGS_BagInfo() {
    (*this).BagCount = 0;
    (*this).BagTypes = TArray<EIGS_BagType>{};
}
