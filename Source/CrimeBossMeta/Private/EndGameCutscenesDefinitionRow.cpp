#include "EndGameCutscenesDefinitionRow.h"

FEndGameCutscenesDefinitionRow::FEndGameCutscenesDefinitionRow() {
    (*this).CutsceneID = FText::GetEmpty();
    (*this).Movie = nullptr;
    (*this).EndReason = TArray<EMETA_CareerCompletionReason>{};
    (*this).AssetTag = FGameplayTag();
    (*this).Gang = EMETA_Gang::None;
}
