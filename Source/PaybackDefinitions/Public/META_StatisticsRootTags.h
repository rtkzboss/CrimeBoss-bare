#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "META_StatisticsRootTags.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_StatisticsRootTags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag BestScoreTag;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag CampaignAttempts;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag CampaignVictories;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag TotalWealth;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag FinishedJobs;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag FinishedJobsWithoutCasualties;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag AverageMissionRating;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag OwnedAssets;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag DeadCharacters;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag MissingCharacters;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag ArrestedCharacters;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag KilledEnemies;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag KilledCivilians;

    FMETA_StatisticsRootTags();
};
