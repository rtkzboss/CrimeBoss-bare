#pragma once
#include "CoreMinimal.h"
#include "EIGS_FlyBySide.generated.h"

UENUM(BlueprintType)
enum class EIGS_FlyBySide : uint8 {
    EST_Left UMETA(DisplayName=Left),
    EST_Right UMETA(DisplayName=Right),
    EST_None = 255 UMETA(DisplayName=None),
};
