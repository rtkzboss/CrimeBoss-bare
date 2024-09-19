#pragma once
#include "CoreMinimal.h"
#include "EIGS_LightReactionPoseVariant.generated.h"

UENUM(BlueprintType)
enum class EIGS_LightReactionPoseVariant : uint8 {
    D_Standing UMETA(DisplayName=Standing),
    D_Crouching UMETA(DisplayName=Crouching),
    D_LyingOnGround UMETA(DisplayName="Lying On Ground"),
    D_Downstate UMETA(DisplayName=Downstate),
};
