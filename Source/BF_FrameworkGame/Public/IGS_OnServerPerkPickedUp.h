#pragma once
#include "CoreMinimal.h"
#include "IGS_OnServerPerkPickedUp.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnServerPerkPickedUp, UClass*, inClass);
