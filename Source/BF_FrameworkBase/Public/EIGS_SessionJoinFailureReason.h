#pragma once
#include "CoreMinimal.h"
#include "EIGS_SessionJoinFailureReason.generated.h"

UENUM()
enum class EIGS_SessionJoinFailureReason : uint8 {
    FR_SessionIsFull,
    FR_SessionDoesNotExist,
    FR_CouldNotRetrieveAddress,
    FR_AlreadyInSession,
    FR_UnknownError,
    FR_Invalid = 255,
};

