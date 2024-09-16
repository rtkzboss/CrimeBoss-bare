#include "BTTask_PlayMocapAnimation.h"

UBTTask_PlayMocapAnimation::UBTTask_PlayMocapAnimation() {
    (*this).AnimationCommandKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).AnimationCommandKey, 0)) = 255;
    (*this).NodeName = TEXT("Play Mocap Animation");
}

