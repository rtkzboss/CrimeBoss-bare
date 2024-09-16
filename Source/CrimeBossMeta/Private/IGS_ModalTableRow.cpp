#include "IGS_ModalTableRow.h"

FIGS_ModalTableRow::FIGS_ModalTableRow() {
    (*this).Title = FText::GetEmpty();
    (*this).Text = FText::GetEmpty();
    (*this).AcceptButtonText = FText::GetEmpty();
    (*this).CancelButtonText = FText::GetEmpty();
    (*this).ExtraOptionButtonText = FText::GetEmpty();
    (*this).Image = FSoftObjectPath();
}
