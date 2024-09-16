#include "BTTask_RotateToFaceBBEntryForever.h"

UBTTask_RotateToFaceBBEntryForever::UBTTask_RotateToFaceBBEntryForever() {
    (*this).BlackboardKey.AllowedTypes = {nullptr, nullptr, nullptr};
    (*this).NodeName = TEXT("Rotate to face BB entry forever");
}

