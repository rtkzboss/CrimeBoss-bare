#pragma once
#include "CoreMinimal.h"
#include "EIGS_FacialEmotionIdles.generated.h"

UENUM(BlueprintType)
enum class EIGS_FacialEmotionIdles : uint8 {
    FEI_Default UMETA(DisplayName=Default),
    FEI_Talking UMETA(DisplayName=Talking),
};
