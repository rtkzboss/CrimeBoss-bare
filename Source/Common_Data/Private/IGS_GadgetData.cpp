#include "IGS_GadgetData.h"
#include "GameplayTagContainer.h"
#include "EIGS_ItemType.h"

FIGS_GadgetData::FIGS_GadgetData() {
    (*this).ItemType = EIGS_ItemType::Item_Gadget;
    (*this).ItemOffence = FGameplayTag::RequestGameplayTag(TEXT("Offence.Actor.Item.Gadget"));
}
