#pragma once
#include "CoreMinimal.h"
#include "EIGS_MuzzleLightState.generated.h"

UENUM(BlueprintType)
enum class EIGS_MuzzleLightState : uint8 {
    MZLS_Off UMETA(DisplayName=Off),
    MZLS_FadingIn UMETA(DisplayName="Fading In"),
    MZLS_Lit UMETA(DisplayName=Lit),
    MZLS_FadingOut UMETA(DisplayName="Fading Out"),
};
