#pragma once
#include "CoreMinimal.h"
#include "EIGS_VIPSpawnPointDataSource.generated.h"

UENUM(BlueprintType)
enum class EIGS_VIPSpawnPointDataSource : uint8 {
    VD_Automatic UMETA(DisplayName=Automatic),
    VD_FPS UMETA(DisplayName=FPS),
    VD_Story UMETA(DisplayName=Story),
    VD_Old UMETA(DisplayName=Old),
};
