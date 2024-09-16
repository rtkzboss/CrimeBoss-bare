#pragma once
#include "CoreMinimal.h"
#include "IGS_OnPassengerGettingOutDynamicSignature.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnPassengerGettingOutDynamicSignature, int32, inPassengerIndex);
