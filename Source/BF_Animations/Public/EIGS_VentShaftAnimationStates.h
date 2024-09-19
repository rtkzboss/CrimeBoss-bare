#pragma once
#include "CoreMinimal.h"
#include "EIGS_VentShaftAnimationStates.generated.h"

UENUM(BlueprintType)
enum class EIGS_VentShaftAnimationStates : uint8 {
    VS_None UMETA(DisplayName=None),
    VS_VentShaftEnter UMETA(DisplayName="Vent Shaft Enter"),
    VS_VentShaftExit UMETA(DisplayName="Vent Shaft Exit"),
};
