#include "IGS_JobsScreenCategoryItem.h"

FIGS_JobsScreenCategoryItem::FIGS_JobsScreenCategoryItem() {
    (*this).ButtonImage = FSoftObjectPath();
    (*this).ButtonName = FText::GetEmpty();
    (*this).ButtonDescription = FText::GetEmpty();
    (*this).MissionScenarios = FGameplayTagContainer();
}
