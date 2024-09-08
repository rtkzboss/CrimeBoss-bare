#pragma once
#include "CoreMinimal.h"
#include "EIGS_ObjectiveState.h"
#include "TaskChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FTaskChanged, EIGS_ObjectiveState, inState);

