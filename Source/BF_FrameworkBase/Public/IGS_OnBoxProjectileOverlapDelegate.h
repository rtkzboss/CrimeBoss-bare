#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "IGS_OnBoxProjectileOverlapDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnBoxProjectileOverlap, FHitResult, inHitResult);

