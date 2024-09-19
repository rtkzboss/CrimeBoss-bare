#include "META_CityMapManagerSaveData.h"

FMETA_CityMapManagerSaveData::FMETA_CityMapManagerSaveData() {
    (*this).TilesSaveData = TMap<FGameplayTag, FMETA_TileSaveData>{};
    (*this).BaseStrengthOfTiles = TMap<FGameplayTag, int32>{};
    (*this).LastDayOfTilesIncomeRefresh = 0;
}
