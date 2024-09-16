#pragma once
#include "CoreMinimal.h"
#include "IGS_ClientVariationData.h"
#include "IGS_NetworkDialogueEvent.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_NetworkDialogueEvent, const FIGS_ClientVariationData&, VariationData);
