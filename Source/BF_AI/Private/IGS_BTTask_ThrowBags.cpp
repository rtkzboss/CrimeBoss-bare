#include "IGS_BTTask_ThrowBags.h"

UIGS_BTTask_ThrowBags::UIGS_BTTask_ThrowBags() {
    (*this).ThrowRequestKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).ThrowRequestKey, 0)) = 255;
    auto gen2 = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("bNoneIsAllowedValue");
    CastField<FBoolProperty>(gen2)->SetPropertyValue(&(*gen2->ContainerPtrToValuePtr<uint8>(&(*this).ThrowRequestKey, 0)), true);
    (*this).NodeName = TEXT("Throw Loot");
}

