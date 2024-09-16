#include "IGS_RenderingSettings.h"

UIGS_RenderingSettings::UIGS_RenderingSettings() {
    (*this).FullscreenModeValue = 1;
    (*this).ResolutionValue = 25;
    (*this).ResolutionScaleValue = 1.000000000e+02f;
    (*this).ProfileValue = 6;
    (*this).ViewDistanceQualityValue = 3;
    (*this).AntiAliasingQualityValue = 3;
    (*this).PostProcessingQualityValue = 3;
    (*this).ShadowQualityValue = 3;
    (*this).TextureQualityValue = 3;
    (*this).VisualEffectQualityValue = 3;
    (*this).FoliageQualityValue = 3;
    (*this).MotionBlurScaleFPV = 1.000000000e+00f;
    (*this).MotionBlurScale3PV = 1.000000000e+00f;
    (*this).BaseCameraFOVHorizontal = 9.000000000e+01f;
    (*this).DLSSMode = 1;
    (*this).ChosenDisplay = 1;
    (*this).bSSREnabled = true;
    (*this).bAOEnabled = true;
    (*this).SharpenFilterStrength = 10;
    (*this).FramerateLimitInGame = 1000;
    (*this).FramerateLimitInMenu = 1000;
    (*this).FramerateLimitOutOfFocus = 30;
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

