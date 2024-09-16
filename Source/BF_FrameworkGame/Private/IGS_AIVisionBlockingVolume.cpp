#include "IGS_AIVisionBlockingVolume.h"

AIGS_AIVisionBlockingVolume::AIGS_AIVisionBlockingVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).BrushColor.B = 255;
    (*this).BrushColor.A = 255;
    (*this).bColored = true;
}

