#pragma once
#include "CoreMinimal.h"
#include "EIGS_WallLength.generated.h"

UENUM(BlueprintType)
enum class EIGS_WallLength : uint8 {
    Wall_1m UMETA(DisplayName="1m"),
    Wall_2m UMETA(DisplayName="2m"),
    Wall_4m UMETA(DisplayName="4m"),
};
