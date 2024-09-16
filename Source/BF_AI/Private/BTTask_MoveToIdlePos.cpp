#include "BTTask_MoveToIdlePos.h"

UBTTask_MoveToIdlePos::UBTTask_MoveToIdlePos() {
    (*this).LookPosKey.AllowedTypes = {nullptr};
    (*this).AcceptableRadiusKey.AllowedTypes = {nullptr};
    (*this).BlackboardKey.AllowedTypes = {nullptr, nullptr};
    (*this).NodeName = TEXT("Move To Idle Pos");
}

