#pragma once
#include "CoreMinimal.h"
#include "IGS_GeneralListenerRegistered.generated.h"

class AActor;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_GeneralListenerRegistered, AActor*, inGeneralListener);