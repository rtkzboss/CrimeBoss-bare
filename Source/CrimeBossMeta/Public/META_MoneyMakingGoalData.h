#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMETA_GoalPurpose.h"
#include "EMETA_GoalStatus.h"
#include "EMETA_Partner.h"
#include "META_MissionID.h"
#include "Templates/SubclassOf.h"
#include "META_MoneyMakingGoalData.generated.h"

class UMETA_TaskCondition;
class UTexture2D;

USTRUCT(BlueprintType)
struct FMETA_MoneyMakingGoalData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Title;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Description;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Icon;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Picture;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_GoalStatus Result;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<UMETA_MissionID>> Missions;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UMETA_TaskCondition*> AssignedTasks;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_Partner InstigatorPartner;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MonetaryValue;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag LootType;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer MissionTypeTags;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 EnemyGangIDs;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_GoalPurpose Purpose;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag EntitlementTag;

    CRIMEBOSSMETA_API FMETA_MoneyMakingGoalData();
};
