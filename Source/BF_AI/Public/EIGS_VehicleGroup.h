#pragma once
#include "CoreMinimal.h"
#include "EIGS_VehicleGroup.generated.h"

UENUM()
enum class EIGS_VehicleGroup : uint8 {
    CommonCivilian,
    CommonPolice,
    VansCivilian,
    VansPolice,
    HeavyCivilian,
    HeavyCargo,
    Luxury,
    Motorbikes,
};

