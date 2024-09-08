#pragma once
#include "CoreMinimal.h"
#include "EMETA_MediaNodeType.generated.h"

UENUM()
enum class EMETA_MediaNodeType : uint8 {
    None,
    Cutscene,
    Movie,
    TextScreen,
};

