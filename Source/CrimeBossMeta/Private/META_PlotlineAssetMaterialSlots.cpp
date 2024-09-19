#include "META_PlotlineAssetMaterialSlots.h"

FMETA_PlotlineAssetMaterialSlots::FMETA_PlotlineAssetMaterialSlots() {
    (*this).MaterialSlots = TMap<int32, UMaterialInstance*>{};
}
