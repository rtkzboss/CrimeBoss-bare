#include "IGS_BTService_SentryRotateToPoint.h"

UIGS_BTService_SentryRotateToPoint::UIGS_BTService_SentryRotateToPoint() {
    (*this).TargetPoint.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).TargetPoint, 0)) = 255;
    (*this).NodeName = TEXT("Sentry Rotate To Point");
}

