#include "IGS_GroupSharedData.h"

UIGS_GroupSharedData::UIGS_GroupSharedData() {
    (*this).TokenPool = nullptr;
    (*this).LocationsAroundTarget = nullptr;
}

UIGS_TokenPool* UIGS_GroupSharedData::GetTokenPool() const {
    return nullptr;
}

