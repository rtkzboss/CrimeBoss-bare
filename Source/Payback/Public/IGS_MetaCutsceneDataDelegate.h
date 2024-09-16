#pragma once
#include "CoreMinimal.h"
#include "IGS_MetaCutsceneDataDelegate.generated.h"

class UIGS_MetaCutsceneDataAsset;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_MetaCutsceneDataDelegate, UIGS_MetaCutsceneDataAsset*, CutsceneData);
