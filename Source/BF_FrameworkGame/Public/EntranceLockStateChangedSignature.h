#pragma once
#include "CoreMinimal.h"
#include "EntranceLockStateChangedSignature.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEntranceLockStateChangedSignature, bool, inState);
