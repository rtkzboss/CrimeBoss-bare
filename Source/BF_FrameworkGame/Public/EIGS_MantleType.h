#pragma once
#include "CoreMinimal.h"
#include "EIGS_MantleType.generated.h"

UENUM(BlueprintType)
enum class EIGS_MantleType : uint8 {
    MantleType_None UMETA(DisplayName=None),
    MantleType_Stand UMETA(DisplayName=Stand),
    MantleType_Crouch UMETA(DisplayName=Crouch),
};
