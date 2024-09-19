#include "IGS_LevelTestData.h"

UIGS_LevelTestData::UIGS_LevelTestData() {
    (*this).Level = FSoftObjectPath();
    (*this).Seed = -1;
    (*this).FramerateGridCellSize = 1.000000000e+03f;
    (*this).CameraHeights = TMap<FString, float>{};
    (*this).RenderTargetGamma = 3.000000000e+00f;
}

