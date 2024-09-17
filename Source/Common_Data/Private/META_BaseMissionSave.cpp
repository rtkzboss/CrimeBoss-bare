#include "META_BaseMissionSave.h"
#include "GameplayTagContainer.h"

FMETA_BaseMissionSave::FMETA_BaseMissionSave() {
    (*this).MissionID = nullptr;
    (*this).MissionOnTileInfo.OwningTileTag = FGameplayTag();
    (*this).MissionOnTileInfo.TilePositionIndex = -1;
}
