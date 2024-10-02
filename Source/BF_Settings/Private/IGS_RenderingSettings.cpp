#include "IGS_RenderingSettings.h"

UIGS_RenderingSettings::UIGS_RenderingSettings() {
    (*this).FullscreenModeValue = 1;
    (*this).ResolutionScaleValue = 1.000000000e+02f;
    (*this).AntiAliasingQualityValue = 3;
    (*this).MotionBlurScaleFPV = 1.000000000e+00f;
    (*this).MotionBlurScale3PV = 1.000000000e+00f;
    (*this).BaseCameraFOVHorizontal = 1.200000000e+02f;
    (*this).ChosenDisplay = 1;
    (*this).FramerateLimitInGame = 239;
    (*this).FramerateLimitInMenu = 239;
    (*this).FramerateLimitOutOfFocus = 5;
    (*this).bCanChangeMonitorPositions = true;
    (*this).bSettingsValid = true;
}

float UIGS_RenderingSettings::VerticalFOVToActualHorizontalFOV(float inVerticalFOV, FVector2D inViewportSize) {
    return 0.000000000e+00f;
}

void UIGS_RenderingSettings::UseLockpickRenderingSettings(bool inIsLockpicking) {
}

void UIGS_RenderingSettings::UseBotWheelRenderingSettings(bool inIsPaused) {
}

void UIGS_RenderingSettings::SetQualityLevels_Auto(bool inRunBenchmark) {
}

void UIGS_RenderingSettings::SetIsGamePausedInMenu(bool inIsPausedInMenu) {
}

void UIGS_RenderingSettings::SetIsCurrentGameModeMenu(bool inIsMenu) {
}

void UIGS_RenderingSettings::SetFramerateUnlockedCinematic(bool inUnlocked) {
}

UIGS_RenderingSettings* UIGS_RenderingSettings::Instance() {
    return nullptr;
}

float UIGS_RenderingSettings::HorizontalFOV2VerticalFOV(float inHorizontalFOV) {
    return 0.000000000e+00f;
}

TArray<FIntPoint> UIGS_RenderingSettings::GetSupportedScreenResolutions() {
    return {};
}

bool UIGS_RenderingSettings::GetIsSteamDeck() {
    return false;
}

void UIGS_RenderingSettings::EnableReducedTexturePoolSize() {
}

void UIGS_RenderingSettings::EnableMovieCVarSettings() const {
}

void UIGS_RenderingSettings::DisableMovieCVarSettings() const {
}

