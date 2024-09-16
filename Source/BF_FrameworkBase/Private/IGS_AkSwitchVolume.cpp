#include "IGS_AkSwitchVolume.h"

AIGS_AkSwitchVolume::AIGS_AkSwitchVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).BrushColor.G = 255;
    (*this).BrushColor.A = 128;
    (*this).bColored = true;
    (*this).bSolidWhenSelected = true;
}

