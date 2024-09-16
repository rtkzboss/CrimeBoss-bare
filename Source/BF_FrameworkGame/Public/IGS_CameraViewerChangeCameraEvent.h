#pragma once
#include "CoreMinimal.h"
#include "IGS_CameraViewerChangeCameraEvent.generated.h"

class AIGS_DetectorBase;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_CameraViewerChangeCameraEvent, AIGS_DetectorBase*, inNewCamera);
