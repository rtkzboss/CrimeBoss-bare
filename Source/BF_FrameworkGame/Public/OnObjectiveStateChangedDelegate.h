#pragma once
#include "CoreMinimal.h"
#include "EIGS_ObjectiveState.h"
#include "OnObjectiveStateChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FOnObjectiveStateChanged, EIGS_ObjectiveState, outResult);

