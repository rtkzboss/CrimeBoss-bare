#pragma once
#include "CoreMinimal.h"
#include "EEffectorSpaceEnum.generated.h"

UENUM(BlueprintType)
enum EEffectorSpaceEnum {
    ES_Additive UMETA(DisplayName=Additive),
    ES_World UMETA(DisplayName=World),
    ES_Component UMETA(DisplayName=Component),
};
