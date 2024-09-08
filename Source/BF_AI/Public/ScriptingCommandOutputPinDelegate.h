#pragma once
#include "CoreMinimal.h"
#include "ScriptingCommandOutputPinDelegate.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FScriptingCommandOutputPin, AIGS_GameCharacterFramework*, Character);

