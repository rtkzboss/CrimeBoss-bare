#include "IGS_LootBagSingleItem.h"

FIGS_LootBagSingleItem::FIGS_LootBagSingleItem() {
    (*this).ItemClass = nullptr;
    (*this).UniversalData.bUseDefaultValues = true;
    (*this).UniversalData.bUseCustomName = false;
    (*this).UniversalData.UniversalBool_1 = false;
    (*this).UniversalData.UniversalBool_2 = false;
    (*this).UniversalData.UniversalBool_3 = false;
    (*this).UniversalData.UniversalInt_1 = 0;
    (*this).UniversalData.UniversalInt_2 = 0;
    (*this).UniversalData.UniversalInt_3 = 0;
    (*this).UniversalData.UniversalInt_4 = 0;
    (*this).UniversalData.UniversalInt_5 = 0;
    (*this).UniversalData.UniversalFloat_1 = 0.000000000e+00f;
    (*this).UniversalData.UniversalFloat_2 = 0.000000000e+00f;
    (*this).UniversalData.UniversalText_1 = FText::FromString(TEXT(""));
}

