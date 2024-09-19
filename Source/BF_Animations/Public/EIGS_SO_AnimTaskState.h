#pragma once
#include "CoreMinimal.h"
#include "EIGS_SO_AnimTaskState.generated.h"

UENUM(BlueprintType)
enum class EIGS_SO_AnimTaskState : uint8 {
    SO_Unknown = 255 UMETA(DisplayName=Unknown),
    SO_Running = 0 UMETA(DisplayName=Running),
    SO_Finished UMETA(DisplayName=Finished),
};
