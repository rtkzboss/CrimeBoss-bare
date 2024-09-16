#include "IGS_NewContentScreenDefinition.h"

FIGS_NewContentScreenDefinition::FIGS_NewContentScreenDefinition() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).itemTag, 0)) = NAME_None;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).EntitlementTag, 0)) = NAME_None;
    (*this).Title = FText::GetEmpty();
    (*this).Description = FText::GetEmpty();
    (*this).BGImage = FSoftObjectPath();
    (*this).ShowInMenu = false;
}
