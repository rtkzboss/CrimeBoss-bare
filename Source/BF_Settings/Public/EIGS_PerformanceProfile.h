#pragma once
#include "CoreMinimal.h"
#include "EIGS_PerformanceProfile.generated.h"

UENUM(BlueprintType)
enum class EIGS_PerformanceProfile : uint8 {
    PP_Custom UMETA(DisplayName=Custom),
    PP_Low UMETA(DisplayName=Low),
    PP_Medium UMETA(DisplayName=Medium),
    PP_High UMETA(DisplayName=High),
    PP_Epic UMETA(DisplayName=Epic),
    PP_Cinematic UMETA(DisplayName=Cinematic),
    PP_Auto UMETA(DisplayName=Auto),
};
