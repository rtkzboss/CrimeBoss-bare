#pragma once
#include "CoreMinimal.h"
#include "EIGS_SmartLinkAnimVariant.generated.h"

UENUM(BlueprintType)
enum class EIGS_SmartLinkAnimVariant : uint8 {
    AIM_Unknown = 255 UMETA(DisplayName=Unknown),
    AIM_None = 0 UMETA(DisplayName=None),
    AIM_Open_Door UMETA(DisplayName="Open Door"),
    AIM_Jump_OverObstacle UMETA(DisplayName="Jump Over Obstacle"),
    AIM_Montage UMETA(DisplayName=Montage),
};
