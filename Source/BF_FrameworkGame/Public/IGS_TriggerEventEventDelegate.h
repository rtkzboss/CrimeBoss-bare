#pragma once
#include "CoreMinimal.h"
#include "IGS_TriggerEventEventDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_TriggerEventEvent, AActor*, inActor);

