#include "IGS_HitMarkerWidgetSingle.h"

UIGS_HitMarkerWidgetSingle::UIGS_HitMarkerWidgetSingle() {
}

bool UIGS_HitMarkerWidgetSingle::IsAiming() const {
    return false;
}

FVector2D UIGS_HitMarkerWidgetSingle::GetSightScreenPosition() {
    return FVector2D{};
}

FVector2D UIGS_HitMarkerWidgetSingle::GetSightOffsetFromScreenCenter() {
    return FVector2D{};
}

