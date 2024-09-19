#pragma once
#include "CoreMinimal.h"
#include "ECustomizableObjectGroupType.generated.h"

UENUM(BlueprintType)
enum class ECustomizableObjectGroupType : uint8 {
    COGT_TOGGLE UMETA(DisplayName=TOGGLE),
    COGT_ALL UMETA(DisplayName=ALL),
    COGT_ONE UMETA(DisplayName=ONE),
    COGT_ONE_OR_NONE UMETA(DisplayName="ONE OR NONE"),
};
