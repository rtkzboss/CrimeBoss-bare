#include "ScalableMap.h"

AScalableMap::AScalableMap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).TileWidth = 1.000000000e+01f;
    (*this).Grid.X = 4.000000000e+00f;
    (*this).Grid.Y = 4.000000000e+00f;
    (*this).RenderTargetGamma = 3.000000000e+00f;
    (*this).Active = true;
    (*this).DelayTime = 2.000000030e-01f;
    (*this).SaveImagesFilePath = TEXT("D:\\ScalableMapScreenshots\\MapTiles");
    (*this).Filename = TEXT("Demo_Map_Tile");
    (*this).UseSeperateFilePathsForEachResolution = true;
}

