#include "BTTask_SetUpdateCover.h"

UBTTask_SetUpdateCover::UBTTask_SetUpdateCover() {
    FBlackboardKeySelector gen;
    gen.AddBoolFilter(this, TEXT("UpdateCoverKey"));
    (*this).UpdateCoverKey = gen;
    (*this).NodeName = TEXT("Set Update Cover");
}

