#pragma once
#include "CoreMinimal.h"
#include "IGS_GUIVisibilityChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_GUIVisibilityChanged, bool, IsGUIVisible);

