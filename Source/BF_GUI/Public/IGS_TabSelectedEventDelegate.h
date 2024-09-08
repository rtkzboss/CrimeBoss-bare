#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_TabSelectedEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_TabSelectedEvent, FGameplayTag, inScreenTag);

