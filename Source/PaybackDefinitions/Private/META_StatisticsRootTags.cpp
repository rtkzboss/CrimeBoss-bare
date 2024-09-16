#include "META_StatisticsRootTags.h"

FMETA_StatisticsRootTags::FMETA_StatisticsRootTags() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).BestScoreTag, 0)) = NAME_None;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).CampaignAttempts, 0)) = NAME_None;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).CampaignVictories, 0)) = NAME_None;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).TotalWealth, 0)) = NAME_None;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).FinishedJobs, 0)) = NAME_None;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).FinishedJobsWithoutCasualties, 0)) = NAME_None;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).AverageMissionRating, 0)) = NAME_None;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).OwnedAssets, 0)) = NAME_None;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).DeadCharacters, 0)) = NAME_None;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).MissingCharacters, 0)) = NAME_None;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).ArrestedCharacters, 0)) = NAME_None;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).KilledEnemies, 0)) = NAME_None;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).KilledCivilians, 0)) = NAME_None;
}
