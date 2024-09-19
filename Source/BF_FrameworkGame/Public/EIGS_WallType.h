#pragma once
#include "CoreMinimal.h"
#include "EIGS_WallType.generated.h"

UENUM(BlueprintType)
enum class EIGS_WallType : uint8 {
    Wall_Wall UMETA(DisplayName=Wall),
    Wall_Door UMETA(DisplayName=Door),
    Wall_Window UMETA(DisplayName=Window),
    Wall_Elevator UMETA(DisplayName=Elevator),
    Wall_Shaft UMETA(DisplayName=Shaft),
};
