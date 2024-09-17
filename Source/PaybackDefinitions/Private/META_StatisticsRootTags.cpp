#include "META_StatisticsRootTags.h"

FMETA_StatisticsRootTags::FMETA_StatisticsRootTags() {
    (*this).BestScoreTag = FGameplayTag();
    (*this).CampaignAttempts = FGameplayTag();
    (*this).CampaignVictories = FGameplayTag();
    (*this).TotalWealth = FGameplayTag();
    (*this).FinishedJobs = FGameplayTag();
    (*this).FinishedJobsWithoutCasualties = FGameplayTag();
    (*this).AverageMissionRating = FGameplayTag();
    (*this).OwnedAssets = FGameplayTag();
    (*this).DeadCharacters = FGameplayTag();
    (*this).MissingCharacters = FGameplayTag();
    (*this).ArrestedCharacters = FGameplayTag();
    (*this).KilledEnemies = FGameplayTag();
    (*this).KilledCivilians = FGameplayTag();
}
