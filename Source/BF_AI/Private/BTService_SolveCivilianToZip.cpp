#include "BTService_SolveCivilianToZip.h"

UBTService_SolveCivilianToZip::UBTService_SolveCivilianToZip() {
    (*this).CivlianToZipKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).CivlianToZipKey, 0)) = 255;
    (*this).RefreshDelay = 5.000000000e-01f;
    (*this).NodeName = TEXT("Solve Civilian ToZip");
}

