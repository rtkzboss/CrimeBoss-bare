#include "BTTask_SniperOrbitAroundAimPoint.h"

UBTTask_SniperOrbitAroundAimPoint::UBTTask_SniperOrbitAroundAimPoint() {
    (*this).SnipePointKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).SnipePointKey, 0)) = 255;
    (*this).AimType = EIGS_AimType::Combat;
    (*this).NodeName = TEXT("Sniper orbit around aim point");
}

