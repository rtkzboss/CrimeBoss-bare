#include "BTTask_InCoverBleeding.h"

UBTTask_InCoverBleeding::UBTTask_InCoverBleeding() {
    (*this).BlackboardKey.AllowedTypes = {nullptr};
    (*this).NodeName = TEXT("In Cover Bleeding");
}

