#pragma once
#include "CoreMinimal.h"
#include "IGS_MetaCutsceneNodeFinishedDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_MetaCutsceneNodeFinishedDelegate, FName, NodeName);

