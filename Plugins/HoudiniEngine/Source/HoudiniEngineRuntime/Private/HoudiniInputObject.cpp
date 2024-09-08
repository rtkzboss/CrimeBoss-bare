#include "HoudiniInputObject.h"

UHoudiniInputObject::UHoudiniInputObject() {
    (*this).InputObject = nullptr;
    (*this).InputNodeId = -1;
    (*this).InputObjectNodeId = -1;
    (*this).Guid.A = 1035209416;
    (*this).Guid.B = 1285646467;
    (*this).Guid.C = -808283727;
    (*this).Guid.D = -1423776319;
    (*this).bCanDeleteHoudiniNodes = true;
}


