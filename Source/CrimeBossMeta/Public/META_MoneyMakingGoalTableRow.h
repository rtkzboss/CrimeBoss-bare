#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMETA_Partner.h"
#include "EMETA_RespectLvl.h"
#include "META_Interval.h"
#include "META_MoneyMakingGoalTableRow.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct CRIMEBOSSMETA_API FMETA_MoneyMakingGoalTableRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Title;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Description;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Icon;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Picture;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool UseLockRespectCondition;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_RespectLvl UnlockRespect;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_RespectLvl LockRespect;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_Partner InstigatorPartner;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText TaskTitle;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag LootType;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_Interval MonetaryValue;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer MissionTypeTags;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 EnemyGangIDs;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag EntitlementTag;

    FMETA_MoneyMakingGoalTableRow();
};
