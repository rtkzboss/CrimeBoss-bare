#include "IGS_PlotlineSelectionStarItem.h"

FIGS_PlotlineSelectionStarItem::FIGS_PlotlineSelectionStarItem() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).UnlockCriteriaTag, 0)) = NAME_None;
    (*this).Description = FText::GetEmpty();
}
