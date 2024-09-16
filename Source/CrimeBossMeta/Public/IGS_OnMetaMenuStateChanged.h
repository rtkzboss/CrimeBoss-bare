#pragma once
#include "CoreMinimal.h"
#include "EMETA_MenuState.h"
#include "IGS_OnMetaMenuStateChanged.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnMetaMenuStateChanged, EMETA_MenuState, inState);
