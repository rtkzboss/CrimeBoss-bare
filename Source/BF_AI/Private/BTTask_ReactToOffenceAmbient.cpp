#include "BTTask_ReactToOffenceAmbient.h"

UBTTask_ReactToOffenceAmbient::UBTTask_ReactToOffenceAmbient() {
    (*this).OffenceDataKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).OffenceDataKey, 0)) = 255;
    auto gen2 = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("bNoneIsAllowedValue");
    CastField<FBoolProperty>(gen2)->SetPropertyValue(&(*gen2->ContainerPtrToValuePtr<uint8>(&(*this).OffenceDataKey, 0)), true);
    (*this).NodeName = TEXT("ReactToOffenceAmbient");
}

