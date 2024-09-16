#pragma once
#include "CoreMinimal.h"
#include "EExclusionPresetType.generated.h"

UENUM(BlueprintType)
enum class EExclusionPresetType : uint8 {
    None,
    CharacterMissions,
    All,
};
