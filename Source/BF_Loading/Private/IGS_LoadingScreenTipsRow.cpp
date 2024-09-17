#include "IGS_LoadingScreenTipsRow.h"

FIGS_LoadingScreenTipsRow::FIGS_LoadingScreenTipsRow() {
    (*this).ID = FGameplayTag();
    (*this).Tips = {};
    (*this).ControllerTips = {};
    (*this).KeyboardMouseTips = {};
}
