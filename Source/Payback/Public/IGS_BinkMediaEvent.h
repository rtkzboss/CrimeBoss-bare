#pragma once
#include "CoreMinimal.h"
#include "IGS_BinkMediaEvent.generated.h"

class UIGS_PlayBinkMedia;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_BinkMediaEvent, UIGS_PlayBinkMedia*, BinkMediaNodePlayer);
