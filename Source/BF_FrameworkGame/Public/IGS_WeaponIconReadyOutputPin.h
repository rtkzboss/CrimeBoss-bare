#pragma once
#include "CoreMinimal.h"
#include "IGS_WeaponIconReadyOutputPin.generated.h"

class UTexture2D;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_WeaponIconReadyOutputPin, UTexture2D*, inWeaponIcon);
