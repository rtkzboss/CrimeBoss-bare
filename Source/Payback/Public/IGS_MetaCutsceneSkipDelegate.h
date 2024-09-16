#pragma once
#include "CoreMinimal.h"
#include "IGS_MetaCutsceneSkipDelegate.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_MetaCutsceneSkipDelegate, bool, IsSkippable);
