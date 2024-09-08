#pragma once
#include "CoreMinimal.h"
#include "EIGS_BleedType.generated.h"

UENUM()
enum class EIGS_BleedType : uint8 {
    BT_None,
    BT_MoveableWithCovers,
    BT_Moveable,
    BT_Pinned,
    BT_Injured,
    BT_Died,
};

