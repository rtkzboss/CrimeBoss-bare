#pragma once
#include "CoreMinimal.h"
#include "EIGS_BoneAxis.generated.h"

UENUM(BlueprintType)
enum class EIGS_BoneAxis : uint8 {
    BA_None UMETA(DisplayName=None),
    BA_X UMETA(DisplayName=X),
    BA_Y UMETA(DisplayName=Y),
    BA_Z UMETA(DisplayName=Z),
};
