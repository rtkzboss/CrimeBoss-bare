#pragma once
#include "CoreMinimal.h"
#include "EMETA_ObjectType.generated.h"

UENUM()
enum class EMETA_ObjectType : uint8 {
    None,
    Character,
    Weapon,
    PlotlineAsset,
    Equipment,
};

