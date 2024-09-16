#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "EMETA_AmbushGang.h"
#include "EMETA_DebriefType.h"
#include "EMETA_JobType.h"
#include "EMETA_PlacementPriority.h"
#include "META_MissionID.h"
#include "META_AmbushMissionRowInfo.h"
#include "META_CinematicMissionRowInfo.h"
#include "META_DefenceMissionRowInfo.h"
#include "META_FPSMissionRowInfo.h"
#include "META_NeutralAttackMissionRowInfo.h"
#include "META_RivalAttackMissionRowInfo.h"
#include "META_TradeDealSellMissionRowInfo.h"
#include "META_TradeMissionRowInfo.h"
#include "Templates/SubclassOf.h"
#include "META_MissionDatabase.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_MissionDatabase : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UMETA_MissionID> ID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_JobType MissionType;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_FPSMissionRowInfo MissionInfo;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_TradeMissionRowInfo TradeInfo;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_CinematicMissionRowInfo CinematicInfo;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_AmbushMissionRowInfo AmbushInfo;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_RivalAttackMissionRowInfo RivalAttack;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_NeutralAttackMissionRowInfo NeutralAttack;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_DefenceMissionRowInfo Defence;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_TradeDealSellMissionRowInfo TradeDeal;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CanAmbushAppear;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<UMETA_MissionID>> AmbushOverrideIDs;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag AmbushOverrideChance;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AmbushResultOverridesTotalMissionResult;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_AmbushGang AmbushGang;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_DebriefType DebriefType;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_PlacementPriority PlacementPriority;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag SpecialPositionTag;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer AllowedTiles;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer RestrictedTiles;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag EntitlementTag;

    FMETA_MissionDatabase();
};
