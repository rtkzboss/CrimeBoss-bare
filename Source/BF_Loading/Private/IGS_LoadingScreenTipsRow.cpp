#include "IGS_LoadingScreenTipsRow.h"

FIGS_LoadingScreenTipsRow::FIGS_LoadingScreenTipsRow() {
    (*this).ID = FGameplayTag();
    (*this).Tips = TArray<FText>{};
    (*this).ControllerTips = TArray<FText>{};
    (*this).KeyboardMouseTips = TArray<FText>{};
}
