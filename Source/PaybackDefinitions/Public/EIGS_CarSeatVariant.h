#pragma once
#include "CoreMinimal.h"
#include "EIGS_CarSeatVariant.generated.h"

UENUM(BlueprintType)
enum class EIGS_CarSeatVariant : uint8 {
    CS_Unknown = 255 UMETA(DisplayName=Unknown),
    CS_0 = 0 UMETA(DisplayName="0"),
    CS_1 UMETA(DisplayName="1"),
    CS_2 UMETA(DisplayName="2"),
    CS_3 UMETA(DisplayName="3"),
    CS_4 UMETA(DisplayName="4"),
    CS_5 UMETA(DisplayName="5"),
    CS_6 UMETA(DisplayName="6"),
    CS_7 UMETA(DisplayName="7"),
    CS_8 UMETA(DisplayName="8"),
    CS_9 UMETA(DisplayName="9"),
};
