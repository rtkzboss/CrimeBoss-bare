#pragma once
#include "CoreMinimal.h"
#include "EIGS_QPModeSource.h"
#include "META_HordeModeMissionSave.h"
#include "UObject/NoExportTypes.h"
#include "EIGS_UserDifficulty.h"
#include "META_MissionID.h"
#include "META_MissionsSave.h"
#include "Templates/SubclassOf.h"
#include "IGS_Quick_JobManagerSaveData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FIGS_Quick_JobManagerSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TSubclassOf<UMETA_MissionID> CurrentJob;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FMETA_MissionsSave Opportunities;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TMap<EIGS_QPModeSource, EIGS_UserDifficulty> LastSelectedDifficulties;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FMETA_MissionsSave LastPlayedMission;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FGuid> FinishedMissionsIDs;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FMETA_HordeModeMissionSave> HordeModeMissions;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool bLastPlayedWasChain;

    FIGS_Quick_JobManagerSaveData();
};
