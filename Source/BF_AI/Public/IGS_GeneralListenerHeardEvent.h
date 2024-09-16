#pragma once
#include "CoreMinimal.h"
#include "Perception/AIPerceptionTypes.h"
#include "IGS_GeneralListenerHeardEvent.generated.h"

class AActor;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_GeneralListenerHeardEvent, AActor*, inActor, FAIStimulus, inStimulus);
