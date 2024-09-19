#pragma once
#include "CoreMinimal.h"
#include "ESpringTypeEnum.generated.h"

UENUM(BlueprintType)
namespace ESpringTypeEnum {
    enum Type {
        ST_Position UMETA(DisplayName=Position),
        ST_Rotation UMETA(DisplayName=Rotation),
        ST_Scale UMETA(DisplayName=Scale),
        ST_PositionAdditive UMETA(DisplayName="Position Additive"),
        ST_RotationAdditive UMETA(DisplayName="Rotation Additive"),
    };
}
