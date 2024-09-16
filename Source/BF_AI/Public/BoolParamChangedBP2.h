#pragma once
#include "CoreMinimal.h"
#include "BoolParamChangedBP2.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBoolParamChangedBP2, bool, inIsDefending);
