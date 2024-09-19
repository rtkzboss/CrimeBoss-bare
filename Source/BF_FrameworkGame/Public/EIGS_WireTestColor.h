#pragma once
#include "CoreMinimal.h"
#include "EIGS_WireTestColor.generated.h"

UENUM(BlueprintType)
enum class EIGS_WireTestColor : uint8 {
    E_None UMETA(DisplayName=None),
    E_Blue UMETA(DisplayName=Blue),
    E_Green UMETA(DisplayName=Green),
    E_Red UMETA(DisplayName=Red),
};
