#pragma once
#include "CoreMinimal.h"
#include "EIGS_SupersamplingMode.generated.h"

UENUM(BlueprintType)
enum class EIGS_SupersamplingMode : uint8 {
    SSM_Off UMETA(DisplayName=Off),
    SSM_DLSS UMETA(DisplayName=DLSS),
    SSM_XeSS UMETA(DisplayName="Xe SS"),
    SSM_FSR UMETA(DisplayName=FSR),
};
