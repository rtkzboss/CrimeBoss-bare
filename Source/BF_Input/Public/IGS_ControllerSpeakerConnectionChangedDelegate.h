#pragma once
#include "CoreMinimal.h"
#include "IGS_ControllerSpeakerConnectionChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_ControllerSpeakerConnectionChanged, bool, IsConnected);

