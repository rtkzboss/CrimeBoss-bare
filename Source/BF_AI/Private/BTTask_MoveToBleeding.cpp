#include "BTTask_MoveToBleeding.h"

UBTTask_MoveToBleeding::UBTTask_MoveToBleeding() {
    (*this).RefreshTimeMin = 4.000000000e+00f;
    (*this).RefreshTimeMax = 6.000000000e+00f;
    (*this).LookPosKey.AllowedTypes = {nullptr};
    (*this).AcceptableRadiusKey.AllowedTypes = {nullptr};
    (*this).BlackboardKey.AllowedTypes = {nullptr, nullptr};
    (*this).NodeName = TEXT("Move To Bleeding");
}

