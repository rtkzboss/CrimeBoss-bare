#pragma once
#include "CoreMinimal.h"
#include "WeaponReloadSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWeaponReloadSignature, bool, inIsCombat, bool, inIsEmptyMagazine);

