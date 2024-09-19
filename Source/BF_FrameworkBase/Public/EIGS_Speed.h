#pragma once
#include "CoreMinimal.h"
#include "EIGS_Speed.generated.h"

UENUM(BlueprintType)
enum class EIGS_Speed : uint8 {
    MS_Walk UMETA(DisplayName=Walk),
    MS_Run UMETA(DisplayName=Run),
    MS_Sprint UMETA(DisplayName=Sprint),
};
