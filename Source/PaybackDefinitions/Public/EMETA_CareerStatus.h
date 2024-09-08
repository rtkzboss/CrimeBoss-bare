#pragma once
#include "CoreMinimal.h"
#include "EMETA_CareerStatus.generated.h"

UENUM()
enum class EMETA_CareerStatus : uint8 {
    None,
    Finished,
    Ongoing,
};

