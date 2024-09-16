#include "IGS_HitMarkerWidget.h"

UIGS_HitMarkerWidget::UIGS_HitMarkerWidget() {
    (*this).HitMarkersSetting = EIGS_HitMarkersSetting::All;
}




bool UIGS_HitMarkerWidget::IsAiming() const {
    return false;
}

FVector2D UIGS_HitMarkerWidget::GetSightScreenPosition() {
    return FVector2D{};
}

FVector2D UIGS_HitMarkerWidget::GetSightOffsetFromScreenCenter() {
    return FVector2D{};
}

void UIGS_HitMarkerWidget::BindToSimpleShooter(UIGS_SimpleHitScanShooter* inShooter) {
}

