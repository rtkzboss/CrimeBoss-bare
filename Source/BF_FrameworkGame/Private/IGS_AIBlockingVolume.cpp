#include "IGS_AIBlockingVolume.h"

AIGS_AIBlockingVolume::AIGS_AIBlockingVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).BrushColor.G = 255;
    (*this).BrushColor.R = 255;
    (*this).BrushColor.A = 255;
    (*this).bColored = true;
    (*this).bSolidWhenSelected = true;
}

