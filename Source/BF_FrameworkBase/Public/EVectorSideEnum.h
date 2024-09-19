#pragma once
#include "CoreMinimal.h"
#include "EVectorSideEnum.generated.h"

UENUM(BlueprintType)
enum class EVectorSideEnum : uint8 {
    VS_Forward UMETA(DisplayName=Forward),
    VS_Right45 UMETA(DisplayName="Right 45"),
    VS_Right90 UMETA(DisplayName="Right 90"),
    VS_Right135 UMETA(DisplayName="Right 135"),
    VS_Left45 UMETA(DisplayName="Left 45"),
    VS_Left90 UMETA(DisplayName="Left 90"),
    VS_Left135 UMETA(DisplayName="Left 135"),
    VS_BackwardRight UMETA(DisplayName="Backward Right"),
    VS_BackwardLeft UMETA(DisplayName="Backward Left"),
    VS_MAX UMETA(Hidden),
    VS_INVALID = 255 UMETA(DisplayName=INVALID),
};
