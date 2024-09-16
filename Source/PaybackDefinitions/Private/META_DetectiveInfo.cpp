#include "META_DetectiveInfo.h"

FMETA_DetectiveInfo::FMETA_DetectiveInfo() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).CurrentTurfTileID, 0)) = NAME_None;
    (*this).bCurrentTileNeutralized = false;
    (*this).DaysLeftToStayOnCurrentTile = 0;
    (*this).NeutralizedTiles = {};
}
