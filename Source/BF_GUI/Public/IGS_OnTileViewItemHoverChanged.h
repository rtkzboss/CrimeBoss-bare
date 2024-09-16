#pragma once
#include "CoreMinimal.h"
#include "IGS_OnTileViewItemHoverChanged.generated.h"

class UObject;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_OnTileViewItemHoverChanged, const UObject*, inObject, bool, inHovered);
