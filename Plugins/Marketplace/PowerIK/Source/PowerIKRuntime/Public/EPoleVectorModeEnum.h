#pragma once
#include "CoreMinimal.h"
#include "EPoleVectorModeEnum.generated.h"

UENUM(BlueprintType)
enum EPoleVectorModeEnum {
    PV_None UMETA(DisplayName=None),
    PV_Position UMETA(DisplayName=Position),
    PV_Bone UMETA(DisplayName=Bone),
    PV_AngleOffset UMETA(DisplayName="Angle Offset"),
};
