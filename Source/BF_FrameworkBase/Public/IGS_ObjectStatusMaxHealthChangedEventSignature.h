#pragma once
#include "CoreMinimal.h"
#include "IGS_ObjectStatusMaxHealthChangedEventSignature.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_ObjectStatusMaxHealthChangedEventSignature, float, MaxHealth, float, MaxShield);