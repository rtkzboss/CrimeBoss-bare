#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "Templates/SubclassOf.h"
#include "IGS_OnAbilityGranted.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnAbilityGranted, TSubclassOf<UGameplayAbility>, inAbility);
