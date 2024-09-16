#include "EndGameCutscenesDefinitionRow.h"

FEndGameCutscenesDefinitionRow::FEndGameCutscenesDefinitionRow() {
    (*this).CutsceneID = FText::GetEmpty();
    (*this).Movie = nullptr;
    (*this).EndReason = {};
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).AssetTag, 0)) = NAME_None;
    (*this).Gang = EMETA_Gang::None;
}
