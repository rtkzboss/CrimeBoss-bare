#pragma once
#include "CoreMinimal.h"
#include "EIGS_SearchPointType.generated.h"

UENUM()
enum class EIGS_SearchPointType {
    Generic,
    Safe,
    Vault,
    Window,
    Camera,
    Weapon,
    Contraband,
    Medkit,
    Civilian,
    Employee,
    Drill,
    Hostage,
};

