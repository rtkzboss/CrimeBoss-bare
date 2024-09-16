#include "IGS_BTService_SentryRotateToActor.h"

UIGS_BTService_SentryRotateToActor::UIGS_BTService_SentryRotateToActor() {
    (*this).TargetActor.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).TargetActor, 0)) = 255;
    (*this).NodeName = TEXT("Sentry Rotate To Actor");
}

