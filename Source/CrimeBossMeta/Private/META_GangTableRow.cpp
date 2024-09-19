#include "META_GangTableRow.h"

FMETA_GangTableRow::FMETA_GangTableRow() {
    (*this).ID = EMETA_Gang::None;
    (*this).Name = FText::GetEmpty();
    (*this).GangName = FText::GetEmpty();
    (*this).BossGender = ETextGender::Masculine;
    (*this).GangColor = FLinearColor(1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f);
    (*this).BossDescription = FText::GetEmpty();
    (*this).GangDescription = FText::GetEmpty();
    (*this).Image = FSoftObjectPath();
}
