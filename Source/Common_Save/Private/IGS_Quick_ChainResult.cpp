#include "IGS_Quick_ChainResult.h"
#include "Templates/SubclassOf.h"

FIGS_Quick_ChainResult::FIGS_Quick_ChainResult() {
    (*this).MissionName = FText::GetEmpty();
    (*this).ChainContractID = nullptr;
    (*this).StarRating = 0;
    (*this).Score = 0;
    (*this).MoneyRewardTotal = 0;
    (*this).RespectRewardAfterLastMission = 0;
    (*this).WeaponsReward = TArray<TSubclassOf<UMETA_WeaponInventoryObject>>{};
    (*this).WeaponTagsReward = TArray<FGameplayTag>{};
    (*this).QuickMissionResults = TArray<FIGS_MissionResult>{};
    (*this).PlayerHeisters = TArray<FIGS_Quick_ChainPlayerCharacters>{};
    (*this).RemainingHeisters = TArray<FCommonHeisterData>{};
    (*this).Completed = false;
}
