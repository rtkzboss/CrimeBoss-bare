#pragma once
#include "CoreMinimal.h"
#include "IGS_OnListViewItemHoverChanged.generated.h"

class UObject;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_OnListViewItemHoverChanged, const UObject*, inObject, bool, inHovered);
