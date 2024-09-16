#include "IGS_PatrolPoint.h"

AIGS_PatrolPoint::AIGS_PatrolPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).DirectionLookAtPosDistance = 1.000000000e+03f;
}

void AIGS_PatrolPoint::SetVisitorManully(AIGS_GameCharacterFramework* inGameCharacter) {
}

AIGS_GameCharacterFramework* AIGS_PatrolPoint::GetVisitor() const {
    return nullptr;
}

EIGS_AIMontageSOVariant AIGS_PatrolPoint::GetRandomAnimation() {
    return EIGS_AIMontageSOVariant::SO_Yawn;
}

