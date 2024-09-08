#pragma once
#include "CoreMinimal.h"
#include "EIGS_DsControllerTypeMask.generated.h"

UENUM()
enum class EIGS_DsControllerTypeMask {
    PlayerController,
    ExternalInputDevices,
    BothControllerTypes,
};

