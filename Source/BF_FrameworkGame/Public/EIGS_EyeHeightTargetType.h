#pragma once
#include "CoreMinimal.h"
#include "EIGS_EyeHeightTargetType.generated.h"

UENUM(BlueprintType)
enum class EIGS_EyeHeightTargetType : uint8 {
    EHT_Unknown UMETA(DisplayName=Unknown),
    EHT_Standing UMETA(DisplayName=Standing),
    EHT_StandingWithGun UMETA(DisplayName="Standing With Gun"),
    EHT_Crouching UMETA(DisplayName=Crouching),
    EHT_CrouchingAndMoving UMETA(DisplayName="Crouching And Moving"),
    EHT_CrouchingAndAiming UMETA(DisplayName="Crouching And Aiming"),
    EHT_DownState UMETA(DisplayName="Down State"),
    EHT_DownStateFromCrouch UMETA(DisplayName="Down State From Crouch"),
    EHT_VentShaft UMETA(DisplayName="Vent Shaft"),
    EHT_Ladder UMETA(DisplayName=Ladder),
    EHT_Buzzsaw UMETA(DisplayName=Buzzsaw),
    EHT_Payload UMETA(DisplayName=Payload),
    EHT_MountedWeapon UMETA(DisplayName="Mounted Weapon"),
    EHT_Sliding UMETA(DisplayName=Sliding),
};
