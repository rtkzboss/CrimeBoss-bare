#pragma once
#include "CoreMinimal.h"
#include "EIGS_SuppressionType.generated.h"

UENUM()
enum class EIGS_SuppressionType : uint8 {
    EST_Normal,
    EST_Sniper,
    EST_None = 255,
};

