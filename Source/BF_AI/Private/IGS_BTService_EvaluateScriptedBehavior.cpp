#include "IGS_BTService_EvaluateScriptedBehavior.h"

UIGS_BTService_EvaluateScriptedBehavior::UIGS_BTService_EvaluateScriptedBehavior() {
    (*this).PickupBagKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).PickupBagKey, 0)) = 255;
    (*this).NodeName = TEXT("Evaluate Scripted Behavior");
}

