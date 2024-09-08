#pragma once
#include "CoreMinimal.h"
#include "EIGS_CustomSlotFilteringResult.generated.h"

UENUM()
enum class EIGS_CustomSlotFilteringResult {
    Res_Passed,
    Res_Failed,
    Res_Unhandled,
};

