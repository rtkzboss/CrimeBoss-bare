#include "BTTask_MoveToWithRepath.h"

UBTTask_MoveToWithRepath::UBTTask_MoveToWithRepath() {
    (*this).RefreshTimeMin = 1.100000024e+00f;
    (*this).RefreshTimeMax = 1.299999952e+00f;
    (*this).LookPosKey.AllowedTypes = {nullptr};
    (*this).AcceptableRadiusKey.AllowedTypes = {nullptr};
    (*this).BlackboardKey.AllowedTypes = {nullptr, nullptr};
    (*this).NodeName = TEXT("Move To With Repath");
}

