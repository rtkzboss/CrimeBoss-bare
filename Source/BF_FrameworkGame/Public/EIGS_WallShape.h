#pragma once
#include "CoreMinimal.h"
#include "EIGS_WallShape.generated.h"

UENUM(BlueprintType)
enum class EIGS_WallShape : uint8 {
    Wall_Normal UMETA(DisplayName=Normal),
    Wall_Half UMETA(DisplayName=Half),
    Wall_90 UMETA(DisplayName="90"),
    Wall_Shaft UMETA(DisplayName=Shaft),
};
