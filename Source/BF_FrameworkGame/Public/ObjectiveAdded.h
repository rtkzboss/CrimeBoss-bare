#pragma once
#include "CoreMinimal.h"
#include "ObjectiveAdded.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FObjectiveAdded, int32, inID);
