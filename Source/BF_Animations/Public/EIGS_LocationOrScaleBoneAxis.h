#pragma once
#include "CoreMinimal.h"
#include "EIGS_LocationOrScaleBoneAxis.generated.h"

UENUM(BlueprintType)
enum class EIGS_LocationOrScaleBoneAxis : uint8 {
    BA_None UMETA(DisplayName=None),
    BA_X UMETA(DisplayName=X),
    BA_Y UMETA(DisplayName=Y),
    BA_Z UMETA(DisplayName=Z),
    BA_XY UMETA(DisplayName=XY),
    BA_XZ UMETA(DisplayName=XZ),
    BA_YZ UMETA(DisplayName=YZ),
    BA_XYZ UMETA(DisplayName=XYZ),
};
