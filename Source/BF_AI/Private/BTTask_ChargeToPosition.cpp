#include "BTTask_ChargeToPosition.h"

UBTTask_ChargeToPosition::UBTTask_ChargeToPosition() {
    (*this).LookPosKey.AllowedTypes = {nullptr};
    (*this).AcceptableRadiusKey.AllowedTypes = {nullptr};
    (*this).BlackboardKey.AllowedTypes = {nullptr, nullptr};
    (*this).NodeName = TEXT("Charge To Position");
}

