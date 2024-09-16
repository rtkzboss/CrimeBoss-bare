#include "IGS_DebriefBonus.h"

FIGS_DebriefBonus::FIGS_DebriefBonus() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).Tag, 0)) = NAME_None;
    (*this).BonusValue = 0;
    (*this).BonusName = FText::GetEmpty();
    (*this).BonusTextFormat = FText::GetEmpty();
    (*this).IsMoney = false;
}
