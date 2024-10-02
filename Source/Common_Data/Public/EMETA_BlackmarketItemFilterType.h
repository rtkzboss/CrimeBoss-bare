#pragma once
#include "CoreMinimal.h"
#include "EMETA_BlackmarketItemFilterType.generated.h"

UENUM(BlueprintType)
enum class EMETA_BlackmarketItemFilterType : uint8 {
    Any,
    Group,
    Tags,
    WeaponClass,
    Entitlement,
};
