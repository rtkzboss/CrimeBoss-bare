#include "IGS_ControllerSettings.h"

UIGS_ControllerSettings::UIGS_ControllerSettings() {
    (*this).ControllerSensitivity = 1.000000000e+00f;
    (*this).LeftDeadzone = 1.000000015e-01f;
    (*this).RightDeadzone = 1.000000015e-01f;
    (*this).ADSMultiplier = 1.000000000e+00f;
    (*this).AimAssistMultiplier = 1.000000000e+00f;
    (*this).VibrationIntensity = 2;
    (*this).bShouldPrioritizeUseInsteadOfReload = true;
    (*this).bSettingsValid = true;
}

UIGS_ControllerSettings* UIGS_ControllerSettings::Instance() {
    return nullptr;
}

float UIGS_ControllerSettings::GetRightTriggerReleaseThreshold() const {
    return 0.000000000e+00f;
}

float UIGS_ControllerSettings::GetRightTriggerPressThreshold() const {
    return 0.000000000e+00f;
}

