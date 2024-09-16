#pragma once
#include "CoreMinimal.h"
#include "EInclusionPresetType.generated.h"

UENUM(BlueprintType)
enum class EInclusionPresetType : uint8 {
    None,
    CharacterMissions,
    All,
};
