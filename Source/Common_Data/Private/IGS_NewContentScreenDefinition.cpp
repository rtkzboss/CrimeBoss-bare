#include "IGS_NewContentScreenDefinition.h"

FIGS_NewContentScreenDefinition::FIGS_NewContentScreenDefinition() {
    (*this).itemTag = FGameplayTag();
    (*this).EntitlementTag = FGameplayTag();
    (*this).Title = FText::GetEmpty();
    (*this).Description = FText::GetEmpty();
    (*this).BGImage = FSoftObjectPath();
    (*this).ShowInMenu = false;
}
