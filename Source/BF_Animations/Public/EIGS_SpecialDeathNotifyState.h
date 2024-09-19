#pragma once
#include "CoreMinimal.h"
#include "EIGS_SpecialDeathNotifyState.generated.h"

UENUM(BlueprintType)
enum class EIGS_SpecialDeathNotifyState : uint8 {
    SD_None UMETA(DisplayName=None),
    SD_Started UMETA(DisplayName=Started),
    SD_Stopped UMETA(DisplayName=Stopped),
};
