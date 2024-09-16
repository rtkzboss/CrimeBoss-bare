#pragma once
#include "CoreMinimal.h"
#include "IGS_OnListViewIsFocusableChanged.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnListViewIsFocusableChanged, bool, inFocusable);
