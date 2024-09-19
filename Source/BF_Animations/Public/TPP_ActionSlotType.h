#pragma once
#include "CoreMinimal.h"
#include "TPP_ActionSlotType.generated.h"

UENUM(BlueprintType)
enum class TPP_ActionSlotType : uint8 {
    EBF_TPP_Throw_Started UMETA(DisplayName=Started),
    EBF_TPP_Throw_Finished UMETA(DisplayName=Finished),
    EBF_TPP_Throw_Canceled UMETA(DisplayName=Canceled),
};
