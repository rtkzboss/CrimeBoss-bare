#include "IGS_GameSettings.h"

UIGS_GameSettings::UIGS_GameSettings() {
    (*this).Language = TEXT("en-US");
    (*this).bShowPing = true;
    (*this).bUseAltDollarDragon = true;
    (*this).bHalloweenMode = true;
    (*this).MenuBackgroundIndex = -1;
    (*this).bTutorialsEnabled = true;
    (*this).bFriendlyOutline = true;
    (*this).HitMarkersSetting = EIGS_HitMarkersSetting::All;
    (*this).ColorVisionDeficiencySeverity = 5.000000000e+01f;
    (*this).bShowHeisterColorsInSubtitlesValue = true;
    (*this).bUseSystemDefaultLanguage = true;
    (*this).bSettingsValid = true;
}

UIGS_GameSettings* UIGS_GameSettings::Instance() {
    return NULL;
}


