#pragma once
#include "CoreMinimal.h"
#include "EIGS_VisionShapeTypes.generated.h"

UENUM(BlueprintType)
enum class EIGS_VisionShapeTypes : uint8 {
    VS_UNKNOWN = 255 UMETA(DisplayName=UNKNOWN),
    VS_None = 0 UMETA(DisplayName=None),
    VS_MainCone UMETA(DisplayName="Main Cone"),
    VS_FrontBox UMETA(DisplayName="Front Box"),
    VS_PeripheralBox UMETA(DisplayName="Peripheral Box"),
    VS_SixthSenseCircle UMETA(DisplayName="Sixth Sense Circle"),
};
