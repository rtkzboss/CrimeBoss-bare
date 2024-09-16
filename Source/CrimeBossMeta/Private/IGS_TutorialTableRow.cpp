#include "IGS_TutorialTableRow.h"

FIGS_TutorialTableRow::FIGS_TutorialTableRow() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = NAME_None;
    (*this).SlowDownGame = false;
    (*this).Pages = {};
}
