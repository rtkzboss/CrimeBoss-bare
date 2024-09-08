#pragma once
#include "CoreMinimal.h"
#include "EMETA_RespectLvl.generated.h"

UENUM()
enum class EMETA_RespectLvl : uint8 {
    Low,
    Connected,
    Respected,
    Formidable,
    CrimeBoss,
    GodFather,
};

