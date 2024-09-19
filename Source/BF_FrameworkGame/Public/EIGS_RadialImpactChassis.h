#pragma once
#include "CoreMinimal.h"
#include "EIGS_RadialImpactChassis.generated.h"

UENUM(BlueprintType)
enum class EIGS_RadialImpactChassis : uint8 {
    Hit_None UMETA(DisplayName=None),
    Hit_Front UMETA(DisplayName=Front),
    Hit_FrontLeft UMETA(DisplayName="Front Left"),
    Hit_Left UMETA(DisplayName=Left),
    Hit_RearLeft UMETA(DisplayName="Rear Left"),
    Hit_Rear UMETA(DisplayName=Rear),
    Hit_RearRight UMETA(DisplayName="Rear Right"),
    Hit_Right UMETA(DisplayName=Right),
    Hit_FrontRight UMETA(DisplayName="Front Right"),
};
