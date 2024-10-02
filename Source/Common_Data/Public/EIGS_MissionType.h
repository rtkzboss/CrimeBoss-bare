#pragma once
#include "CoreMinimal.h"
#include "EIGS_MissionType.generated.h"

UENUM(BlueprintType)
enum class EIGS_MissionType : uint8 {
    MT_UNKNOWN = 255 UMETA(DisplayName=UNKNOWN),
    MT_Default = 0 UMETA(DisplayName=Default),
    MT_TurfWar UMETA(DisplayName="Turf War"),
    MT_HordeMode UMETA(DisplayName="Horde Mode"),
};
