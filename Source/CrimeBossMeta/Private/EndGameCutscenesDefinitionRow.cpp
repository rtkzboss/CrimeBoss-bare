#include "EndGameCutscenesDefinitionRow.h"

FEndGameCutscenesDefinitionRow::FEndGameCutscenesDefinitionRow() {
    (*this).CutsceneID = FText::GetEmpty();
    (*this).Movie = nullptr;
    (*this).EndReason = {};
    (*this).AssetTag = FGameplayTag();
    (*this).Gang = EMETA_Gang::None;
}
