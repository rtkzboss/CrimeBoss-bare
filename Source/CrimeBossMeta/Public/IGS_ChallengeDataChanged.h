#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_ChallengeDataChanged.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_ChallengeDataChanged, const FGameplayTag, inTag, int32, InValue);
