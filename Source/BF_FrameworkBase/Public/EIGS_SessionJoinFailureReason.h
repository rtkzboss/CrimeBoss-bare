#pragma once
#include "CoreMinimal.h"
#include "EIGS_SessionJoinFailureReason.generated.h"

UENUM(BlueprintType)
enum class EIGS_SessionJoinFailureReason : uint8 {
    FR_SessionIsFull UMETA(DisplayName="Session Is Full"),
    FR_SessionDoesNotExist UMETA(DisplayName="Session Does Not Exist"),
    FR_CouldNotRetrieveAddress UMETA(DisplayName="Could Not Retrieve Address"),
    FR_AlreadyInSession UMETA(DisplayName="Already In Session"),
    FR_UnknownError UMETA(DisplayName="Unknown Error"),
    FR_Invalid = 255 UMETA(DisplayName=Invalid),
};
