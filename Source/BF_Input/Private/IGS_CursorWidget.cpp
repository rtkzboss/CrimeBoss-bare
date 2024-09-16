#include "IGS_CursorWidget.h"

UIGS_CursorWidget::UIGS_CursorWidget() : Super(FObjectInitializer::Get()) {
}

bool UIGS_CursorWidget::IsCursorHovering() const {
    return false;
}

