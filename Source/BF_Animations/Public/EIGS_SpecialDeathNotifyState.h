#pragma once
#include "CoreMinimal.h"
#include "EIGS_SpecialDeathNotifyState.generated.h"

UENUM()
enum class EIGS_SpecialDeathNotifyState : uint8 {
    SD_None,
    SD_Started,
    SD_Stopped,
};

