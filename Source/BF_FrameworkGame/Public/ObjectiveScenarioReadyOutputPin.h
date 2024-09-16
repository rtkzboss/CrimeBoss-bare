#pragma once
#include "CoreMinimal.h"
#include "ObjectiveScenarioReadyOutputPin.generated.h"

class AIGS_ObjectiveScenarioBase;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FObjectiveScenarioReadyOutputPin, AIGS_ObjectiveScenarioBase*, ObjectiveScenario);
