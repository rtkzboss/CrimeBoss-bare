#pragma once
#include "CoreMinimal.h"
#include "EIGS_CoverAttackSide.generated.h"

UENUM(BlueprintType)
enum class EIGS_CoverAttackSide : uint8 {
    CAS_Unknown = 255 UMETA(DisplayName=Unknown),
    CAS_None = 0 UMETA(DisplayName=None),
    CAS_Left UMETA(DisplayName=Left),
    CAS_Right UMETA(DisplayName=Right),
    CAS_Up UMETA(DisplayName=Up),
};
