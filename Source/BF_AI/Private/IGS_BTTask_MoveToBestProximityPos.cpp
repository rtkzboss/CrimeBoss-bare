#include "IGS_BTTask_MoveToBestProximityPos.h"

UIGS_BTTask_MoveToBestProximityPos::UIGS_BTTask_MoveToBestProximityPos() {
    (*this).LookPosKey.AllowedTypes = {nullptr};
    (*this).AcceptableRadiusKey.AllowedTypes = {nullptr};
    (*this).BlackboardKey.AllowedTypes = {nullptr, nullptr};
    (*this).NodeName = TEXT("Move Best Proximity Pos");
}

