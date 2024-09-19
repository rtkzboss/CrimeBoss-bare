#pragma once
#include "CoreMinimal.h"
#include "EIGS_RopeType.generated.h"

UENUM(BlueprintType)
enum class EIGS_RopeType : uint8 {
    RT_None UMETA(DisplayName=None),
    RT_Navlink UMETA(DisplayName=Navlink),
    RT_Helicopter UMETA(DisplayName=Helicopter),
    RT_PlayerRapelling UMETA(DisplayName="Player Rapelling"),
};
