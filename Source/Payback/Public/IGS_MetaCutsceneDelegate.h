#pragma once
#include "CoreMinimal.h"
#include "IGS_MetaCutsceneDelegate.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_MetaCutsceneDelegate, FName, CutsceneID);
