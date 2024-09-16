#include "IGS_LoadingScreenTipsRow.h"

FIGS_LoadingScreenTipsRow::FIGS_LoadingScreenTipsRow() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = NAME_None;
    (*this).Tips = {};
    (*this).ControllerTips = {};
    (*this).KeyboardMouseTips = {};
}
