#include "META_MissionOnTileInfo.h"

FMETA_MissionOnTileInfo::FMETA_MissionOnTileInfo() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).OwningTileTag, 0)) = NAME_None;
    (*this).TilePositionIndex = -1;
}
