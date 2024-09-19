#pragma once
#include "CoreMinimal.h"
#include "EIGS_MeleeAttackType.generated.h"

UENUM(BlueprintType)
enum class EIGS_MeleeAttackType : uint8 {
    MAT_Bash UMETA(DisplayName=Bash),
    MAT_Primary UMETA(DisplayName=Primary),
    MAT_Secondary UMETA(DisplayName=Secondary),
    MAT_Light01 UMETA(DisplayName="Light 01"),
    MAT_Light02 UMETA(DisplayName="Light 02"),
    MAT_Light03 UMETA(DisplayName="Light 03"),
    MAT_Light04 UMETA(DisplayName="Light 04"),
    MAT_Light05 UMETA(DisplayName="Light 05"),
    MAT_Light06 UMETA(DisplayName="Light 06"),
    MAT_Light07 UMETA(DisplayName="Light 07"),
    MAT_Light08 UMETA(DisplayName="Light 08"),
    MAT_Light09 UMETA(DisplayName="Light 09"),
};
