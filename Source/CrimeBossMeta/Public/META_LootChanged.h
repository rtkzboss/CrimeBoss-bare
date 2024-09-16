#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "META_LootChanged.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMETA_LootChanged, FGameplayTag, LootTag, int32, CurrentValue, int32, ChangedByValue);
