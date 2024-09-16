#pragma once
#include "CoreMinimal.h"
#include "META_TaskAddedOrRemoved.generated.h"

class UMETA_BaseGoal;
class UMETA_TaskCondition;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMETA_TaskAddedOrRemoved, UMETA_BaseGoal*, inGoal, bool, bAdded, UMETA_TaskCondition*, Task);
