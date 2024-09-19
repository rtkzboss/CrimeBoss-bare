#pragma once
#include "CoreMinimal.h"
#include "EIGS_BleedType.generated.h"

UENUM(BlueprintType)
enum class EIGS_BleedType : uint8 {
    BT_None UMETA(DisplayName=None),
    BT_MoveableWithCovers UMETA(DisplayName="Moveable With Covers"),
    BT_Moveable UMETA(DisplayName=Moveable),
    BT_Pinned UMETA(DisplayName=Pinned),
    BT_Injured UMETA(DisplayName=Injured),
    BT_Died UMETA(DisplayName=Died),
};
