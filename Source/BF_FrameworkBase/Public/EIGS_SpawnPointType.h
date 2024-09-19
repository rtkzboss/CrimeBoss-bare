#pragma once
#include "CoreMinimal.h"
#include "EIGS_SpawnPointType.generated.h"

UENUM(BlueprintType)
enum class EIGS_SpawnPointType : uint8 {
    SPT_Unknown UMETA(DisplayName=Unknown),
    SPT_Card UMETA(DisplayName=Card),
    SPT_Computer UMETA(DisplayName=Computer),
    SPT_Key UMETA(DisplayName=Key),
    SPT_FuseBox UMETA(DisplayName="Fuse Box"),
    SPT_Note UMETA(DisplayName=Note),
};
