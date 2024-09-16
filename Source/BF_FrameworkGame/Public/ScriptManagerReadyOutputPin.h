#pragma once
#include "CoreMinimal.h"
#include "ScriptManagerReadyOutputPin.generated.h"

class AIGS_ScriptManagerBase;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FScriptManagerReadyOutputPin, AIGS_ScriptManagerBase*, ScriptManager);
