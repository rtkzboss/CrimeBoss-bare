#pragma once
#include "CoreMinimal.h"
#include "EIGS_HitReactionBodyParts.generated.h"

UENUM(BlueprintType)
enum class EIGS_HitReactionBodyParts : uint8 {
    D_UpperBody UMETA(DisplayName="Upper Body"),
    D_LowerBody UMETA(DisplayName="Lower Body"),
    D_Head UMETA(DisplayName=Head),
    D_None UMETA(DisplayName=None),
};
