#pragma once
#include "CoreMinimal.h"
#include "IGS_MetaCutsceneNodeFinishedDelegate.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_MetaCutsceneNodeFinishedDelegate, FName, NodeName);
