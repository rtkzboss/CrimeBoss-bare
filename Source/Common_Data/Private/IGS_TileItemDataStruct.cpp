#include "IGS_TileItemDataStruct.h"

FIGS_TileItemDataStruct::FIGS_TileItemDataStruct() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).ItemId, 0)) = NAME_None;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).EntitlementTag, 0)) = NAME_None;
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
