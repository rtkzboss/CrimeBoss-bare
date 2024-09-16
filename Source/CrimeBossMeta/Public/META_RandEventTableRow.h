#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "EMETA_Gang.h"
#include "EMETA_Heat.h"
#include "EMETA_Partner.h"
#include "EMETA_RandEventCategory.h"
#include "EMETA_RespectLvl.h"
#include "META_FloatInterval.h"
#include "META_MissionID.h"
#include "META_RandEventGangCondition.h"
#include "META_RandEventReward.h"
#include "Templates/SubclassOf.h"
#include "META_RandEventTableRow.generated.h"

USTRUCT(BlueprintType)
struct CRIMEBOSSMETA_API FMETA_RandEventTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag ID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_RandEventCategory EvenCategory;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_Partner Partner;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool UseLockRespectCondition;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_RespectLvl UnlockRespect;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_RespectLvl LockRespect;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_Heat MinHeat;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinInvestigation;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag UnlockAssetID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_RandEventGangCondition TargetGang;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Chance;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CooldownForEvent;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseCutsceneSpecificationPerGang;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FText CutsceneID;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TMap<EMETA_Gang, FText> CutscenesPerGang;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FText DebugText;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSubclassOf<UMETA_MissionID> MissionID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_FloatInterval PriceMultiplier;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCanBeSelectedEvenIfPlayerHasNotEnoughMoney;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FMETA_RandEventReward> Rewards;

    FMETA_RandEventTableRow();
};
