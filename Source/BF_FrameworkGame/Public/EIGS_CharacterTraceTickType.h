#pragma once
#include "CoreMinimal.h"
#include "EIGS_CharacterTraceTickType.generated.h"

UENUM(BlueprintType)
enum class EIGS_CharacterTraceTickType : uint8 {
    TraceTick_MainLean UMETA(DisplayName="Main Lean"),
    TraceTick_SidesLean UMETA(DisplayName="Sides Lean"),
    TraceTick_Mantle UMETA(DisplayName=Mantle),
};
