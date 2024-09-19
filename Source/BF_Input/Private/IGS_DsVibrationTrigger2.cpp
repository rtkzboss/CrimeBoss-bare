#include "IGS_DsVibrationTrigger2.h"

FIGS_DsVibrationTrigger2::FIGS_DsVibrationTrigger2() {
    (*this).Frequency = 0;
    (*this).Amplitudes = TArray<uint8>{0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
}
