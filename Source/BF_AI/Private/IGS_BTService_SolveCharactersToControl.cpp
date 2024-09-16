#include "IGS_BTService_SolveCharactersToControl.h"

UIGS_BTService_SolveCharactersToControl::UIGS_BTService_SolveCharactersToControl() {
    (*this).CharacterToZiptieKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).CharacterToZiptieKey, 0)) = 255;
    (*this).CharacterToShoutAt.AllowedTypes = {nullptr};
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).CharacterToShoutAt, 0)) = 255;
    (*this).RefreshDelay = 5.000000000e-01f;
    (*this).NodeName = TEXT("Solve Civilian ToZip");
}

