#include "IGS_PerksCustomizationScreen.h"

UIGS_PerksCustomizationScreen::UIGS_PerksCustomizationScreen() {
}

void UIGS_PerksCustomizationScreen::SetGrouppedPerks() {
}

FIGS_PerkGroup UIGS_PerksCustomizationScreen::GetPerkGroupByPerkTag(FGameplayTag inTag, TArray<FIGS_PerkGroup>& inPerkGroups) const {
    return FIGS_PerkGroup{};
}

UMETA_Perk* UIGS_PerksCustomizationScreen::GetOwnedPerkMaxTier(FIGS_PerkGroup& InGroup) const {
    return nullptr;
}

TArray<FIGS_PerkGroup> UIGS_PerksCustomizationScreen::GetGroupedPerks(TArray<UMETA_Perk*> inPerks) const {
    return {};
}

