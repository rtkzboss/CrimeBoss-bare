#include "META_TurfWarStatistic.h"

FMETA_TurfWarStatistic::FMETA_TurfWarStatistic() {
    (*this).SuccessfulTurfWarAttacks = TMap<EMETA_Gang, int32>{};
    (*this).FailedTurfWarAttacks = TMap<EMETA_Gang, int32>{};
    (*this).SuccessfulTurfWarDefense = TMap<EMETA_Gang, int32>{};
    (*this).FailedTurfWarDefenses = TMap<EMETA_Gang, int32>{};
    (*this).TurfsCaptured = TMap<EMETA_Gang, int32>{};
    (*this).TurfsAcquiredAsIsolated = TArray<FGameplayTag>{};
    (*this).TurfsLost = TMap<EMETA_Gang, int32>{};
    (*this).RecruitedTurfWarSoldiers = 0;
    (*this).LostTurfWarSoldiers = 0;
    (*this).DetectivesNeutralized = 0;
    (*this).BossesEliminated = TArray<EMETA_Gang>{};
}
