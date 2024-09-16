#include "IGS_BTTask_MoveToBag.h"

UIGS_BTTask_MoveToBag::UIGS_BTTask_MoveToBag() {
    (*this).OptimalDistance = 2.000000000e+02f;
    (*this).LookPosKey.AllowedTypes = {nullptr};
    (*this).AcceptableRadiusKey.AllowedTypes = {nullptr};
    (*this).BlackboardKey.AllowedTypes = {nullptr, nullptr};
    (*this).NodeName = TEXT("Move To Bag");
}

