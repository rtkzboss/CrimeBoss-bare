#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BF_OnUnlockMethodChosen.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBF_OnUnlockMethodChosen, FGameplayTag, outMethod);
