#include "IGS_TransformSpring.h"

UIGS_TransformSpring::UIGS_TransformSpring(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).FrameRate = 6.000000000e+01f;
    (*this).PrimaryComponentTick.bCanEverTick = true;
}

void UIGS_TransformSpring::SetTarget(USceneComponent* inTargetComponent, ESpringTypeEnum::Type inSpringType) {
}

void UIGS_TransformSpring::AddVelocity(const FVector& inVelocity) {
}

