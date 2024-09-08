#pragma once
#include "CoreMinimal.h"
#include "EIGS_OffenceNoticedByFlags.generated.h"

UENUM()
enum class EIGS_OffenceNoticedByFlags {
    Notices_Security,
    Notices_Camera,
    Notices_Employees,
    Notices_Civilians,
    Notices_Gangsters,
};

