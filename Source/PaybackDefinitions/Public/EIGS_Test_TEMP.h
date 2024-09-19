#pragma once
#include "CoreMinimal.h"
#include "EIGS_Test_TEMP.generated.h"

UENUM(BlueprintType)
enum class EIGS_Test_TEMP : uint8 {
    TMP_INVALID = 255 UMETA(DisplayName=INVALID),
    TMP_Test0 = 0 UMETA(DisplayName="Test 0"),
    TMP_Test1 UMETA(DisplayName="Test 1"),
};
