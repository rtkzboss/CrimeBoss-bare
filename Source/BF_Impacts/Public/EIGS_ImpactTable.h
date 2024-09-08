#pragma once
#include "CoreMinimal.h"
#include "EIGS_ImpactTable.generated.h"

UENUM()
enum class EIGS_ImpactTable : uint8 {
    None,
    Shot,
    Melee,
    Footstep,
    Destroy,
    Hit,
};

