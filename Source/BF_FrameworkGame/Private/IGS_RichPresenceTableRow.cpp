#include "IGS_RichPresenceTableRow.h"

FIGS_RichPresenceTableRow::FIGS_RichPresenceTableRow() {
    (*this).ID = FGameplayTag();
    (*this).Source = FText::GetEmpty();
    (*this).StrEpic = TEXT("");
    (*this).StrSteam = TEXT("");
    (*this).StrXbox = TEXT("");
    (*this).Params = TArray<FGameplayTag>{};
}
