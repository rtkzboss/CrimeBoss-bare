#include "BTTask_MoveToCombatDefendPos.h"

UBTTask_MoveToCombatDefendPos::UBTTask_MoveToCombatDefendPos() {
    (*this).LookPosKey.AllowedTypes = {nullptr};
    (*this).AcceptableRadiusKey.AllowedTypes = {nullptr};
    (*this).BlackboardKey.AllowedTypes = {nullptr, nullptr};
    (*this).NodeName = TEXT("Move To Best Combat Defend Pos");
}

