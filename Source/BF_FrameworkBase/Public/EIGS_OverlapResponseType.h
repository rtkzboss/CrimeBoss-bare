#pragma once
#include "CoreMinimal.h"
#include "EIGS_OverlapResponseType.generated.h"

UENUM(BlueprintType)
enum class EIGS_OverlapResponseType : uint8 {
    ORT_None UMETA(DisplayName=None),
    ORT_NotifyOnly UMETA(DisplayName="Notify Only"),
    ORT_Penetration UMETA(DisplayName=Penetration),
    ORT_PenetrationNoReduction UMETA(DisplayName="Penetration No Reduction"),
    ORT_Block UMETA(DisplayName=Block),
};
