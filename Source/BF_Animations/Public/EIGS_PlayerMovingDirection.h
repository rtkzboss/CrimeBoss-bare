#pragma once
#include "CoreMinimal.h"
#include "EIGS_PlayerMovingDirection.generated.h"

UENUM(BlueprintType)
enum class EIGS_PlayerMovingDirection : uint8 {
    D_Dorward UMETA(DisplayName=Dorward),
    D_Backward UMETA(DisplayName=Backward),
    D_Left UMETA(DisplayName=Left),
    D_Right UMETA(DisplayName=Right),
    D_None UMETA(DisplayName=None),
};
