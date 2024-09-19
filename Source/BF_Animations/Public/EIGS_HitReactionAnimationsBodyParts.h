#pragma once
#include "CoreMinimal.h"
#include "EIGS_HitReactionAnimationsBodyParts.generated.h"

UENUM(BlueprintType)
enum class EIGS_HitReactionAnimationsBodyParts : uint8 {
    Ch_Front_UpperBody UMETA(DisplayName="Front Upper Body"),
    Ch_Front_LowerBody UMETA(DisplayName="Front Lower Body"),
    Ch_Front_Head UMETA(DisplayName="Front Head"),
    Ch_Right_UpperBody UMETA(DisplayName="Right Upper Body"),
    Ch_Right_LowerBody UMETA(DisplayName="Right Lower Body"),
    Ch_Right_Head UMETA(DisplayName="Right Head"),
    Ch_Back_UpperBody UMETA(DisplayName="Back Upper Body"),
    Ch_Back_LowerBody UMETA(DisplayName="Back Lower Body"),
    Ch_Back_Head UMETA(DisplayName="Back Head"),
    Ch_Left_UpperBody UMETA(DisplayName="Left Upper Body"),
    Ch_Left_LowerBody UMETA(DisplayName="Left Lower Body"),
    Ch_Left_Head UMETA(DisplayName="Left Head"),
    Ch_None UMETA(DisplayName=None),
};
