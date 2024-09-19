#pragma once
#include "CoreMinimal.h"
#include "EIGS_OffenceNoticedByFlags.generated.h"

UENUM(BlueprintType)
enum class EIGS_OffenceNoticedByFlags : uint8 {
    Notices_Security UMETA(DisplayName=Security),
    Notices_Camera UMETA(DisplayName=Camera),
    Notices_Employees UMETA(DisplayName=Employees),
    Notices_Civilians UMETA(DisplayName=Civilians),
    Notices_Gangsters UMETA(DisplayName=Gangsters),
};
