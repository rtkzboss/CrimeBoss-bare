#pragma once
#include "CoreMinimal.h"
#include "EIGS_VisionShapeTypes.generated.h"

UENUM()
enum class EIGS_VisionShapeTypes {
    VS_UNKNOWN = 255,
    VS_None = 0,
    VS_MainCone,
    VS_FrontBox,
    VS_PeripheralBox,
    VS_SixthSenseCircle,
};

