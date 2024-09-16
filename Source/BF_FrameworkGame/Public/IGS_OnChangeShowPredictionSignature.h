#pragma once
#include "CoreMinimal.h"
#include "IGS_ThrowableInventoryObject.h"
#include "Templates/SubclassOf.h"
#include "IGS_OnChangeShowPredictionSignature.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_OnChangeShowPredictionSignature, bool, inShow, TSubclassOf<UIGS_ThrowableInventoryObject>, inPredictedClass);
