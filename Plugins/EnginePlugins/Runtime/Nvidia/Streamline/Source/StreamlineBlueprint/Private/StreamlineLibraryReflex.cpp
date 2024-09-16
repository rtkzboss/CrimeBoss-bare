#include "StreamlineLibraryReflex.h"

UStreamlineLibraryReflex::UStreamlineLibraryReflex() {
}

void UStreamlineLibraryReflex::SetReflexMode(const UStreamlineReflexMode Mode) {
}

UStreamlineFeatureSupport UStreamlineLibraryReflex::QueryReflexSupport() {
    return UStreamlineFeatureSupport::Supported;
}

bool UStreamlineLibraryReflex::IsReflexSupported() {
    return false;
}

float UStreamlineLibraryReflex::GetRenderLatencyInMs() {
    return 0.000000000e+00f;
}

UStreamlineReflexMode UStreamlineLibraryReflex::GetReflexMode() {
    return UStreamlineReflexMode::Disabled;
}

float UStreamlineLibraryReflex::GetGameToRenderLatencyInMs() {
    return 0.000000000e+00f;
}

float UStreamlineLibraryReflex::GetGameLatencyInMs() {
    return 0.000000000e+00f;
}

UStreamlineReflexMode UStreamlineLibraryReflex::GetDefaultReflexMode() {
    return UStreamlineReflexMode::Disabled;
}

