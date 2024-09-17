#include "IGS_TileItemDataStruct.h"

FIGS_TileItemDataStruct::FIGS_TileItemDataStruct() {
    (*this).ItemId = FGameplayTag();
    (*this).EntitlementTag = FGameplayTag();
    (*this).Image = FSoftObjectPath();
    (*this).Name = FText::GetEmpty();
    (*this).Description = FText::GetEmpty();
    (*this).Price = 0;
    (*this).IsNew = false;
    (*this).IsChallenge = false;
    (*this).HasCustomAction = false;
    (*this).CustomActionText = FText::GetEmpty();
    (*this).IsEquiped = false;
    (*this).CustomEquipedText = FText::GetEmpty();
    (*this).IsTaken = false;
    (*this).CustomTakenText = FText::GetEmpty();
    (*this).Rarity = EMETA_ItemQuality::None;
    (*this).State = EIGS_TileItemState::Locked;
    (*this).Category = EIGS_UnlockCategory::UC_Weapons;
}
