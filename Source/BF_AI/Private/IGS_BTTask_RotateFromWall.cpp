#include "IGS_BTTask_RotateFromWall.h"

UIGS_BTTask_RotateFromWall::UIGS_BTTask_RotateFromWall() {
    FBlackboardKeySelector gen;
    gen.AddVectorFilter(this, TEXT("LookPosKey"));
    (*this).LookPosKey = gen;
    (*this).NodeName = TEXT("Rotate From Wall");
}

