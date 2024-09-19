#include "BTTask_PlayMocapAnimation.h"
#include "IGS_AICommand.h"

UBTTask_PlayMocapAnimation::UBTTask_PlayMocapAnimation() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("AnimationCommandKey_Object_2147482495"), UIGS_AICommand::StaticClass());
    (*this).AnimationCommandKey = gen;
    (*this).NodeName = TEXT("Play Mocap Animation");
}

