#pragma once
#include "CoreMinimal.h"
#include "EIGS_DirectionalCueType.generated.h"

UENUM(BlueprintType)
enum class EIGS_DirectionalCueType : uint8 {
    DC_Generic UMETA(DisplayName=Generic),
    DC_Bullet UMETA(DisplayName=Bullet),
    DC_Melee UMETA(DisplayName=Melee),
    DC_Unknown = 255 UMETA(DisplayName=Unknown),
};
