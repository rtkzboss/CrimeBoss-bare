#pragma once
#include "CoreMinimal.h"
#include "EIGS_ObjectiveState.h"
#include "OnOrTaskStateChanged.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnOrTaskStateChanged, EIGS_ObjectiveState, outResult, bool, isA);