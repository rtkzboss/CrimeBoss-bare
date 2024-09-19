#pragma once
#include "CoreMinimal.h"
#include "EIGS_GRWaitType.generated.h"

UENUM(BlueprintType)
enum class EIGS_GRWaitType : uint8 {
    GW_None UMETA(DisplayName=None),
    GW_Barrel_Notice UMETA(DisplayName="Barrel Notice"),
    GW_Barrel_React UMETA(DisplayName="Barrel React"),
    GW_C4_Notice UMETA(DisplayName="C 4 Notice"),
    GW_C4_React UMETA(DisplayName="C 4 React"),
    GW_Grenade_Notice UMETA(DisplayName="Grenade Notice"),
    GW_Grenade_React UMETA(DisplayName="Grenade React"),
    GW_Unknown = 255 UMETA(DisplayName=Unknown),
};
