#pragma once
#include "CoreMinimal.h"
#include "IGS_LoadoutInitializedSignature.generated.h"

class UIGS_PlayerLoadoutComponent;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_LoadoutInitializedSignature, UIGS_PlayerLoadoutComponent*, inPlayerLoadoutComponent);
