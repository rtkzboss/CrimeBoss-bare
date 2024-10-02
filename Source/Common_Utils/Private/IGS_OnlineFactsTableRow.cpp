#include "IGS_OnlineFactsTableRow.h"

FIGS_OnlineFactsTableRow::FIGS_OnlineFactsTableRow() {
    (*this).ID = FGameplayTag();
    (*this).IsActive = false;
    (*this).From = TEXT("0001.01.01-00.00.00");
    (*this).To = TEXT("9999.12.31-23.59.59");
}
