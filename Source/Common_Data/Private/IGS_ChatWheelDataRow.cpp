#include "IGS_ChatWheelDataRow.h"

FIGS_ChatWheelDataRow::FIGS_ChatWheelDataRow() {
    (*this).ID = FGameplayTag();
    (*this).Name = FText::GetEmpty();
    (*this).FPSChatText = FText::GetEmpty();
    (*this).IconChar = FText::GetEmpty();
    (*this).StealthVOID = FText::GetEmpty();
    (*this).CombatVOID = FText::GetEmpty();
}
