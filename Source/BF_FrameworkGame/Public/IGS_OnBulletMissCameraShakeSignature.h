#pragma once
#include "CoreMinimal.h"
#include "EIGS_FlyBySide.h"
#include "EIGS_SuppressionType.h"
#include "IGS_OnBulletMissCameraShakeSignature.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_OnBulletMissCameraShakeSignature, EIGS_SuppressionType, inSuppressionType, EIGS_FlyBySide, inFlyBySide);
