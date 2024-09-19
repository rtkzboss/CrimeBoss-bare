#include "IGS_BTService_LootingSequence.h"
#include "IGS_LootCollectionBase.h"

UIGS_BTService_LootingSequence::UIGS_BTService_LootingSequence() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("BestLootingCollection_Object_2147482569"), AIGS_LootCollectionBase::StaticClass());
    (*this).BestLootingCollection = gen;
    (*this).NodeName = TEXT("Looting Sequence");
}

