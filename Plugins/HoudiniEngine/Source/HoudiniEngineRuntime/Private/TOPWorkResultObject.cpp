#include "TOPWorkResultObject.h"

FTOPWorkResultObject::FTOPWorkResultObject() {
    (*this).Name = TEXT("");
    (*this).FilePath = TEXT("");
    (*this).State = EPDGWorkResultState::None;
    (*this).WorkItemResultInfoIndex = -1;
    (*this).ResultOutputs = {};
    (*this).bAutoBakedSinceLastLoad = false;
    auto gen = TBaseStructure<FOutputActorOwner>::Get()->FindPropertyByName("OutputActor");
    (*gen->ContainerPtrToValuePtr<AActor*>(&(*this).OutputActorOwner, 0)) = nullptr;
}
