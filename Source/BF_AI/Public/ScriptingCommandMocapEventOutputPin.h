#pragma once
#include "CoreMinimal.h"
#include "ScriptingCommandMocapEventOutputPin.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FScriptingCommandMocapEventOutputPin, AIGS_GameCharacterFramework*, Character, FName, EventName);