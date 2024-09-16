#pragma once
#include "CoreMinimal.h"
#include "IGS_OnCampingChangedEventSignature.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnCampingChangedEventSignature, bool, inIsCamping);
