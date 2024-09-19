#include "PFEventPoints.h"

FPFEventPoints::FPFEventPoints() {
    (*this).Points = TArray<FEventPoint>{};
    (*this).AllEventHolder = nullptr;
    (*this).Holders = TArray<UEventPointDelegateHolder*>{};
}
