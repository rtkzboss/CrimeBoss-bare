#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "META_GraphVariableChange.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMETA_GraphVariableChange, FGameplayTag, ChangedTag, int32, CurrentValue);
