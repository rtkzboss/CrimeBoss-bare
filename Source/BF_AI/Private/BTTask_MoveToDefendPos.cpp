#include "BTTask_MoveToDefendPos.h"

UBTTask_MoveToDefendPos::UBTTask_MoveToDefendPos() {
    (*this).LookPosKey.AllowedTypes = {nullptr};
    (*this).AcceptableRadiusKey.AllowedTypes = {nullptr};
    (*this).BlackboardKey.AllowedTypes = {nullptr, nullptr};
    (*this).NodeName = TEXT("Move Back To Defend Pos");
}

