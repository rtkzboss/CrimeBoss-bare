#include "IGS_UnlockRewardMaxAmount.h"

FIGS_UnlockRewardMaxAmount::FIGS_UnlockRewardMaxAmount() {
    (*this).MaxAmountMap = TMap<EMETA_ItemQuality, int32>{};
}
