#pragma once
#include "CoreMinimal.h"
#include "EIGS_WeaponAttackType.h"
#include "IGS_WeaponShooterChangedSignature.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_WeaponShooterChangedSignature, EIGS_WeaponAttackType, inWeaponAttack);
