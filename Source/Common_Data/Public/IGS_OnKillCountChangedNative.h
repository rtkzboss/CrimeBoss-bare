#pragma once
#include "CoreMinimal.h"
#include "IGS_OnKillCountChangedNative.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnKillCountChangedNative, int32, inCount);
