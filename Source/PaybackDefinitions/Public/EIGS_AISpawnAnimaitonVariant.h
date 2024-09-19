#pragma once
#include "CoreMinimal.h"
#include "EIGS_AISpawnAnimaitonVariant.generated.h"

UENUM(BlueprintType)
enum class EIGS_AISpawnAnimaitonVariant : uint8 {
    SP_Unknown = 255 UMETA(DisplayName=Unknown),
    SP_Window = 0 UMETA(DisplayName=Window),
    SP_Wall UMETA(DisplayName=Wall),
    SP_Rope UMETA(DisplayName=Rope),
    SP_Ceiling UMETA(DisplayName=Ceiling),
};
