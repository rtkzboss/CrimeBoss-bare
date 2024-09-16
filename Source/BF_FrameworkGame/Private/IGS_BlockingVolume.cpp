#include "IGS_BlockingVolume.h"

AIGS_BlockingVolume::AIGS_BlockingVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).BrushColor.G = 128;
    (*this).BrushColor.R = 255;
    (*this).BrushColor.A = 255;
    (*this).bColored = true;
    (*this).bSolidWhenSelected = true;
}

