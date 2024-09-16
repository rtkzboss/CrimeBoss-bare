#include "BTTask_MoveToStackPos.h"

UBTTask_MoveToStackPos::UBTTask_MoveToStackPos() {
    (*this).LookPosKey.AllowedTypes = {nullptr};
    (*this).AcceptableRadiusKey.AllowedTypes = {nullptr};
    (*this).BlackboardKey.AllowedTypes = {nullptr, nullptr};
    (*this).NodeName = TEXT("Move To Stack Pos");
}

