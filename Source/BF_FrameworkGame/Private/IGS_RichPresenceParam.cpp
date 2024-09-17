#include "IGS_RichPresenceParam.h"

FIGS_RichPresenceParam::FIGS_RichPresenceParam() {
    (*this).ID = FGameplayTag();
    (*this).Int = -1;
    (*this).Float = -1.000000000e+00f;
    (*this).Text = FText::GetEmpty();
}
