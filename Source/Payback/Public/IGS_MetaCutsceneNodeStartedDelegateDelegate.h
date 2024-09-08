#pragma once
#include "CoreMinimal.h"
#include "IGS_MetaCutsceneNodeStartedDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_MetaCutsceneNodeStartedDelegate, FName, NodeName);

