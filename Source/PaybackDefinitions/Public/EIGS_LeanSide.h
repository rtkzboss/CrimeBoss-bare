#pragma once
#include "CoreMinimal.h"
#include "EIGS_LeanSide.generated.h"

UENUM(BlueprintType)
enum class EIGS_LeanSide : uint8 {
    LeanSide_None UMETA(DisplayName=None),
    LeanSide_Avoid UMETA(DisplayName=Avoid),
    LeanSide_Right UMETA(DisplayName=Right),
    LeanSide_Left UMETA(DisplayName=Left),
    LeanSide_Up UMETA(DisplayName=Up),
    LeanSide_Down UMETA(DisplayName=Down),
};
