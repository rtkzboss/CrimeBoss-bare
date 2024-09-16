#pragma once
#include "CoreMinimal.h"
#include "IGS_CamerasDisabledSignature.generated.h"

class AIGS_SecurityCameraViewer;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_CamerasDisabledSignature, AIGS_SecurityCameraViewer*, inCameraViewer);
