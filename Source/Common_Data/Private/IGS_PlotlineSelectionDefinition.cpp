#include "IGS_PlotlineSelectionDefinition.h"

FIGS_PlotlineSelectionDefinition::FIGS_PlotlineSelectionDefinition() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).itemTag, 0)) = NAME_None;
    (*this).Name = FText::GetEmpty();
    (*this).Description = FText::GetEmpty();
    (*this).BackgroundImage = FSoftObjectPath();
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).UnlockCriteriaTag, 0)) = NAME_None;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).EntitlementTag, 0)) = NAME_None;
    (*this).LockedMessage = FText::GetEmpty();
    (*this).StarItems = {};
    (*this).IsPlotline = false;
    (*this).IsDebugOnly = false;
}
