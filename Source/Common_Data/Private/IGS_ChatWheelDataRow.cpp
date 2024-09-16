#include "IGS_ChatWheelDataRow.h"

FIGS_ChatWheelDataRow::FIGS_ChatWheelDataRow() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = NAME_None;
    (*this).Name = FText::GetEmpty();
    (*this).FPSChatText = FText::GetEmpty();
    (*this).IconChar = FText::GetEmpty();
    (*this).StealthVOID = FText::GetEmpty();
    (*this).CombatVOID = FText::GetEmpty();
}
