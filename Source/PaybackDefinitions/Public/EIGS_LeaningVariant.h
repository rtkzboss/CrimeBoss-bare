#pragma once
#include "CoreMinimal.h"
#include "EIGS_LeaningVariant.generated.h"

UENUM(BlueprintType)
enum class EIGS_LeaningVariant : uint8 {
    AIM_Unknown = 255 UMETA(DisplayName=Unknown),
    AIM_None = 0 UMETA(DisplayName=None),
    AIM_Left_In UMETA(DisplayName="Left In"),
    AIM_Right_In UMETA(DisplayName="Right In"),
    AIM_Up_In UMETA(DisplayName="Up In"),
    AIM_Left_Out UMETA(DisplayName="Left Out"),
    AIM_Right_Out UMETA(DisplayName="Right Out"),
    AIM_Up_Out UMETA(DisplayName="Up Out"),
};
