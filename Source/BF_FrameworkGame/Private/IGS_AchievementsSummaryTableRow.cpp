#include "IGS_AchievementsSummaryTableRow.h"

FIGS_AchievementsSummaryTableRow::FIGS_AchievementsSummaryTableRow() {
    (*this).ID = 0;
    (*this).Table = nullptr;
    (*this).Release = EIGS_AchievementsReleaseType::BaseGame;
    (*this).UpdateEntitlementTag = FGameplayTag();
}
