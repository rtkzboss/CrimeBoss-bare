#include "BTService_AIDirectorTacticForCharacter.h"

UBTService_AIDirectorTacticForCharacter::UBTService_AIDirectorTacticForCharacter() {
    (*this).WaveManagerTacticKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).WaveManagerTacticKey, 0)) = 255;
    (*this).NodeName = TEXT("AIDirector Tactic For Character");
}

