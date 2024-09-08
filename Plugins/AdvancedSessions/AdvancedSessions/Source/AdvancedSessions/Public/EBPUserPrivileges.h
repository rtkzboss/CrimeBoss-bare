#pragma once
#include "CoreMinimal.h"
#include "EBPUserPrivileges.generated.h"

UENUM()
enum class EBPUserPrivileges : uint8 {
    CanPlay,
    CanPlayOnline,
    CanCommunicateOnline,
    CanUseUserGeneratedContent,
};

