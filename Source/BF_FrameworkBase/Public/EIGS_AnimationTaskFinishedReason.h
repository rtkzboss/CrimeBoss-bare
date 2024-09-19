#pragma once
#include "CoreMinimal.h"
#include "EIGS_AnimationTaskFinishedReason.generated.h"

UENUM(BlueprintType)
enum class EIGS_AnimationTaskFinishedReason : uint8 {
    Reason_Unknown = 255 UMETA(DisplayName=Unknown),
    Reason_Finished = 0 UMETA(DisplayName=Finished),
    Reason_Cancelled UMETA(DisplayName=Cancelled),
    Reason_OwnerDied UMETA(DisplayName="Owner Died"),
    Reason_Damage UMETA(DisplayName=Damage),
    Reason_Aborted UMETA(DisplayName=Aborted),
};
