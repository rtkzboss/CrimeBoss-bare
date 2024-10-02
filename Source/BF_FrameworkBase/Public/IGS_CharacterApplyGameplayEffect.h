#pragma once
#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "Templates/SubclassOf.h"
#include "IGS_CharacterApplyGameplayEffect.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_CharacterApplyGameplayEffect, TSubclassOf<UGameplayEffect>, inGameplayEffectClass, float, inLevel);
