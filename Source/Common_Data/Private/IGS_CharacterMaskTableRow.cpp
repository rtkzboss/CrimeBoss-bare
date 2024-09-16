#include "IGS_CharacterMaskTableRow.h"

FIGS_CharacterMaskTableRow::FIGS_CharacterMaskTableRow() {
    (*this).ID = nullptr;
    (*this).MaskMesh = FSoftObjectPath();
    (*this).MaskAkType = EIGS_MaskAkType::None;
}
