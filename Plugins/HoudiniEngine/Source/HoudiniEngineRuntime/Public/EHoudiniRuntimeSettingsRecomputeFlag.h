#pragma once
#include "CoreMinimal.h"
#include "EHoudiniRuntimeSettingsRecomputeFlag.generated.h"

UENUM(BlueprintType)
enum EHoudiniRuntimeSettingsRecomputeFlag {
    HRSRF_Always UMETA(DisplayName=Always),
    HRSRF_OnlyIfMissing UMETA(DisplayName="Only If Missing"),
    HRSRF_Never UMETA(DisplayName=Never),
};
