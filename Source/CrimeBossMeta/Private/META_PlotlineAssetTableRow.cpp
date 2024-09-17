#include "META_PlotlineAssetTableRow.h"

FMETA_PlotlineAssetTableRow::FMETA_PlotlineAssetTableRow() {
    (*this).ID = FGameplayTag();
    (*this).UnlockBossLevel = -1;
    (*this).PreviousVersion = FGameplayTag();
    (*this).NextTier = FGameplayTag();
    (*this).AssetName = FText::GetEmpty();
    (*this).Description = FText::GetEmpty();
    (*this).Image = FSoftObjectPath();
    (*this).Score = 0;
    (*this).BossPointMultiplier = 1.000000000e+00f;
    (*this).bCanBeLost = false;
    (*this).Availability = EMETA_PlotlineAssetAvailability::INVALID;
    (*this).bMustBeBought = false;
    (*this).PriceTag = FGameplayTag();
    (*this).Price = 0;
    (*this).bNotPersistent = false;
}
