#pragma once
#include "CoreMinimal.h"
#include "EIGS_SituationalDeathType.generated.h"

UENUM()
enum class EIGS_SituationalDeathType {
    SO_Unknown = 255,
    Wall_Front = 0,
    Wall_Left,
    Wall_Back,
    Wall_Right,
};

