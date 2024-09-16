#pragma once
#include "CoreMinimal.h"
#include "IGS_MetaCutsceneResults.h"
#include "IGS_MetaCutsceneResultDelegate.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_MetaCutsceneResultDelegate, FName, CutsceneID, FIGS_MetaCutsceneResults, Results);
