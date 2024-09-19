#pragma once
#include "CoreMinimal.h"
#include "EIGS_TPP_DeathStates.generated.h"

UENUM(BlueprintType)
enum class EIGS_TPP_DeathStates : uint8 {
    D_Stand UMETA(DisplayName=Stand),
    D_HeadShot UMETA(DisplayName="Head Shot"),
    D_CrouchHeadShot UMETA(DisplayName="Crouch Head Shot"),
    D_Run UMETA(DisplayName=Run),
    D_Heavy UMETA(DisplayName=Heavy),
    D_CrouchHeavy UMETA(DisplayName="Crouch Heavy"),
    D_Crouch UMETA(DisplayName=Crouch),
};
