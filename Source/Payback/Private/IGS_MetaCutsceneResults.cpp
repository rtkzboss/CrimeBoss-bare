#include "IGS_MetaCutsceneResults.h"

FIGS_MetaCutsceneResults::FIGS_MetaCutsceneResults() {
    (*this).DebugText = FText::GetEmpty();
    (*this).Result = 1;
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).ResultTag, 0)) = NAME_None;
    (*this).HideLevel = true;
}
