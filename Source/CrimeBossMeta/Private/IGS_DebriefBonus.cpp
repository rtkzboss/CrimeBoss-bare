#include "IGS_DebriefBonus.h"

FIGS_DebriefBonus::FIGS_DebriefBonus() {
    (*this).Tag = FGameplayTag();
    (*this).BonusValue = 0;
    (*this).BonusName = FText::GetEmpty();
    (*this).BonusTextFormat = FText::GetEmpty();
    (*this).IsMoney = false;
}
