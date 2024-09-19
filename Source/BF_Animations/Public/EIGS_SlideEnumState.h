#pragma once
#include "CoreMinimal.h"
#include "EIGS_SlideEnumState.generated.h"

UENUM(BlueprintType)
enum class EIGS_SlideEnumState : uint8 {
    EBF_Sliding UMETA(DisplayName=Sliding),
    EBF_SlidingTransitionEnd UMETA(DisplayName="Sliding Transition End"),
    EBF_NotSliding UMETA(DisplayName="Not Sliding"),
};
