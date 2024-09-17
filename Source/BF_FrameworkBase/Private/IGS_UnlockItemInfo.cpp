#include "IGS_UnlockItemInfo.h"

FIGS_UnlockItemInfo::FIGS_UnlockItemInfo() {
    (*this).TagID = FGameplayTag();
    (*this).UnlockCategory = EIGS_UnlockCategory::UC_Unknown;
    (*this).Quality = EMETA_ItemQuality::MinGenerate;
    (*this).Name = FText::GetEmpty();
    (*this).Description = FText::GetEmpty();
    (*this).Image = FSoftObjectPath();
    (*this).UnlockCoverImage = FSoftObjectPath();
    (*this).RequiredEntitlementID = FGameplayTag();
    (*this).RequiredTags = FGameplayTagContainer();
    (*this).RequiredValue = 0.000000000e+00f;
    (*this).ShowIfNotOwned = true;
}
