#pragma once
#include "CoreMinimal.h"
#include "EIGS_OverlapResponseType.generated.h"

UENUM()
enum class EIGS_OverlapResponseType : uint8 {
    ORT_None,
    ORT_NotifyOnly,
    ORT_Penetration,
    ORT_PenetrationNoReduction,
    ORT_Block,
};

