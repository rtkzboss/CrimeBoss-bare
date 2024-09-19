#pragma once
#include "CoreMinimal.h"
#include "EIGS_AINotif.generated.h"

UENUM(BlueprintType)
enum class EIGS_AINotif : uint8 {
    AIN_Unknown = 255 UMETA(DisplayName=Unknown),
    AIN_SquadEnemySeen = 0 UMETA(DisplayName="Squad Enemy Seen"),
    AIN_SquadEnemyLost UMETA(DisplayName="Squad Enemy Lost"),
    AIN_SquadLastRoomChanged UMETA(DisplayName="Squad Last Room Changed"),
    AIN_SquadFightStarted UMETA(DisplayName="Squad Fight Started"),
    AIN_SquadFightFinished UMETA(DisplayName="Squad Fight Finished"),
    AIN_SearchPointCleared UMETA(DisplayName="Search Point Cleared"),
};
