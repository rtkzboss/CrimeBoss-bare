#include "IGS_RichPresenceTableRow.h"

FIGS_RichPresenceTableRow::FIGS_RichPresenceTableRow() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = NAME_None;
    (*this).Source = FText::GetEmpty();
    (*this).StrEpic = TEXT("");
    (*this).StrSteam = TEXT("");
    (*this).StrXbox = TEXT("");
    (*this).Params = {};
}
