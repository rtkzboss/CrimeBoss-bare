#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_RagdollCollisionHit.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FIGS_RagdollCollisionHit, float, inVelocity, float, inBodyMass, FVector, inBodyLocation);