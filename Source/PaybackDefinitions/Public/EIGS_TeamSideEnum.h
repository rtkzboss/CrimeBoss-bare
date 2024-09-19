#pragma once
#include "CoreMinimal.h"
#include "EIGS_TeamSideEnum.generated.h"

UENUM(BlueprintType)
enum class EIGS_TeamSideEnum : uint8 {
    TS_Heisters UMETA(DisplayName=Heisters),
    TS_Security UMETA(DisplayName=Security),
    TS_Cops UMETA(DisplayName=Cops),
    TS_SWAT UMETA(DisplayName=SWAT),
    TS_Civilians UMETA(DisplayName=Civilians),
    TS_Employees UMETA(DisplayName=Employees),
    TS_Gangsters UMETA(DisplayName=Gangsters),
    TS_HeistersBackup UMETA(DisplayName="Heisters Backup"),
    TS_MAX_INDEX UMETA(DisplayName="MAX INDEX"),
    TS_StimuliEvent = 129 UMETA(DisplayName="Stimuli Event"),
    TS_GeneralListener UMETA(DisplayName="General Listener"),
    TS_Unknown = 255 UMETA(DisplayName=Unknown),
};
