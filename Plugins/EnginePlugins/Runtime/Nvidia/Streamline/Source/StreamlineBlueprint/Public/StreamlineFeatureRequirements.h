#pragma once
#include "CoreMinimal.h"
#include "StreamlineVersion.h"
#include "UStreamlineFeatureRequirementsFlags.h"
#include "UStreamlineFeatureSupport.h"
#include "StreamlineFeatureRequirements.generated.h"

USTRUCT(BlueprintType)
struct FStreamlineFeatureRequirements {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    UStreamlineFeatureSupport Support;

    UPROPERTY(BlueprintReadWrite)
    UStreamlineFeatureRequirementsFlags Requirements;

    UPROPERTY(BlueprintReadWrite)
    FStreamlineVersion RequiredOperatingSystemVersion;

    UPROPERTY(BlueprintReadWrite)
    FStreamlineVersion DetectedOperatingSystemVersion;

    UPROPERTY(BlueprintReadWrite)
    FStreamlineVersion RequiredDriverVersion;

    UPROPERTY(BlueprintReadWrite)
    FStreamlineVersion DetectedDriverVersion;

    STREAMLINEBLUEPRINT_API FStreamlineFeatureRequirements();
};
