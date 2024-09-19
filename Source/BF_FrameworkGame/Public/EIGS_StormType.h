#pragma once
#include "CoreMinimal.h"
#include "EIGS_StormType.generated.h"

UENUM(BlueprintType)
enum class EIGS_StormType : uint8 {
    ST_Low UMETA(DisplayName=Low),
    ST_Medium UMETA(DisplayName=Medium),
    ST_High UMETA(DisplayName=High),
    ST_VeryHigh UMETA(DisplayName="Very High"),
    ST_Insane UMETA(DisplayName=Insane),
};
