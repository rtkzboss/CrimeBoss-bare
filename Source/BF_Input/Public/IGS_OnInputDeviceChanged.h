#pragma once
#include "CoreMinimal.h"
#include "EIGS_InputDevice.h"
#include "IGS_OnInputDeviceChanged.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnInputDeviceChanged, EIGS_InputDevice, inNewInputDevice);