#include "NISLibrary.h"

UNISLibrary::UNISLibrary() {
}

void UNISLibrary::SetNISSharpness(float Sharpness) {
}

void UNISLibrary::SetNISMode(UNISMode NISMode) {
}

void UNISLibrary::SetNISCustomScreenPercentage(float CustomScreenPercentage) {
}

bool UNISLibrary::IsNISSupported() {
    return false;
}

bool UNISLibrary::IsNISModeSupported(UNISMode NISMode) {
    return false;
}

TArray<UNISMode> UNISLibrary::GetSupportedNISModes() {
    return {};
}

void UNISLibrary::GetNISScreenPercentageRange(float& MinScreenPercentage, float& MaxScreenPercentage) {
}

float UNISLibrary::GetNISRecommendedScreenPercentage(UNISMode NISMode) {
    return 0.000000000e+00f;
}

UNISMode UNISLibrary::GetDefaultNISMode() {
    return UNISMode::Off;
}

