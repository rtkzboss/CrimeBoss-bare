#pragma once
#include "CoreMinimal.h"
#include "IGS_TriggerEventOutputPin.generated.h"

class AActor;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_TriggerEventOutputPin, AActor*, OverlappedActor, AActor*, inOtherActor);
