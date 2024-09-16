#include "MapTileRow.h"

FMapTileRow::FMapTileRow() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = NAME_None;
    (*this).Name = FText::GetEmpty();
    (*this).Neighbours = {};
    (*this).MinWealth = EMETA_TileWealth::Poor;
    (*this).MaxWealth = EMETA_TileWealth::Rich;
    (*this).Type = EMETA_TileType::Empty;
    (*this).Size = EMETA_TileSize::Unlimited;
    (*this).DistrictType = EIGS_HubDistrict::INVALID;
    (*this).BackdropType = EIGS_HubBackdropTypes::AllRandom;
}
