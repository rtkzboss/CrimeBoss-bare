#pragma once
#include "CoreMinimal.h"
#include "LerpAnimationOutputDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FLerpAnimationOutput, float, CurrentValue);

