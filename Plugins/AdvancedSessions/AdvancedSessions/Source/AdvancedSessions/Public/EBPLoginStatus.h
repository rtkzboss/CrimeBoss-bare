#pragma once
#include "CoreMinimal.h"
#include "EBPLoginStatus.generated.h"

UENUM()
enum class EBPLoginStatus : uint8 {
    NotLoggedIn,
    UsingLocalProfile,
    LoggedIn,
};

