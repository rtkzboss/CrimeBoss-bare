#pragma once
#include "CoreMinimal.h"
#include "EIGS_PlatformName.generated.h"

UENUM(BlueprintType)
enum class EIGS_PlatformName : uint8 {
    PN_Unknown UMETA(DisplayName=Unknown),
    PN_Windows UMETA(DisplayName=Windows),
    PN_Linux UMETA(DisplayName=Linux),
    PN_PS5 UMETA(DisplayName="PS 5"),
    PN_XBSX UMETA(DisplayName=XBSX),
    PN_XBSS UMETA(DisplayName=XBSS),
    PN_Switch UMETA(DisplayName=Switch),
};
