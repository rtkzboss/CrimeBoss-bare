#pragma once
#include "CoreMinimal.h"
#include "IGS_InteractionStateChanged.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_InteractionStateChanged, bool, inState);
