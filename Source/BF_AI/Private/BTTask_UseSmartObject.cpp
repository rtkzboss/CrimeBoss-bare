#include "BTTask_UseSmartObject.h"

UBTTask_UseSmartObject::UBTTask_UseSmartObject() {
    (*this).SmartObjectBBKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).SmartObjectBBKey, 0)) = 255;
    (*this).NodeName = TEXT("Use Smart Object");
}

