#pragma once
#include "CoreMinimal.h"
#include "EIGS_MeleeWeaponType.generated.h"

UENUM(BlueprintType)
enum class EIGS_MeleeWeaponType : uint8 {
    MAT_Blunt UMETA(DisplayName=Blunt),
    MAT_Sharp UMETA(DisplayName=Sharp),
};
