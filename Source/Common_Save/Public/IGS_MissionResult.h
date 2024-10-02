#pragma once
#include "CoreMinimal.h"
#include "CommonHeisterData.h"
#include "ECommonMissionResult.h"
#include "EIGS_MPLobbyType.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "EIGS_ChainType.h"
#include "EIGS_UserDifficulty.h"
#include "EMETA_DebriefType.h"
#include "EMETA_FPSMissionSubtype.h"
#include "EMETA_LobbyVisibilityType.h"
#include "META_MissionID.h"
#include "CommonDetectiveData.h"
#include "IGS_AdditionalMissionData.h"
#include "IGS_MissionRewardCalculations.h"
#include "Templates/SubclassOf.h"
#include "IGS_MissionResult.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FIGS_MissionResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FText MissionName;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FGuid MissionID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TSubclassOf<UMETA_MissionID> MissionClassID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FGameplayTag MissionTag;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    EMETA_FPSMissionSubtype MissionSubtype;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    ECommonMissionResult MissionResult;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool bCleanExecution;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool bBonusObjective;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 Rating;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 Score;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 TotalQuickplayScore;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 TotalChainScore;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 ObjectiveValue;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FIGS_AdditionalMissionData> AdditionalMissionData;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 BonusValue;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 BonusCash;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FIGS_MissionRewardCalculations> RewardCalculations;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 KilledCivilians;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 KilledPolice;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 KilledGangsters;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 KilledSWAT;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 KilledHeisters;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 RevivesUsed;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FText BonusObjective;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FText MissionObjective;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FCommonHeisterData> Heisters;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FCommonDetectiveData> Detectives;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool bIsChainMission;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool bChainCompleted;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    EIGS_ChainType ChainType;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool bIsFilled;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool bIsDEBUG;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    EIGS_UserDifficulty UserDifficulty;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    EMETA_LobbyVisibilityType LobbyVisibility;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    EIGS_MPLobbyType MPLobbyType;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    EMETA_DebriefType DebriefType;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float GameplayTime;

    FIGS_MissionResult();
};
