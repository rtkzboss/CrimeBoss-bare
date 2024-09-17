#include "META_DetectiveInfo.h"

FMETA_DetectiveInfo::FMETA_DetectiveInfo() {
    (*this).CurrentTurfTileID = FGameplayTag();
    (*this).bCurrentTileNeutralized = false;
    (*this).DaysLeftToStayOnCurrentTile = 0;
    (*this).NeutralizedTiles = {};
}
