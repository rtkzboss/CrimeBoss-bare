#pragma once
#include "CoreMinimal.h"
#include "EIGS_AICommandState.generated.h"

UENUM(BlueprintType)
enum class EIGS_AICommandState : uint8 {
    AICS_Running UMETA(DisplayName=Running),
    AICS_Finished UMETA(DisplayName=Finished),
    AICS_Failed UMETA(DisplayName=Failed),
    AICS_Unknown = 255 UMETA(DisplayName=Unknown),
};
