#pragma once
#include "CoreMinimal.h"
#include "EAggroType.generated.h"

UENUM(BlueprintType)
enum class EAggroType : uint8 {
    AT_Sight UMETA(DisplayName=Sight),
    AT_Hear UMETA(DisplayName=Hear),
    AT_Damage UMETA(DisplayName=Damage),
    AT_Taunt UMETA(DisplayName=Taunt),
    AT_MAX_INDEX UMETA(DisplayName="MAX INDEX"),
};
