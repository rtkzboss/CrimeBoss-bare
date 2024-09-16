#include "IGS_BTDecorator_NeedBreakLoot.h"

UIGS_BTDecorator_NeedBreakLoot::UIGS_BTDecorator_NeedBreakLoot() {
    (*this).BestLootingCollection.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).BestLootingCollection, 0)) = 255;
    (*this).NodeName = TEXT("Need Break Loot");
}

