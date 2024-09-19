#include "IGS_DefaultInputDeviceSingleSetting.h"

FIGS_DefaultInputDeviceSingleSetting::FIGS_DefaultInputDeviceSingleSetting() {
    (*this).DefaultInputActionKey = TMap<EIGS_InputAction, FInputActionKeyMapping>{};
    (*this).SecondaryInputActionKey = TMap<EIGS_InputAction, FInputActionKeyMapping>{};
}
