#include "META_PlotlineAssetMaterialStructure.h"

FMETA_PlotlineAssetMaterialStructure::FMETA_PlotlineAssetMaterialStructure() {
    (*this).MaterialStructure = TMap<UStaticMeshComponent*, FMETA_PlotlineAssetMaterialSlots>{};
}
