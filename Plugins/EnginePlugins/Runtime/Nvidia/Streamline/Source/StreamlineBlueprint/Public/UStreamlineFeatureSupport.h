#pragma once
#include "CoreMinimal.h"
#include "UStreamlineFeatureSupport.generated.h"

UENUM()
enum class UStreamlineFeatureSupport : uint8 {
    Supported,
    NotSupported,
    NotSupportedIncompatibleHardware,
    NotSupportedDriverOutOfDate,
    NotSupportedOperatingSystemOutOfDate,
    NotSupportedHardewareSchedulingDisabled,
    NotSupportedByRHI,
    NotSupportedByPlatformAtBuildTime,
    NotSupportedIncompatibleAPICaptureToolActive,
};

