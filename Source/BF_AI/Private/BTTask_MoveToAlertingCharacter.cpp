#include "BTTask_MoveToAlertingCharacter.h"

UBTTask_MoveToAlertingCharacter::UBTTask_MoveToAlertingCharacter() {
    (*this).LOSStoppingDistance = 3.500000000e+02f;
    (*this).LookPosKey.AllowedTypes = {nullptr};
    (*this).AcceptableRadiusKey.AllowedTypes = {nullptr};
    (*this).BlackboardKey.AllowedTypes = {nullptr, nullptr};
    (*this).NodeName = TEXT("Move To Alerting Character");
}

