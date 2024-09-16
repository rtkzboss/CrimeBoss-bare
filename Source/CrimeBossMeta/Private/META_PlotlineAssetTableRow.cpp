#include "META_PlotlineAssetTableRow.h"

FMETA_PlotlineAssetTableRow::FMETA_PlotlineAssetTableRow() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = NAME_None;
    (*this).UnlockBossLevel = -1;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).PreviousVersion, 0)) = NAME_None;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).NextTier, 0)) = NAME_None;
    (*this).AssetName = FText::GetEmpty();
    (*this).Description = FText::GetEmpty();
    (*this).Image = FSoftObjectPath();
    (*this).Score = 0;
    (*this).BossPointMultiplier = 1.000000000e+00f;
    (*this).bCanBeLost = false;
    (*this).Availability = EMETA_PlotlineAssetAvailability::INVALID;
    (*this).bMustBeBought = false;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).PriceTag, 0)) = NAME_None;
    (*this).Price = 0;
    (*this).bNotPersistent = false;
}
