#pragma once
#include "CoreMinimal.h"
#include "IGS_WeaponAccuracyInfoHolder.h"
#include "IGS_WeaponAccuracyChangedSignature.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_WeaponAccuracyChangedSignature, FIGS_WeaponAccuracyInfoHolder, AccuracyInfoHolder);
