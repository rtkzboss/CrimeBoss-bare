#pragma once
#include "CoreMinimal.h"
#include "EIGS_WeaponAttackType.generated.h"

UENUM(BlueprintType)
enum class EIGS_WeaponAttackType : uint8 {
    AT_SemiAuto UMETA(DisplayName="Semi Auto"),
    AT_Burst2 UMETA(DisplayName="Burst 2"),
    AT_Burst3 UMETA(DisplayName="Burst 3"),
    AT_FullAuto UMETA(DisplayName="Full Auto"),
    AT_Continuous UMETA(DisplayName=Continuous),
    AT_Charged UMETA(DisplayName=Charged),
    AT_Custom UMETA(DisplayName=Custom),
    AT_GrenadeSemiAuto UMETA(DisplayName="Grenade Semi Auto"),
    AT_MAX UMETA(Hidden),
    AT_UNKNOWN = 255 UMETA(DisplayName=UNKNOWN),
};
