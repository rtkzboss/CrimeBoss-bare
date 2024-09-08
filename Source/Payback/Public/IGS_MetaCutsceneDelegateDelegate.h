#pragma once
#include "CoreMinimal.h"
#include "IGS_MetaCutsceneDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_MetaCutsceneDelegate, FName, CutsceneID);

