#pragma once
#include "CoreMinimal.h"
#include "EIGS_MeleeTraceType.generated.h"

UENUM(BlueprintType)
enum class EIGS_MeleeTraceType : uint8 {
    MTT_Point UMETA(DisplayName=Point),
    MTT_Sphere UMETA(DisplayName=Sphere),
    MTT_Swing UMETA(DisplayName=Swing),
};
