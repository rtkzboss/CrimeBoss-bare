#include "IGS_AchievementsTableRow.h"

FIGS_AchievementsTableRow::FIGS_AchievementsTableRow() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = NAME_None;
    (*this).PlatformID = NAME_None;
    (*this).Type = EIGS_AchievementType::PerAccount;
    (*this).InitialValue = 0;
    (*this).UnlockValue = 1;
    (*this).SetupUnlockValue = 0;
    (*this).ValuesDivisor = 1;
    (*this).Award = EIGS_AchievementAward::Bronze;
    (*this).EpicXPs = 0;
    (*this).XboxGamerscore = 0;
    (*this).PS5Trophies = 0;
    (*this).Hidden = false;
    (*this).LockedName = FText::GetEmpty();
    (*this).LockedDescription = FText::GetEmpty();
    (*this).UnlockedName = FText::GetEmpty();
    (*this).UnlockedDescription = FText::GetEmpty();
}
