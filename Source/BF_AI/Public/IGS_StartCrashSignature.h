#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "IGS_StartCrashSignature.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_StartCrashSignature, FHitResult, inHitResult);
