#pragma once
#include "CoreMinimal.h"
#include "EIGS_MessageType.generated.h"

UENUM(BlueprintType)
enum class EIGS_MessageType : uint8 {
    Message_Everyone UMETA(DisplayName=Everyone),
    Message_Whisper UMETA(DisplayName=Whisper),
    Message_System UMETA(DisplayName=System),
};
