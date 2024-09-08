#pragma once
#include "CoreMinimal.h"
#include "EIGS_AISpawnAnimaitonVariant.generated.h"

UENUM()
enum class EIGS_AISpawnAnimaitonVariant {
    SP_Unknown = 255,
    SP_Window = 0,
    SP_Wall,
    SP_Rope,
    SP_Ceiling,
};

