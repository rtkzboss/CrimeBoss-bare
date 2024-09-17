#include "MapTileRow.h"

FMapTileRow::FMapTileRow() {
    (*this).ID = FGameplayTag();
    (*this).Name = FText::GetEmpty();
    (*this).Neighbours = {};
    (*this).MinWealth = EMETA_TileWealth::Poor;
    (*this).MaxWealth = EMETA_TileWealth::Rich;
    (*this).Type = EMETA_TileType::Empty;
    (*this).Size = EMETA_TileSize::Unlimited;
    (*this).DistrictType = EIGS_HubDistrict::INVALID;
    (*this).BackdropType = EIGS_HubBackdropTypes::AllRandom;
}
