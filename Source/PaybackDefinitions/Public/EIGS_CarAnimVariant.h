#pragma once
#include "CoreMinimal.h"
#include "EIGS_CarAnimVariant.generated.h"

UENUM(BlueprintType)
enum class EIGS_CarAnimVariant : uint8 {
    C_Unknown = 255 UMETA(DisplayName=Unknown),
    C_Sitting = 0 UMETA(DisplayName=Sitting),
    C_GetIn UMETA(DisplayName="Get In"),
    C_GetOut UMETA(DisplayName="Get Out"),
};
