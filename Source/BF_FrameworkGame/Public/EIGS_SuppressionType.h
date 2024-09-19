#pragma once
#include "CoreMinimal.h"
#include "EIGS_SuppressionType.generated.h"

UENUM(BlueprintType)
enum class EIGS_SuppressionType : uint8 {
    EST_Normal UMETA(DisplayName=Normal),
    EST_Sniper UMETA(DisplayName=Sniper),
    EST_None = 255 UMETA(DisplayName=None),
};
