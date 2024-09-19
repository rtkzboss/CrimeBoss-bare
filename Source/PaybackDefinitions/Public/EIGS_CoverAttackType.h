#pragma once
#include "CoreMinimal.h"
#include "EIGS_CoverAttackType.generated.h"

UENUM(BlueprintType)
enum class EIGS_CoverAttackType : uint8 {
    CAT_Unknown = 255 UMETA(DisplayName=Unknown),
    CAT_Lean = 0 UMETA(DisplayName=Lean),
    CAT_Peek UMETA(DisplayName=Peek),
};
