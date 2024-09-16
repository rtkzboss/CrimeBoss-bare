#include "META_TurfWarStatistic.h"

FMETA_TurfWarStatistic::FMETA_TurfWarStatistic() {
    (*this).SuccessfulTurfWarAttacks = {};
    (*this).FailedTurfWarAttacks = {};
    (*this).SuccessfulTurfWarDefense = {};
    (*this).FailedTurfWarDefenses = {};
    (*this).TurfsCaptured = {};
    (*this).TurfsAcquiredAsIsolated = {};
    (*this).TurfsLost = {};
    (*this).RecruitedTurfWarSoldiers = 0;
    (*this).LostTurfWarSoldiers = 0;
    (*this).DetectivesNeutralized = 0;
    (*this).BossesEliminated = {};
}
