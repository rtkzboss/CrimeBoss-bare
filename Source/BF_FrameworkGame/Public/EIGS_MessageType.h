#pragma once
#include "CoreMinimal.h"
#include "EIGS_MessageType.generated.h"

UENUM()
enum class EIGS_MessageType {
    Message_Everyone,
    Message_Whisper,
    Message_System,
};

