#pragma once
#include "CoreMinimal.h"
#include "EIGS_ScopeType.generated.h"

UENUM(BlueprintType)
enum class EIGS_ScopeType : uint8 {
    Scope_Normal UMETA(DisplayName=Normal),
    Scope_Thermal UMETA(DisplayName=Thermal),
    Scope_Nightvision UMETA(DisplayName=Nightvision),
    Scope_MAX UMETA(Hidden),
    Scope_INVALID = 255 UMETA(DisplayName=INVALID),
};
